#include "analogclock.h"
#include "ui_analogclock.h"
#include <QPainter>
#include <QTime>
#include <QTimer>
#include <QPoint>

analogclock::analogclock(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::analogclock)
{
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout,
           this, QOverload<>::of(&analogclock::update));
    timer->start(100);
}

void analogclock::paintEvent(QPaintEvent *)
{
    static const QPoint hourHand[4] = {
        QPoint(5, 14), QPoint(-5, 14), QPoint(-4, -71), QPoint(4, -71)
};
    static const QPoint minuteHand[4] = {
        QPoint(4, 14), QPoint(-4, 14), QPoint(-3, -89), QPoint(3, -89)
};
    static const QPoint secondHand[4] = {
        QPoint(1, 14), QPoint(-1, 14), QPoint(-1, -71), QPoint(1, -71)
};
const QColor hourColor(palette().color(QPalette::Text));
const QColor minuteColor(palette().color(QPalette::Text));
const QColor secondColor(palette().color(QPalette::Accent));

auto side = qMin(width(), height());
QPainter painter(this);
QTime time = QTime::currentTime();

painter.translate(width()/2, height()/2);
painter.scale(side/200.0, side/200.0);

//les heures
painter.setPen(Qt::NoPen);
painter.setBrush(hourColor);
painter.save(); //permet de sauvegarder le painter avant de faire une modification
painter.rotate(30.0 * (time.hour() + time.minute()/60.0));
painter.drawConvexPolygon(hourHand, 4);
painter.restore();

//marques des heures
painter.save();
for (int i = 0 ; i<12 ; ++i) {
    painter.drawRect(73, -3, 16, 6);
    painter.rotate(30.0);
}
painter.restore();

//les minutes
painter.setPen(Qt::NoPen);
painter.setBrush(minuteColor);
painter.save();
painter.rotate(6.0 * (time.minute()));
painter.drawConvexPolygon(minuteHand, 4);
painter.restore();

//marques des minutes/secondes
painter.save();
painter.setPen(minuteColor);
for (int i = 0 ; i<60 ; ++i) {
    painter.drawLine(92, 0, 96, 0);
    painter.rotate(6.0);
}
painter.restore();

//les secondes
painter.save();
painter.setBrush(secondColor);
painter.rotate(6.0 * (time.second() + time.msec()/1000.0));
painter.drawConvexPolygon(secondHand, 4);
painter.drawEllipse(-3, -3, 6, 6);
painter.drawEllipse(-5, -68, 10, 10);
painter.restore();

}
