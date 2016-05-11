#include "widget.h"
#include "ui_widget.h"
#include <QKeyEvent>
#include <unistd.h>
#include <QTime>
#include <cstdlib>
#include <ctime>
#include <QMessageBox>
#include <string>
#include <cstring>
#include <QMediaPlayer>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    a = new QMediaPlayer(this);
    a->setMedia(QUrl("qrc:/Nevereverland.mp3"));
    a->play();
    ui->label_2->hide();
    ui->label_3->hide();
    ui->label_12->hide();
    i = 1;
    bonus = 0;
    x = 2;
    y = 1;
    ui->horizontalSlider->setRange(0,3);
    ui->horizontalSlider->setValue(0);
    score = 0;
    ui->lcdNumber->display(30);
    /*QObject::startTimer(1000);*/
}

Widget::~Widget()
{
    delete ui;
}

void Widget::timerEvent(QTimerEvent *){
    ui->lcdNumber->display(ui->lcdNumber->value() - i);

    if(ui->lcdNumber->intValue() == 0){
         QString a = "you get ";
         if(score < 10){
         char de[2];
         de[0] = score + '0';
         a.insert(8,de);
         }
         else{
             char de1[3];
             de1[0] = (score / 10) + '0';
             de1[1] = (score % 10) + '0';
             a.insert(8,de1);
         }

         a += " Do you want to restart the game?";
        /* a += "points. Do you want to restart the game?";*/
        switch(QMessageBox::information(this,"Question",a,
                QMessageBox::Ok|QMessageBox::Cancel,QMessageBox::Ok))
            {
            case QMessageBox::Ok:
                ui->label_2->hide();
                ui->label_2->move(QPoint(450, ui->label_2->y()));
                ui->label_3->hide();
                ui->label_3->move(QPoint(450, ui->label_3->y()));

                ui->lcdNumber->display(30);
                score = 0;
                ui->lcdNumber_2->display(score);
                break;
            case QMessageBox::Cancel:
                this->close();
                this->a->stop();
                break;
            default:
                break;
            }
    }
}

void Widget::keyPressEvent(QKeyEvent *event){
    /*QTime t;
    if(event->key() == Qt::Key_K){
        if(ui->label_2->x() < 100 && ui->label_2->x() > 40){
            ui->label_2->hide();
            while(1){
                int i = rand() % 2;
                switch(i){
                    case 0:
                    if(ui->label_7->x() == 390){
                        ui->label_7->show();
                        while(ui->label_7->x() >=0){
                            ui->label_7->move(QPoint(ui->label_7->x()-1, ui->label_7->y()));
                            t.start();
                            while(t.elapsed()<50)
                                QCoreApplication::processEvents();
                        }
                        ui->label_7->hide();
                        ui->label_7->move(QPoint(390, ui->label_7->y()));
                    }
                    break;

                    case 1:
                    if(ui->label_6->x() == 390){
                        ui->label_6->show();
                        while(ui->label_6->x() >=0){
                            ui->label_6->move(QPoint(ui->label_6->x()-1, ui->label_6->y()));
                            t.start();
                            while(t.elapsed()<30)
                                QCoreApplication::processEvents();
                        }
                        ui->label_6->hide();
                        ui->label_6->move(QPoint(390, ui->label_6->y()));
                    }
                    break;
                }
                t.start();
                while(t.elapsed()<250)
                    QCoreApplication::processEvents();
            }
        }
    }

    if(event->key() == Qt::Key_U){
        if(ui->label_3->x() < 100 && ui->label_3->x() > 40)
            ui->label_3->hide();
    }*/

    QTime t;
    if(event->key() == Qt::Key_K ){

        if(ui->label_3->x() < 60 && ui->label_3->x() > 10){
            ui->label_3->hide();
            ui->label_3->move(QPoint(5, ui->label_3->y()));
            ui->label_12->show();
            score = score + 1 + bonus * 1;
            ui->lcdNumber_2->display(score);
            t.start();
            while(t.elapsed()<200)
                QCoreApplication::processEvents();
            ui->label_12->hide();
        }
    }
    if(event->key() == Qt::Key_U){
        if(ui->label_2->x() < 60 && ui->label_2->x() > 10){
            ui->label_2->hide();
            ui->label_2->move(QPoint(5, ui->label_2->y()));
            ui->label_12->show();
            score = score + 1 + bonus * 1;
            ui->lcdNumber_2->display(score);
            t.start();
            while(t.elapsed()<200)
                QCoreApplication::processEvents();
            ui->label_12->hide();
        }
    }
}
void Widget::on_pushButton_clicked()
{
    ui->label_7->hide();
    ui->pushButton->hide();
    ui->pushButton_3->hide();
    srand(time(NULL));
    QTime t;
    QObject::startTimer(1000);
    ui->label_2->hide();

    ui->label_3->hide();

    /*while(ui->label_2->x() >= 0){
        ui->label_2->move(QPoint(ui->label_2->x() - 2, ui->label_2->y()));
        ui->label_3->move(QPoint(ui->label_3->x() - 1, ui->label_3->y()));
        t.start();
        while(t.elapsed()<10)
            QCoreApplication::processEvents();
    }
    ui->label_2->hide();

    while(ui->label_3->x() >= 0){
        ui->label_3->move(QPoint(ui->label_3->x() - 1, ui->label_3->y()));
        t.start();
        while(t.elapsed()<10)
            QCoreApplication::processEvents();
    }
    ui->label_3->hide();
    ui->label_5->show();*/
    while(1){
        int i = rand() % 2;
        switch(i){
            case 0:
            ui->label_3->show();
            while(ui->label_3->x() >=0){
                ui->label_3->move(QPoint(ui->label_3->x()-x, ui->label_3->y()));
                t.start();
                while(t.elapsed()<8)
                    QCoreApplication::processEvents();
            }
            ui->label_3->hide();
            ui->label_3->move(QPoint(450, ui->label_3->y()));
            break;

            case 1:
            ui->label_2->show();
            while(ui->label_2->x() >=0){
                ui->label_2->move(QPoint(ui->label_2->x()-y, ui->label_2->y()));
                t.start();
                while(t.elapsed()<5)
                    QCoreApplication::processEvents();
            }
            ui->label_2->hide();
            ui->label_2->move(QPoint(450, ui->label_2->y()));
            break;
        }
        t.start();
        while(t.elapsed()<200)
            QCoreApplication::processEvents();
    }

    /* QTime t;
    while(ui->label_2->x() >= 0){
        ui->label_2->move(QPoint(ui->label_2->x() - 2, ui->label_2->y()));
        ui->label_3->move(QPoint(ui->label_3->x() - 1, ui->label_3->y()));
        t.start();
        while(t.elapsed()<10)
            QCoreApplication::processEvents();
    }*/
}

void Widget::on_pushButton_2_clicked()
{
    this->close();
    a->stop();
}

void Widget::on_horizontalSlider_valueChanged(int value)
{
    x = 2 + value;
    y = 1 + value;
    bonus = 0 + value;
}

void Widget::on_pushButton_3_clicked()
{
    QMessageBox::information(this,"Tip",tr("red button is K \n""blue button is U \n"),
                    QMessageBox::Ok|QMessageBox::Cancel,QMessageBox::Ok);
}
