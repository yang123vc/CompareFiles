#ifndef WIDGETSPLUGIN_GLOBAL_H
#define WIDGETSPLUGIN_GLOBAL_H

#include <QtCore/qglobal.h>
#include "widgetExtentFun.h"

#if defined(WIDGETSPLUGIN_LIBRARY)
#  define WIDGETSPLUGINSHARED_EXPORT Q_DECL_EXPORT
#else
#  define WIDGETSPLUGINSHARED_EXPORT Q_DECL_IMPORT
#endif


#endif // WIDGETSPLUGIN_GLOBAL_H
