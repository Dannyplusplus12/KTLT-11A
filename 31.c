#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    printf("Nhap he so a, b, c (a != 0): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if(a == 0){
        printf("a phai khac 0.\n");
        return 0;
    }

    double delta = b*b - 4*a*c;
    int count = 0;

    if(delta < 0){
        printf("Phuong trinh vo nghiem thuc.\n");
    } else {
        double y1 = (-b + sqrt(delta)) / (2*a);
        double y2 = (-b - sqrt(delta)) / (2*a);

        printf("Cac nghiem thuc:\n");

        if(y1 >= 0){
            double x1 = sqrt(y1);
            double x2 = -sqrt(y1);
            printf("x = %.2f\n", x1);
            if(x1 != x2) printf("x = %.2f\n", x2);
            count += (x1 == x2 ? 1 : 2);
        }

        if(y2 >= 0 && y2 != y1){
            double x3 = sqrt(y2);
            double x4 = -sqrt(y2);
            printf("x = %.2f\n", x3);
            if(x3 != x4) printf("x = %.2f\n", x4);
            count += (x3 == x4 ? 1 : 2);
        }

        printf("So nghiem thuc khac nhau: %d\n", count);
    }

    return 0;
}
