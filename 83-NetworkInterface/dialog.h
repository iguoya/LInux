#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include    <QHostInfo>
QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void lookedUpHostInfo(const QHostInfo &host);

//===========================
    void on_btnGetHostInfo_clicked();

    void on_btnDetail_clicked();

    void on_btnLookup_clicked();

    void on_btnALLInterface_clicked();

    void on_btnClear_clicked();

private:
    Ui::Dialog *ui;

    QString  protocolName(QAbstractSocket::NetworkLayerProtocol protocol);
};
#endif // DIALOG_H
