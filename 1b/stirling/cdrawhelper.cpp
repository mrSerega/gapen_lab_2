#include "cdrawhelper.h"
#include <iostream>

using namespace std;

#include <QGraphicsScene>

void cDrawHelper::bigPoint(QGraphicsScene *scene, double x, double y,QPen* pen){
	scene->addLine(x-2,(-1)*(y)-2,x+2,(-1)*(y)+2,*pen);
	scene->addLine(x+2,(-1)*(y)-2,x-2,(-1)*(y)+2,*pen);
}

void cDrawHelper::smallPoint(QGraphicsScene *scene, double x, double y, QPen* pen){
	qDebug(to_string(x).data());
	qDebug(to_string(y).data());
	scene->addLine(x,(-1)*(y),x,(-1)*(y),*pen);
}
