#ifndef CONTROLLER_H
#define CONTROLLER_H

class View;
class Model;
class Controller
{
protected:
    View *view;
    Model *model;
public:
    Controller();
    void notify();
    void action();
    void setView(View* view);
    void setModel(Model* model);
};

#endif // CONTROLLER_H
