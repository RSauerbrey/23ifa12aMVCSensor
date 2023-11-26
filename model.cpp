#include "model.h"

Model::Model()
{
    sensoren[0] = new FeuchteSensor;
}

void Model::update()
{

}

void Model::setController(Controller* controller)
{
    this->controller = controller;
}
