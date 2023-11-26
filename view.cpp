#include "view.h"
#include "controller.h"
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
    controller->action();
}
