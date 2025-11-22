# include <stdio.h>
#include <math.h>

void solveQuadratic(double a, double b, double c) {
    if (a == 0) {
        if (b == 0) {
            printf(c == 0 ? "Phuong trinh co vo so nghiem.\n" : "Phuong trinh vo nghiem.\n");
        } else {
            printf("Phuong trinh co mot nghiem: x = %.2f\n", -c / b);
        }
    } else {
        double delta = b * b - 4 * a * c;
        if (delta > 0) {
            printf("Phuong trinh co hai nghiem phan biet:\n");
            printf("x1 = %.2f\n", (-b + sqrt(delta)) / (2 * a));
            printf("x2 = %.2f\n", (-b - sqrt(delta)) / (2 * a));
        } else if (delta == 0) {
            printf("Phuong trinh co nghiem kep: x = %.2f\n", -b / (2 * a));
        } else {
            printf("Phuong trinh vo nghiem.\n");
        }
    }
}

int main() {
    double a, b, c;
    printf("Nhap he so a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    solveQuadratic(a, b, c);
    return 0;
}
