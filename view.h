#ifndef VIEW_H
#define VIEW_H
#include <QObject>

class Controller;
class View:public QObject
{
    Q_OBJECT
protected:
    Controller *controller;

public:
    View();
    void update();
    void setController(Controller* controller);
public slots:
    void action();
};

#endif // VIEW_H
