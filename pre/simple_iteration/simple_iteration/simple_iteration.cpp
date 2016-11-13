#include "simple_iteration.h"
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void nSimpleIteration::doTheDeal(double eps, vector<double>& args) {
    double tmpEps = 1;
    while (eps <= (tmpEps = nSimpleIteration::iteration(args))) {
        //pass
    }
    printf("%6.4f %6.4f %6.4f", args[0], args[1], args[2]);
}

double nSimpleIteration::iteration(vector<double>& args) {
    vector<double> oldx = args;
    args[0] = f1(oldx);
    args[1] = f2(oldx);
    args[2] = f3(oldx);
    double d1 = abs(args[0] - oldx[0]);
    double d2 = abs(args[1] - oldx[1]);
    double d3 = abs(args[2] - args[2]);
    double eps = max(d1,max(d2,d3));
    return eps;
}

double nSimpleIteration::f1(vector<double>& args) {
    return 1 - 0.05*args[1] * args[1] + 0.025*args[2] * args[2] * args[2];
}

double nSimpleIteration::f2(vector<double>& args) {
    return 1 + 0.05*args[0] * args[0] + 0.025*args[2] * args[2] * args[2];
}

double nSimpleIteration::f3(vector<double>& args) {
    return 1 + 0.025*args[0] * args[0] * args[0] - 0.05*args[1] * args[1];
}

