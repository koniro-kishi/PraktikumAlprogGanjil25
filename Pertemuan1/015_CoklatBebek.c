#include <stdio.h>

int main() {
    int coklat;

    scanf("%d", &coklat);

    int bebekTerakhir = 1;
    while (coklat >= bebekTerakhir)
    {
        coklat = coklat - bebekTerakhir;
        bebekTerakhir = bebekTerakhir + 1;
    }
    
    printf("%d\n", bebekTerakhir);
    return 0;
}