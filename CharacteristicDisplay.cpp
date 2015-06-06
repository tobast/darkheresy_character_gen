#include "CharacteristicDisplay.h"
#include "ui_CharacteristicDisplay.h"

CharacteristicDisplay::CharacteristicDisplay(QString characName, int val, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CharacteristicDisplay)
{
    ui->setupUi(this);
    ui->characNameLabel->setText(characName);
    ui->valSpinBox->setValue(val);
}

CharacteristicDisplay::~CharacteristicDisplay()
{
    delete ui;
}

void CharacteristicDisplay::setValue(int val)
{
    ui->valSpinBox->setValue(val);
}
