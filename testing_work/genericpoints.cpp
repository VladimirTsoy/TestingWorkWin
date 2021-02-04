#include "genericpoints.h"

GenericPoints::GenericPoints(QObject *parent) : QObject(parent)
{
    m_sleep_time = 2;
}


bool GenericPoints::running() const
{
    return m_running;
}


QPointF GenericPoints::point() const
{
    return m_point;
}


int GenericPoints::sleep_time() const
{
    return m_sleep_time;
}


void GenericPoints::change_time(int sec)
{
    m_sleep_time = sec;
}


void GenericPoints::run()
{
    int x = 0, y = 0;
    while (m_running)
    {
        x = getRandomNumber(-20, 20); m_point.setX(x);
        y = getRandomNumber(1, 20); m_point.setY(y);

        emit send_point(m_point);
        QThread::sleep(m_sleep_time);
    }
}


void GenericPoints::setRunning(bool running)
{
    if (m_running == running)
        return;

    m_running = running;
    emit runningChanged(m_running);
}


void GenericPoints::setPoint(QPointF point)
{
    if (m_point == point)
        return;

    m_point = point;
    emit pointChanged(m_point);
}


void GenericPoints::setSleep_time(int sleep_time)
{
    if (m_sleep_time == sleep_time)
        return;

    m_sleep_time = sleep_time;
    emit sleep_timeChanged(m_sleep_time);
}


int GenericPoints::getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);

    /// Равномерно распределяем рандомное число в нашем диапазоне
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}
