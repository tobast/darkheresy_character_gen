#ifndef CHARACTERISTICDISPLAY_H
#define CHARACTERISTICDISPLAY_H

#include <QWidget>

namespace Ui {
class CharacteristicDisplay;
}

class CharacteristicDisplay : public QWidget
{
    Q_OBJECT

public:
    explicit CharacteristicDisplay(QString characName, int val=0, QWidget *parent = 0);
    ~CharacteristicDisplay();

    void setValue(int val);

private:
    Ui::CharacteristicDisplay *ui;
};

#endif // CHARACTERISTICDISPLAY_H
