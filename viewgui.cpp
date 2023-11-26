#include "viewgui.h"

ViewGUI::ViewGUI()
{
    widget.show();
    connect(widget.getBtnAction(), SIGNAL(clicked()), this, SLOT(action()));
}


