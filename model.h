#ifndef MODEL_H
#define MODEL_H
#include "sensor.h"

class Controller;
class Model
{
protected:
    Controller *controller;
    Sensor *sensoren[10];
public:
    Model();
    void update();
    void setController(Controller* controller);
};

#endif // MODEL_H
