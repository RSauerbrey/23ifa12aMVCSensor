#ifndef MODEL_H
#define MODEL_H
#include "sensor.h"
#include <QString>

class Controller;
class Model
{
protected:
    Controller *controller;
    Sensor *sensoren[10];

    QString sensorType;

public:
    Model();
    void update();
    void setController(Controller* controller);
    QString getSensorType();
};

#endif // MODEL_H
