#include "mynetwork.h"



MyNetwork::MyNetwork()
{
    m_network = new QNetworkAccessManager(this);
    QObject::connect(m_network, &QNetworkAccessManager::finished,
                     this, &MyNetwork::finished);
}

void MyNetwork::getHtml(QString url)
{
    m_network->get(QNetworkRequest(QUrl(url)));
}

void MyNetwork::finished(QNetworkReply *reply)
{
    qDebug() << reply->readAll();
}
