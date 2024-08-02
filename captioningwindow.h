#ifndef CAPTIONINGWINDOW_H
#define CAPTIONINGWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class CaptioningWindow;
}
QT_END_NAMESPACE

class CaptioningWindow : public QMainWindow
{
    Q_OBJECT

public:
    CaptioningWindow(QWidget *parent = nullptr);
    ~CaptioningWindow();

private:
    Ui::CaptioningWindow *ui;
};
#endif // CAPTIONINGWINDOW_H
