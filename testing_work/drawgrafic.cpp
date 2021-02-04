#include "drawgrafic.h"

DrawGrafic::DrawGrafic(QWidget *parent) : QWidget(parent)
{
    play.setText("Start");  play.setFixedSize(QSize(60, 40));
    pause.setText("Pause"); pause.setFixedSize(QSize(60, 40));
    stop.setText("Stop");   stop.setFixedSize(QSize(60, 40));

    hbox.addStretch(10);
    hbox.addWidget(&play);
    hbox.addWidget(&pause);
    hbox.addWidget(&stop);
    hbox.addStretch(10);
    hbox.setSpacing(10);

    vbox.addWidget(&pain);
    vbox.addLayout(&hbox);
    vbox.setMargin(7);
    pain.setParent(this);

    this->setLayout(&vbox);

        /// Соединяем сигналы кнопок
    connect(&play, SIGNAL(clicked(bool)), this, SLOT(on_play_clicked()));
    connect(&pause, SIGNAL(clicked(bool)), this, SLOT(on_pause_clicked()));
    connect(&stop, SIGNAL(clicked(bool)), this, SLOT(on_stop_clicked()));

    connect(&thread, &QThread::started, &gen_poin, &GenericPoints::run);    // Соединяем старт потока с генерацией точек
    connect(&gen_poin, &GenericPoints::finished, &thread, &QThread::terminate); // Связываем сигнал окончания с окночанием потока
    connect(&gen_poin, &GenericPoints::send_point, &pain, &Painter::add_point, Qt::DirectConnection);   // Отправка и получение точек
    gen_poin.moveToThread(&thread); // Передаем объект в поток
}


void DrawGrafic::on_play_clicked()
{
    if( !thread.isRunning() )
    {
        gen_poin.setRunning(true);
        thread.start();
    }
}

void DrawGrafic::on_stop_clicked()
{
    gen_poin.setRunning(false);

    if(thread.isRunning())
        gen_poin.finished();

    pain.refresh();
    pain.repaint();
}

void DrawGrafic::on_pause_clicked()
{
    gen_poin.setRunning(false);

    if(thread.isRunning())
        gen_poin.finished();
}
