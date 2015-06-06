#include "WeaponDisplay.h"
#include "ui_WeaponDisplay.h"

WeaponDisplay::WeaponDisplay(QFrame *parent) :
    QFrame(parent),
    ui(new Ui::WeaponDisplay)
{
    ui->setupUi(this);
}

WeaponDisplay::WeaponDisplay(bool isMissile, QWidget *parent, QString name, QString group, QString dmg,
                             QString pen, QString attr, QString range, QString rof,
                             QString clip, QString reload) :
    QFrame(parent),
    ui(new Ui::WeaponDisplay)
{
    ui->setupUi(this);
    ui->missileWeaponsFrame->setVisible(isMissile);
    ui->weaponNameLbl->setText(name);
    ui->groupLbl->setText(group);
    ui->dmgLbl->setText(dmg);
    ui->penLbl->setText(pen);
    ui->attrLbl->setText(attr);
    ui->rangeLbl->setText(range);
    ui->rofLbl->setText(rof);
    ui->clipLbl->setText(clip);
    ui->reloadLbl->setText(reload);
}

WeaponDisplay::~WeaponDisplay()
{
    delete ui;
}
