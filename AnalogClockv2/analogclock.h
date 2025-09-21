#ifndef ANALOGCLOCK_H
#define ANALOGCLOCK_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class analogclock;
}
QT_END_NAMESPACE

class analogclock : public QWidget
{
    Q_OBJECT

public:
    analogclock(QWidget *parent = nullptr);
    //~analogclock();
protected:
    void paintEvent(QPaintEvent *) override;

private:
    Ui::analogclock *ui;
};
#endif // ANALOGCLOCK_H
