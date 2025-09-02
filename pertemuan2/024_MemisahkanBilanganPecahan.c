#include <stdio.h>

int main(){
    double n;
    scanf("%lf", &n);

    int bulat = n;
    double desimal = n-bulat;
    printf("%d %lf", bulat, desimal);
}