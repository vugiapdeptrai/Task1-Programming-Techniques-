#include <stdio.h>
#include <math.h>
int main () {
    double G_1,G_2,d,k;
    k = 6.67 * pow(10,-11);
    printf("Nhap vao khoi luong cua vat the 1 (don vi kg): ");
    scanf("%lf", &G_1);
    printf("Nhap vao khoi luong cua vat the 2 (don vi kg): ");
    scanf("%lf", &G_2);
    printf("Nhap vao khoang cach giua hai vat the (don vi m): ");
    scanf("%lf", &d);
    printf("Luc hap dan giua hai vat the la: %lf N", (k*G_1*G_2)/d);
    return 0;
}