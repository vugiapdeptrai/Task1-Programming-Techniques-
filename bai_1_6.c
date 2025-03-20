#include <stdio.h>
#include <math.h>
int main () {
    double a,b,c,delta;
    printf("Giai phuong trinh bac hai co dang: a*x^2 + b*x + c \n");
    printf("Nhap vao he so thuc a: ");scanf("%lf", &a);
    printf("Nhap vao he so thuc b: ");scanf("%lf", &b);
    printf("Nhap vao he so thuc c: ");scanf("%lf", &c);
    if (a==0 && b!=0) {
        printf("Phuong trinh co nghiem duy nhat: %lf", -c/b);
    }
    else if (a==0 && b==0) {
        printf("Phuong trinh vo nghiem");
    }
    else {
        delta = b*b - 4*a*c;
        if (delta > 0) {
            printf("Phuong trinh co 2 nghiem phan biet: \t");
            printf("%lf   va   ", (-b+sqrt(delta))/(2*a) );
            printf("%lf", (-b-sqrt(delta))/(2*a) );
        }
        else if (delta == 0) {
            printf ("Phuong trinh co nghiem kep: \t %lf", -b/(2*a) );
        }
        else {
            printf("Phuong trinh co 2 nghiem phuc: \t");
            printf("%lf + %lfi   va   ", -b/(2*a), sqrt(-delta)/(2*a) );
            printf("%lf + (%lf)i", -b/(2*a), -sqrt(-delta)/(2*a) );
        }
    }
    return 0;
}