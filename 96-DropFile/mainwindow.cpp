#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("鼠标事件");
    ui->statusLabel->setText("当前位置");
    ui->statusLabel->setFixedWidth(100);

    ui->mousePosLabel->setText("");
    ui->mousePosLabel->setFixedWidth(100);

    ui->statusbar->addPermanentWidget(ui->statusLabel);
    ui->statusbar->addPermanentWidget(ui->mousePosLabel);

    setMouseTracking(true);
    resize(600, 300);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mousePressEvent(QMouseEvent *e)
{
    QString pos= QString("(%1, %2)")
            .arg(e->x())
            .arg(e->y());
    QString status;
    switch (e->button()) {
    case Qt::LeftButton:
        status = "左键：";
        break;
    case Qt::MidButton:
        status = "中键：";
        break;
    case Qt::RightButton:
        status = "右键：";
        break;
    default:
        break;
    }
    ui->statusbar->showMessage(status+pos);
}

void MainWindow::mouseMoveEvent(QMouseEvent *e)
{
    ui->mousePosLabel->setText(QString("<%1, %2>").arg(e->x()).arg(e->y()));
}

