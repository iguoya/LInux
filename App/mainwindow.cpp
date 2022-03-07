#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFontDatabase>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    awesome = new QtAwesome(this);
    awesome->initFontAwesome();

    entrance = new Entrance;
    thread = new Thread;


    ui->verticalLayout->addWidget(entrance);
    ui->verticalLayout->addWidget(thread);
    currentWidget = entrance;
    thread->hide();

    connect(entrance, &Entrance::SignalEntrance, this, &MainWindow::entranceWidget);
    connect(thread, &Thread::SignalEntrance, this, &MainWindow::entranceWidget);

    //    setDefaultOption( "color", QColor(50,50,50) );

    //    int fontId = QFontDatabase::addApplicationFont(":/font/fontawesome-webfont.ttf");
    //    QString fontName = QFontDatabase::applicationFontFamilies(fontId).at(0);
    //    QFont iconFont = QFont(fontName);
    //    iconFont.setPointSize(64);

    //    ui->pushButton->setFont(iconFont);
    //    ui->pushButton->setText(QChar(0xf00e));
    //    ui->pushButton->setStyleSheet("color: rgb(0, 160, 230);");
    //    ui->button->setFont(iconFont);
    //    ui->button->setText(QChar(0xf00d));//0xf00d对应的是"关闭"字体图标，具体可以看官网
    //    QPushButton* beerButton = new QPushButton( "Cheers!");

    //    QVariantMap options;
    //    options.insert("anim", qVariantFromValue( new QtAwesomeAnimation(ui->pushButton) ) );

    //        ui->pushButton->setIcon( awesome->icon(fa::beer).pixmap(32,32) );
    //        ui->pushButton->setFont( awesome->font(32) );
    //    ui->label->setFont( awesome->font(32) );
    //    ui->label->setText(QString("%1--随便写")
    //                       .arg(QChar(0xf00d)));
    //    ui->label->setIcon( awesome->icon( fa::pencil ) );

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::entranceWidget(QString type)
{
    currentWidget->hide();
    if(type == "thread") {
        thread->show();
        currentWidget = thread;
    } else if(type == "entrance") {
        entrance->show();
        currentWidget = entrance;
    }
}


