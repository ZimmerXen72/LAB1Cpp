#ifndef UNTITLED1_VARS_H
#define UNTITLED1_VARS_H
#include <complex>
using namespace std;
void Var(int&, int&);
void Var(int*, int*);

void Var1(double&);
void Var1(double*);

void Var2(complex<double>&, double&);
void Var2(complex<double>*, double*);

void Var3(int n, int **A, int **B);

#endif //UNTITLED1_VARS_H