#include <stdio.h>
#include <math.h>

int main() {
    double x, term, sum;
    double EPS = 1e-6;
    int n;
    scanf("%lf", &x);
    x = fmod(x, 2 * M_PI);
    sum = 1.0;
    term = 1.0;
    n = 1;
    do {
        term *= (-1.0) * x * x / ((2 * n - 1) * (2 * n));
        sum += term;
        n++;
    } while (fabs(term) >= EPS);

    printf(" %.10f\n", sum);
    return 0;
}

