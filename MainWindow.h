#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringList>
#include <QList>
#include <QString>
#include <QVBoxLayout>

#include "CharacteristicDisplay.h"
#include "WeaponDisplay.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private: //meth
    void buildWidget();

private:
    Ui::MainWindow *ui;
    QList<CharacteristicDisplay*> characDisplays;

    QVBoxLayout* weapMeleeLayout;
    QVBoxLayout* weapMissileLayout;

    static QStringList CHARACS_LIST;
};

#endif // MAINWINDOW_H
