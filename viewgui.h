#ifndef VIEWGUI_H
#define VIEWGUI_H
#include "view.h"
#include "widget.h"
#include <QObject>

class ViewGUI:public View
{
private:
    Widget widget;
public:
    ViewGUI();
};

#endif // VIEWGUI_H
