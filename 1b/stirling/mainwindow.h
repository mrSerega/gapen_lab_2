#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "cstirling.h"
#include "cbessel.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
	void on_pushButton_clicked();

	void on_addCommon_clicked();

	void on_pushButton_2_clicked();

	void on_find_clicked();

	void on_draw_clicked();

	void on_addNew_clicked();

	void on_draw_2_clicked();

private:
    Ui::MainWindow *ui;

	vector<pair<double,double> > args;
	cStirling* stirling;
	cBessel* bessel;
};

#endif // MAINWINDOW_H
