#include "captioningwindow.h"
#include "./ui_captioningwindow.h"

CaptioningWindow::CaptioningWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CaptioningWindow)
{
    ui->setupUi(this);
}

CaptioningWindow::~CaptioningWindow()
{
    delete ui;
}
