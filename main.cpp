
#include <QFile>
#include <QFont>
#include <QApplication>
#include <QTextStream>

#include "SecWindow.h"
#include "ui_SecWindow.h"
#include "ui_MainWindow.h"
#include "MainWindow.h"
#include "ThirWindow.h"
#include "ui_ThirWindow.h"
#include "ui_FourWIndow.h"
#include "FourWindow.h"
#include "FivWindow.h"
#include "ui_FivWindow.h"
#include "sixwindow.h"
#include "ui_sixwindow.h"
#include "sevwindow.h"
#include "ui_sevwindow.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
