#include "controller.h"
#include "model.h"
#include "view.h"
#include <QDebug>
#include <iostream>
using namespace std;

Controller::Controller()
{

}

void Controller::notify()
{

}

void Controller::action()
{
    qDebug() << "Controller: Informiere Model -> update";
    model->update();
    qDebug() << "Controller: Hole vom Model die Update-Infos";
    qDebug() << "Controller: Setze Update-Infos in View";
    view->setOutput( model->getSensorType() );
    qDebug() << "Controller: Führe Update in der View aus";
    view->update();
}

void Controller::setView(View* view)
{
    this->view = view;
}

void Controller::setModel(Model* model)
{
    this->model = model;
}
