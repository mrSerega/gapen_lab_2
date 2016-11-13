#include "cstirling.h"
#include <QDebug>

cStirling::cStirling(vector<pair<double,double> >& _args,int _k)
{
	k =_k;
	args = _args;
	h = args[1].first-args[0].first;
	n = _args.size();
//	qDebug("args size");
//	qDebug(to_string(n).data());
}

double cStirling::p(double x){
	q = (x-args[k].first)/h;
	double sum=0;
	for(int i=0;i<=k;i++){
		sum+=element(i);
	}
	log.push_back(make_pair(x,sum));
	return sum;
}

double cStirling::det(int power, int i){
	//qDebug("==");
	//qDebug(to_string(i).data());
	//qDebug("==");
	if (i>=n) return 0;
	if (i<0) return 0;
	if(power==1){
		return args[i+1].second - args[i].second;
	}
	return det(power-1,i+1)- det(power-1,i);
}

double cStirling::element(int i){
	if(i==0){
		return args[k].second;
	}
	double first = q*multiply(1,i-1)/(fact(2*i-1)*1.0);
	double second_1 = det(2*i-1,k-i);
	double second_2 = det(2*i-1,k-(i-1));
	double second = second_1 + second_2;
	second/=2.0;
	double third = multiply(0,i-1)/(fact(2*i)*1.0);
	double fourth = det(2*i,k-i);
	double result = first*second+third*fourth;

//	qDebug("------");
//	qDebug(to_string(i).data());
//	qDebug(to_string(first).data());
//	qDebug("second_1\\/");
//	qDebug(to_string(second_1).data());
//	qDebug("second_2\\/");
//	qDebug(to_string(second_2).data());
//	qDebug(to_string(third).data());
//	qDebug(to_string(fourth).data());
//	qDebug(to_string(result).data());
	return result;
}

double cStirling::multiply(int i, int n){
	double mul = 1;
	for(int j=i;j<=n;j++){
		mul*=(q*q-j*j);
	}
	return mul;
}

int cStirling::fact(int power){
	int mul=1;
	for(int i=1;i<=power;i++){
		mul*=i;
	}
	return mul;
}
