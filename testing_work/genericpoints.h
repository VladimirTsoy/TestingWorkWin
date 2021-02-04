#ifndef GENERICPOINTS_H
#define GENERICPOINTS_H

#include <QObject>
#include <QPointF>
#include <QPoint>
#include <QThread>
#include <QDebug>

class GenericPoints: public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool running READ running WRITE setRunning NOTIFY runningChanged)    // Для запуска цикла
    Q_PROPERTY(QPointF point READ point WRITE setPoint NOTIFY pointChanged) // Для генерации точки и передачи в другой поток
    Q_PROPERTY(int sleep_time READ sleep_time WRITE setSleep_time NOTIFY sleep_timeChanged) // Для установки зависания

    bool m_running;
    QPointF m_point;

public:
    explicit GenericPoints(QObject *parent = nullptr);

    bool running() const;
    QPointF point() const;
    int sleep_time() const;
    void change_time(int sec);

public slots:
    void run();                     // Здесь будем генерить точки
    void setRunning(bool running);  // Установка условия цикла
    void setPoint(QPointF point);   // Установка точки
    void setSleep_time(int sleep_time); // Установка зависания

signals:
    void finished();                // Сигнал для остановки потока
    void send_point(QPointF point); // Для отправки точки
    void runningChanged(bool running);
    void pointChanged(QPointF point);
    void sleep_timeChanged(int sleep_time);

private:
    int getRandomNumber(int min, int max);
    int m_sleep_time;
};

#endif // GENERICPOINTS_H
