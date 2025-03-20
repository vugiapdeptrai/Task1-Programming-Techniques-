#include <stdio.h> 
int main () {
    double x_1, y_1, x_2, y_2, m, c;
    printf ("Nhap vao toa do diem thu nhat (hoanh do truoc, tung do sau): ");
    scanf("%lf %lf", &x_1, &y_1);
    printf ("Nhap vao toa do diem thu hai (hoanh do truoc, tung do sau): ");
    scanf("%lf %lf", &x_2, &y_2);
    m = (y_2-y_1)/(x_2-x_1);
    printf("Do doc giua hai diem duoc cho la: %lf \n", m);
    c = (x_1*y_2-x_1*y_1)/(x_1-x_2) + y_1;
    printf("Phuong trinh duong thang co dang: y = %lfx + (%lf)", m, c);
    return 0;
}