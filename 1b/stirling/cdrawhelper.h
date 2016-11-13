#include <QGraphicsView>
#include <QPen>

#ifndef CDRAWHELPER_H
#define CDRAWHELPER_H


class cDrawHelper
{
public:
	void bigPoint(QGraphicsScene* scene, double x, double y, QPen* pen);
	void smallPoint(QGraphicsScene* scene, double x, double y, QPen* pen);
};

#endif // CRRAWHELPER_H
