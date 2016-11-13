#include <iostream>
#include <vector>

#ifndef CSTIRLING_H
#define CSTIRLING_H

using namespace std;

class cStirling
{
private:
	//members
	vector<pair<double, double> > log;
	vector<pair<double, double> > args;
	int k;
	int n;
	double h;
	double q;
	double tmpx;

public:
	cStirling(vector<pair<double,double> >& args,int _k);
	~cStirling();

	//methods
	double p(double x);
	double det(int power, int i);
	double element(int i);
	double multiply(int i,int n);
	int fact(int power);
};

#endif // CSTIRLING_H
