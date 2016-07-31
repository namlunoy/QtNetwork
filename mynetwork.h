#ifndef MYNETWORK_H
#define MYNETWORK_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QDebug>
#include <QNetworkReply>

class MyNetwork : public QObject
{
    Q_OBJECT
public:
    MyNetwork();
    void getHtml(QString url);

signals:

public slots:
    void finished(QNetworkReply *reply);

private:
    QNetworkAccessManager* m_network;
};

#endif // MYNETWORK_H
