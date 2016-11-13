#include "simple_iteration.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<double> args;
    args.push_back(0);
    args.push_back(0);
    args.push_back(0);
    nSimpleIteration::doTheDeal(1e-4,args);
    return 0;
}