#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <unistd.h>
#include <QDebug>
#include <QTextCodec>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(&tigerProcess, &QProcess::readyRead, this, &MainWindow::showResult);
    connect(&tigerProcess, &QProcess::stateChanged, this, &MainWindow::showState);
    connect(&tigerProcess, &QProcess::errorOccurred, this, &MainWindow::showError);

    connect(&tigerProcess, SIGNAL(finished(int, QProcess::ExitStatus)),
            this, SLOT(showFinished(int, QProcess::ExitStatus)));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
//    QProcess p;
//    QProcess::start
    system("gnome-terminal");
}

void MainWindow::on_pushButton_2_clicked()
{
//    tigerProcess.start("gedit");
//    QString program = "gnome-terminal";
    QStringList arguments;
//    arguments<<"-c 'ls -l /home/tiger'";
    tigerProcess.start("gedit", arguments);
}

void MainWindow::showResult() {
//    QTextCodec *codec = QTextCodec::codecForLocale();
//    qDebug()<<"show result: "<<endl
//           << codec->toUnicode(tigerProcess.readAll());
    qDebug()<<tigerProcess.readAll();
}void MainWindow::showState(QProcess::ProcessState state) {
    qDebug()<< "show state:\n";
    if(state == QProcess::NotRunning) {
        qDebug()<<"not running";
    } else if(state == QProcess::Starting) {
        qDebug()<<"starting";
    } else {
        qDebug()<<"running";
    }
}

void MainWindow::showError() {
    qDebug()<<"show error:\n"<<tigerProcess.errorString();
}


void MainWindow::showFinished(int exitCode, QProcess::ExitStatus exitStatus) {
    qDebug()<<"show finished: \n"<<exitCode<<"-->"<<exitStatus;
}
