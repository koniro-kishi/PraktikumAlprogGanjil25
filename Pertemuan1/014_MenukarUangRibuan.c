#include <stdio.h>

int main() {
    int uang;

    scanf("%d", &uang);


    int pecahan100rb = uang / 100;
    uang = uang - pecahan100rb * 100;

    int pecahan50rb = uang / 50;
    uang = uang - pecahan50rb * 50;
    
    int pecahan10rb = uang / 10;
    uang = uang - pecahan10rb * 10;

    int pecahan5rb = uang / 5;
    uang = uang - pecahan5rb * 5;

    int pecahan2rb = uang / 2;
    uang = uang - pecahan2rb * 2;

    int pecahan1rb = uang / 1;

    printf("%d %d %d %d %d %d\n", pecahan100rb, pecahan50rb, pecahan10rb, pecahan5rb, pecahan2rb, pecahan1rb);
    return 0;
}