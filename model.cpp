#include "model.h"
#include <QDebug>
Model::Model()
{
    sensoren[0] = new FeuchteSensor;
}

void Model::update()
{
   qDebug() << "Model: Update von Contoller erhalten";
   qDebug() << "Model: Bereite Update-Infos vor";
   sensorType.append(QString::fromStdString(sensoren[0]->getSensorType()));
}

void Model::setController(Controller* controller)
{
    this->controller = controller;
}

QString Model::getSensorType()
{
    return sensorType;
}

