#ifndef DRAWGRAFIC_H
#define DRAWGRAFIC_H

//#include <QWidget>
#include <QtWidgets>
#include <QRandomGenerator>
#include "painter.h"
#include "genericpoints.h"

class DrawGrafic : public QWidget
{
    Q_OBJECT

public:
    explicit DrawGrafic(QWidget *parent = nullptr);

private:
    QVBoxLayout vbox;
    QHBoxLayout hbox;
    QPushButton play, stop, pause;
    Painter pain;
    GenericPoints gen_poin;
    QThread thread;

private slots:
    void on_play_clicked();
    void on_stop_clicked();
    void on_pause_clicked();
};

#endif // DRAWGRAFIC_H
