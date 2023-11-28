#ifndef VIEW_H
#define VIEW_H
#include <QObject>

class Controller;
class View:public QObject
{
    Q_OBJECT
protected:
    Controller *controller;
    QString out;
public:
    View();
    virtual void update();
    void setController(Controller* controller);
    virtual void setOutput(QString out) = 0;
public slots:
    void action();
};

#endif // VIEW_H
