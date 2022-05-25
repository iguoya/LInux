#include <QCoreApplication>
#include <QFile>
#include <QTextStream>
#include <QMutex>
#include <QDateTime>
#include <QThread>
#include <QLoggingCategory>

void outputMessage(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
    static QMutex mutex;

    QMutexLocker locker(&mutex);
    QString strLogPath = ".";

    QString context_info = QString("File:(%1) Function:(%2) Line:(%3)").arg(QString(context.file)).arg(QString(context.function)).arg(context.line);
    QString current_date_time = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss.zzz");
    QString text;
    switch(type)
    {
    case QtDebugMsg:
        text = QString("Debug");
        break;

    case QtInfoMsg:
        text = QString("Info");
        break;

    case QtWarningMsg:
        text = QString("Warning");
        break;

    case QtCriticalMsg:
        text = QString("Error");
        break;
    case QtFatalMsg:
        text = QString("Fatal");
        break;
    default:
        break;
    }
    QString message = QString("[%1][%2][%3]%4 %5").arg(current_date_time).arg(text).arg(qlonglong(QThread::currentThreadId())).arg(context_info).arg(msg);

    static QString strFileName = strLogPath + "/" + QDateTime::currentDateTime().toString("log_yyyyMMddhhmmss.log");
    QFile file(strFileName);
    file.open(QIODevice::WriteOnly | QIODevice::Append);
    QTextStream text_stream(&file);
    text_stream << message << "\r\n";
    file.close();
}

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    //注册MessageHandler
    qInstallMessageHandler(outputMessage);

//    outputMessage(QtDebugMsg, )
    return app.exec();
}
