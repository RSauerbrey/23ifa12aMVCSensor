#include "viewgui.h"

ViewGUI::ViewGUI()
{
    widget.show();
    connect(widget.getBtnAction(), SIGNAL(clicked()), this, SLOT(action()));
}

void ViewGUI::setOutput(QString out)
{
    qDebug() << "View: Setze Ausgabe-Daten";
    this->out.append(out);
}

void ViewGUI::update()
{
    qDebug() << "View: Kopiere Ausgabe-Daten in Ausgabe";
    widget.getTextOutput()->setText(out);
}
