#include <batterywidget.h>
#include <QPainter>
#include <QTimer>

BatteryWidget::BatteryWidget(QWidget parent) : QWidget(parent) {
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &BatteryWidget::updateBatteryStatus);
    timer->start(1000); // basically update every second
    updateBatteryStatus();
}

void BatteryWidget::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    if(GetSystemPowerStatus(&sps)) {
        int batteryPercent = sps.BatteryLifePercent;
        painter.drawText(rect(), Qt::AlignCenter, QString("Battery: %1%").arg(batteryPercent));
    } else {
        painter.drawText(rect(), Qt::AlignCenter, "Failed to get power status.");
    }
}

void BatteryWidget::updateBatteryStatus() {
    update();
}
