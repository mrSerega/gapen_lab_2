#include <vector>

using namespace std;

#ifndef CBESSEL_H
#define CBESSEL_H


class cBessel
{
private:
	vector<pair<double, double> > log;
	int k;
	int n;
	double h;
	double tmpx;
public:
	vector<pair<double, double> > args;
	double q;
	cBessel(vector<pair<double,double> >& args,int _k);
	double p(double x);
	double det(int power, int i);
	double element(int i);
	double multiply(int i,int n);
	int fact(int power);
};

#endif // CBESSEL_H
