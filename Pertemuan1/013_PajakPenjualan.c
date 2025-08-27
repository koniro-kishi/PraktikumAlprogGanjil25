#include <stdio.h>

int main() {
    double HargaSetelahPajak;
    double pajak = 0.15;
    
    scanf("%lf", &HargaSetelahPajak); 
    
    double HargaSebelumPajak = HargaSetelahPajak * (1 / (1 + pajak));
    
    printf("%.2lf\n", HargaSebelumPajak);
    return 0;
}