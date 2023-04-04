#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    resize(400, 500);

    QRandomGenerator* rg = QRandomGenerator::global();

    gen_timer = new QTimer(this);
    gen_timer->start(0);

    connect(gen_timer, &QTimer::timeout, [this, rg](){

        gen_timer->setInterval(rg->bounded(100, 1000));

        QPushButton* btn = new QPushButton("*", this);
        btn->resize(20, 20);
        int btn_x = rg->bounded(0, this->width() - 20);
        btn->move(btn_x, 100);
        btn->show();

        btn_timer = new QTimer(this);
        btn_timer->start(rg->bounded(30, 150));

        connect(btn, &QPushButton::clicked, btn, &QPushButton::deleteLater);

        connect(btn_timer, &QTimer::timeout, [btn, this](){

            int btn_moving = btn->underMouse() ? 2 : 1;
            btn->move(btn->pos().x(), btn->pos().y() + btn_moving);

            if (btn->pos().y() + 20 >= this->height()){
                setWindowTitle("POTRACHENO");
                this->setStyleSheet("background-color:red;");
                btn->deleteLater();
            }
        });

    });
}

MainWindow::~MainWindow()
{
}

