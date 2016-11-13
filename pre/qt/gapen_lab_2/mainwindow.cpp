#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "simple_iteration.h"

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

void MainWindow::on_btnBig_clicked()
{
    int eps_power = ui->sbEps->value();
    double eps = pow(10.0,eps_power);
    vector<double> res;
    res.push_back(0);
    res.push_back(0);
    res.push_back(0);

    vector<double> x;
    vector<double> y;
    vector<double> z;

    int power = ui->tePower->toPlainText().toInt();
    do{
        x.push_back(res[0]);
        y.push_back(res[1]);
        z.push_back(res[2]);
    }while(eps < nSimpleIteration::iteration(res));

    int nullLen = 180;

    QGraphicsScene *scene = new QGraphicsScene(ui->gvG);
    QPen greenPen(Qt::green);
    QPen redPen(Qt::red);
    QPen bluePen(Qt::blue);
    scene->addLine(0,nullLen,180,nullLen);//x
    scene->addLine(0,0,0,180);//y

    for(int i=1;i<x.size()-1;++i){// x y
        scene->addLine(x[i]*power,-1*(y[i]*power)+nullLen,x[i+1]*power,-1*(y[i+1]*power)+nullLen,greenPen);
    }

    for(int i=1;i<x.size()-1;++i){// y z
        scene->addLine(y[i]*power,-1*(z[i]*power)+nullLen,y[i+1]*power,-1*(z[i+1]*power)+nullLen,redPen);
    }

    for(int i=1;i<x.size()-1;++i){// x z
        scene->addLine(x[i]*power,-1*(z[i]*power)+nullLen,x[i+1]*power,-1*(z[i+1]*power)+nullLen,bluePen);
    }

    ui->gvG->setScene(scene);

    string strX = to_string(res[0]);
    string strY = to_string(res[1]);
    string strZ = to_string(res[2]);
    ui->tbX->setText(strX.data());
    ui->tbY->setText(strY.data());
    ui->tbZ->setText(strZ.data());
}

void MainWindow::on_btnX_clicked()
{
    QGraphicsScene *scene = new QGraphicsScene(ui->gvG);
    QPen greenPen(Qt::green);
    scene->addLine(0,90,180,90,greenPen);//x
    scene->addLine(90,0,90,180,greenPen);//y

    int eps_power = ui->sbEps->value();
    double eps = pow(10.0,eps_power);

    QPen redPen(Qt::red);

    vector<double> res;
    res.push_back(0);
    res.push_back(0);
    res.push_back(0);





}
