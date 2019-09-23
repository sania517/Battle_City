#ifndef QMLBULLET2LIST_H
#define QMLBULLET2LIST_H
#include <QAbstractListModel>
#include <array>
#include <QString>
#include "battlecityfield.h"

class QmlBullet2List : public QAbstractListModel
{
    Q_OBJECT
public:
    QmlBullet2List(QObject *parent = Q_NULLPTR);
    enum Bullet2Roles {Bullet2Role = Qt::UserRole+1};
    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data(const QModelIndex &index, int role) const;
    void fillList(BattleCityField * baCiFi);

private:
    QHash<int, QByteArray> roleNames() const;
    std::array<QString, 729> m_listBullet_2;
    BattleCityField * m_baCiFi;

public slots:
    void newBullet_2_Slot(short beginY, short beginX);
    void moveBullet_2_Slot(short beginY, short beginX, short endY, short endX);
};

#endif // QMLBULLET2LIST_H
