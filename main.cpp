#include "widget.h"
#include "controller.h"
#include "view.h"
#include "viewgui.h"
#include "model.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Controller *c;
    c= new Controller;
    Model *m;
    m= new Model;
    View *v;
    v= new ViewGUI;

    c->setModel(m);
    c->setView(v);
    m->setController(c);
    v->setController(c);

    return a.exec();
}
