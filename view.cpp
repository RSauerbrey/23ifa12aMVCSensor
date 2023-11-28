#include "view.h"
#include "controller.h"
#include <QDebug>
View::View()
{

}

void View::update()
{

}

void View::setController(Controller* controller)
{
    this->controller = controller;
}

void View::action()
{
    qDebug() << "View (Basis): Informiere Controller über User-Action";
    controller->action();
}
