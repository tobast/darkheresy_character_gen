#ifndef WEAPONDISPLAY_H
#define WEAPONDISPLAY_H

#include <QFrame>
#include <QString>

namespace Ui {
class WeaponDisplay;
}

class WeaponDisplay : public QFrame
{
    Q_OBJECT

public:
    explicit WeaponDisplay(QFrame *parent = 0);
    explicit WeaponDisplay(bool isMissile, QWidget *parent=0, QString name="", QString group="", QString dmg="",
                           QString pen="", QString attr="", QString range="", QString rof="",
                           QString clip="", QString reload="");
    ~WeaponDisplay();

private:
    Ui::WeaponDisplay *ui;
};

#endif // WEAPONDISPLAY_H
