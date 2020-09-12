#ifndef CLASSB_H
#define CLASSB_H

#include <QObject>
#include <QWidget>

class ClassB : public QWidget
{
    Q_OBJECT
public:
    explicit ClassB(QWidget *parent = 0);

signals:

public slots:
};

#endif // CLASSB_H