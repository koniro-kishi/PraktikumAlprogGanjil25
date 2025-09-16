#include <stdio.h>

int main(){
    int jumlah_n, posisi_k;
    scanf("%d %d", &jumlah_n, &posisi_k);

    if (posisi_k == 0) {
        printf("%.2f", 0);
        return 0;
    }

    double sum = 0;
    int counter = 0;
    for (int i = 1; i <= jumlah_n; i++) {
        int angka; scanf("%d", &angka);
        if (i % posisi_k == 0) {
            sum += angka;
            counter++;
        }
    }

    double rata2;
    if (counter == 0) rata2 = 0;
    else rata2 = sum / counter;

    printf("%.2f\n", rata2);
    return 0;
}