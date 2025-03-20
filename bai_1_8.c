#include <stdio.h>
int main () {
    double t_1, t_2, v;
    printf("Please enter the minimum temperature: ");
    scanf("%lf", &t_1);
    printf("Please enter the maximum temperature: ");
    scanf("%lf", &t_2);
    while (1) {
        if (t_1 > t_2) {
            t_1 = t_2;
        }
        v = 331.3 + 0.61*t_1;
        printf("At %f degrees Celsius the velocity of sound is %.1lf m/s \n", t_1, v);
        if (t_1 == t_2) {
            break;
        }
        t_1 += 1;
    }
    return 0;
}