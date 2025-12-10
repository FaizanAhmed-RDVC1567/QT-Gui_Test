#ifndef BATTERYWIDGET_H
#define BATTERYWIDGET_H

#include <QWidget>
#include <windows.h>

class BatteryWidget : public QWidget {
    Q_OBJECT

public:
    BatteryWidget(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event) override;

private:
    SYSTEM_POWER_STATUS sps;
    void updateBatteryStatus();
}

#endif // BATTERYWIDGET_H
