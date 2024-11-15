#include "xswitchbuttonplugin.h"
#include "xswitchbutton.h"

#include <QtPlugin>

XSwitchButtonPlugin::XSwitchButtonPlugin(QObject *parent)
    : QObject(parent)
{}

void XSwitchButtonPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool XSwitchButtonPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *XSwitchButtonPlugin::createWidget(QWidget *parent)
{
    return new XSwitchButton(parent);
}

QString XSwitchButtonPlugin::name() const
{
    return QLatin1String("XSwitchButton");
}

QString XSwitchButtonPlugin::group() const
{
    return QLatin1String("xWidgets");
}

QIcon XSwitchButtonPlugin::icon() const
{
    return QIcon(QLatin1String(":/switch_button.svg"));
}

QString XSwitchButtonPlugin::toolTip() const
{
    return QLatin1String("this is a switch button");
}

QString XSwitchButtonPlugin::whatsThis() const
{
    return QLatin1String("this is a switch button");
}

bool XSwitchButtonPlugin::isContainer() const
{
    return false;
}

QString XSwitchButtonPlugin::domXml() const
{
    return QLatin1String(R"(<widget class="XSwitchButton" name="xSwitchButton">
</widget>)");
}

QString XSwitchButtonPlugin::includeFile() const
{
    return QLatin1String("xwidgets/xswitchbutton.h");
}
