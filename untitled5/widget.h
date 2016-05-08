#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_horizontalSlider_valueChanged(int value);

    void on_pushButton_3_clicked();

private:
    Ui::Widget *ui;
    int x, y;
    void keyPressEvent(QKeyEvent*);
    void timerEvent(QTimerEvent*);
    int i, score, bonus;

};

#endif // WIDGET_H
