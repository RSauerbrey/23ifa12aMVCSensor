#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::action()
{

}

QPushButton* Widget::getBtnAction()
{
    return ui->btnAction;
}

QTextEdit* Widget::getTextOutput()
{
    return ui->txtOutput;
}
