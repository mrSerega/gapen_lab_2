#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cstirling.h"
#include "cdrawhelper.h"

#include <QGraphicsScene>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_addCommon_clicked()
{
	args.clear();
	args.push_back(make_pair(QString(ui->tex0->toPlainText()).toDouble(),QString(ui->tey0->toPlainText()).toDouble()));
	args.push_back(make_pair(QString(ui->tex1->toPlainText()).toDouble(),QString(ui->tey1->toPlainText()).toDouble()));
	args.push_back(make_pair(QString(ui->tex2->toPlainText()).toDouble(),QString(ui->tey2->toPlainText()).toDouble()));
	args.push_back(make_pair(QString(ui->tex3->toPlainText()).toDouble(),QString(ui->tey3->toPlainText()).toDouble()));
	args.push_back(make_pair(QString(ui->tex4->toPlainText()).toDouble(),QString(ui->tey4->toPlainText()).toDouble()));
	args.push_back(make_pair(QString(ui->tex5->toPlainText()).toDouble(),QString(ui->tey5->toPlainText()).toDouble()));
	args.push_back(make_pair(QString(ui->tex6->toPlainText()).toDouble(),QString(ui->tey6->toPlainText()).toDouble()));
	args.push_back(make_pair(QString(ui->tex7->toPlainText()).toDouble(),QString(ui->tey7->toPlainText()).toDouble()));
	args.push_back(make_pair(QString(ui->tex8->toPlainText()).toDouble(),QString(ui->tey8->toPlainText()).toDouble()));
}

void MainWindow::on_find_clicked()//stirling
{
	stirling = new cStirling(args,args.size()/2);
	double value = QString(ui->tex->toPlainText()).toDouble();
	double tmp = stirling->p(value);
	ui->tby->setText(to_string(tmp).data());
	qDebug(to_string(tmp).data());
}

void MainWindow::on_draw_clicked()
{
	qDebug("draw_started");

	double nullxplus = 0;
	double nullyplus = 0;
	double power = QString(ui->power->toPlainText()).toDouble();
	double step = QString(ui->step->toPlainText()).toDouble();

	QGraphicsScene* scene = new QGraphicsScene(ui->gwG);
	cDrawHelper* helper = new cDrawHelper();
	QPen* bigPen =new QPen(Qt::red);
	QPen* smallPen =new QPen(Qt::blue);
	QPen* linesPen = new QPen(Qt::gray);

	scene->addLine(-100,nullyplus,100,nullyplus,*linesPen);
	scene->addLine(nullxplus,-100,nullxplus,100,*linesPen);

	for(double i = args[0].first;i<= args.back().first;i+=step){
		double tmpy = stirling->p(i);
		qDebug(to_string(i).data());
		helper->smallPoint(scene,i*power+nullxplus,tmpy*power+nullyplus,smallPen);
	}
	for(int i=0;i<args.size();i++){
		helper->bigPoint(scene,args[i].first*power+nullxplus,args[i].second*power+nullyplus,bigPen);
	}
	ui->gwG->setScene(scene);
}

void MainWindow::on_addNew_clicked()//bessel
{
	bessel = new cBessel(args,args.size()/2);
	qDebug("new bessel is ok");
	double value = QString(ui->tex->toPlainText()).toDouble();
	qDebug("value is readed");
	double tmp = bessel->p(value);
	for(int i=0;i<bessel->args.size();++i){
		if(value == args[i].first){
			tmp = args[i].second;
		}
	}
	//tmp-=10;
	qDebug("value is calculated");
	ui->tby->setText(to_string(tmp).data());
	qDebug(to_string(tmp).data());
}

void MainWindow::on_draw_2_clicked()
{
	qDebug("draw_started");

	double nullxplus = 0;
	double nullyplus = 0;
	double power = QString(ui->power->toPlainText()).toDouble();
	double step = QString(ui->step->toPlainText()).toDouble();

	QGraphicsScene* scene = new QGraphicsScene(ui->gwG);
	cDrawHelper* helper = new cDrawHelper();
	QPen* bigPen =new QPen(Qt::red);
	QPen* smallPen =new QPen(Qt::blue);
	QPen* linesPen = new QPen(Qt::gray);

	scene->addLine(-100,nullyplus,100,nullyplus,*linesPen);
	scene->addLine(nullxplus,-100,nullxplus,100,*linesPen);

	for(double i = args[0].first;i<= args.back().first;i+=step){
		double tmpy = bessel->p(i);
		qDebug(to_string(i).data());
		helper->smallPoint(scene,i*power+nullxplus,tmpy*power+nullyplus,smallPen);
	}
	for(int i=0;i<args.size();i++){
		helper->bigPoint(scene,args[i].first*power+nullxplus,args[i].second*power+nullyplus,bigPen);
	}
	ui->gwG->setScene(scene);
}
