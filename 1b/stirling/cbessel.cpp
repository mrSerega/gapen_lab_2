#include "cbessel.h"
#include <vector>
#include <QDebug>

using namespace std;

cBessel::cBessel(vector<pair<double, double> >& _args, int _k)
{
	k =_k;
	args = _args;
	h = args[1].first-args[0].first;
	n = _args.size();
}

double cBessel::p(double x){
	qDebug("k");
	qDebug(to_string(k).data());
	qDebug("p is started");
	double sum=0;
	q = (x-args[k].first)/h;
	qDebug("q is calculated");
	qDebug(to_string(q).data());
	for(int i=0;i<k;i++){
		sum+=element(i);
		qDebug("ok");
		qDebug(to_string(sum).data());
	}
	return sum;
}

double cBessel::element(int i){
		qDebug("---i---");
		qDebug(to_string(i).data());
		double first = q * multiply(1,i-1)/(q+i);
		first/=fact(2*i)*1.0;
		qDebug("first is ok");
		qDebug(to_string(first).data());
		double second_1 = det(2*i,k-i);
		double second_2 = det(2*i,k-i+1);
		double second = second_1 + second_2;
		second/=2.0;
		qDebug("second is ok");
		qDebug(to_string(second_1).data());
		qDebug(to_string(second_2).data());
		qDebug(to_string(second).data());
		double third = first*(q-0.5);
		third/=(2*i+1)*1.0;
		qDebug("third is ok");
		qDebug(to_string(third).data());
		double fourth = det(2*i+1,k-i);
		qDebug("fourth is ok");
		qDebug(to_string(fourth).data());
		double res = first*second+third*fourth;
		qDebug("result");
		qDebug(to_string(res).data());
		return res;
}

double cBessel::det(int power, int i){
//	qDebug("==");
//	qDebug(to_string(i).data());
//	qDebug("==");
	if (i>=n){
		qDebug("!!!n!!!");
		return 0;
	}
	if (i<0){
		qDebug("!!!0!!!");
		return 0;
	}
	if(power==0){
		//qDebug(">>>power0ret");
		//qDebug(to_string(args[i].second).data());
		return args[i].second;
	}
	if(power==1){
		//qDebug(">>>power1ret");
		//qDebug(to_string(args[i+1].second - args[i].second).data());
		return args[i+1].second - args[i].second;
	}
	double ret = det(power-1,i+1)- det(power-1,i);
	//qDebug(">>>commonret");
	//qDebug(to_string(ret).data());
	return ret;
}

double cBessel::multiply(int i, int n){
	double mul = 1;
	for(int j=i;j<=n;j++){
		mul*=(q*q-j*j);
	}
	return mul;
}

int cBessel::fact(int power){
	int mul=1;
	for(int i=1;i<=power;i++){
		mul*=i;
	}
	return mul;
}
