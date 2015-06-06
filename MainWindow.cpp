#include "MainWindow.h"
#include "ui_MainWindow.h"

QStringList MainWindow::CHARACS_LIST;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    MainWindow::CHARACS_LIST.append(tr("WS"));
    MainWindow::CHARACS_LIST.append(tr("BS"));
    MainWindow::CHARACS_LIST.append(tr("Str"));
    MainWindow::CHARACS_LIST.append(tr("T"));
    MainWindow::CHARACS_LIST.append(tr("Ag"));
    MainWindow::CHARACS_LIST.append(tr("Int"));
    MainWindow::CHARACS_LIST.append(tr("Per"));
    MainWindow::CHARACS_LIST.append(tr("WP"));
    MainWindow::CHARACS_LIST.append(tr("Fel"));
    ui->setupUi(this);
    buildWidget();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::buildWidget()
{
    for(int i=0; i < CHARACS_LIST.size(); i++) {
        CharacteristicDisplay* disp = new CharacteristicDisplay(CHARACS_LIST[i],0,this);
        characDisplays.append(disp);
        ui->characsLayout->addWidget(disp);
    }

    weapMeleeLayout = new QVBoxLayout;
    weapMeleeLayout->setAlignment(Qt::AlignTop);
    weapMissileLayout = new QVBoxLayout;
    weapMissileLayout->setAlignment(Qt::AlignTop);

    weapMeleeLayout->addWidget(new WeaponDisplay(false, this, "Knife","Blah","1d5+2","+1"));
    weapMissileLayout->addWidget(new WeaponDisplay(true, this, "Laser Pistol","Pistol","1d5+2","+1","","200m","S/-/-","30","1ac"));

    ui->weapMeleeBox->setLayout(weapMeleeLayout);
    ui->weapMissileBox->setLayout(weapMissileLayout);
}
