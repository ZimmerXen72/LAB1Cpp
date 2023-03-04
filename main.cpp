#include <iostream>
#include <iomanip>
#include "Vars.h"
using namespace std;

int main(){
    int x, y;
    double x1, x2;
    complex<double> Comp;
    cin >> x >> y;
    Var(&x,&y);
    cout << x << ' ' << y << endl;
    Var(x,y);
    cout << x << ' ' << y << endl;

    cin >> x1;
    Var1(&x1);
    cout << x1 << endl;
    cin >> x1;
    Var1(x1);
    cout << x1 << endl;

    cin >> Comp >> x2;
    Var2(&Comp,&x2);
    cout << Comp << endl;
    Var2(Comp, x2);
    cout << Comp << endl;

    int n=3;
    int **A, **B;
    A = (int **) malloc(n * sizeof(int *));
    B = (int **) malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        A[i] = (int *) malloc(n * sizeof(int));
        B[i] = (int *) malloc(n * sizeof(int));
        for (int j = 0; j < n; j++) {
            A[i][j] = rand();
            B[i][j] = 0;
        }
    }
    Var3(n, A, B);
    cout << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("|%5d|", A[i][j]);
        }
        cout << endl;
    }
    Var3(n, A, B);
    cout << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("|%5d|", B[i][j]);
        }
        cout << endl;
    }
}