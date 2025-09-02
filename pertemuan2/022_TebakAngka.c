#include <stdio.h>

int main(){

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    //switch kalau ada input misalnya 10 3 * (ga diminta soal, tapi nice to have)
    if(a > b){
        int t = a;
        a = b;
        b = t;
    }

    if (c < a) printf("kiri");
    else if (c > b) printf("kanan");
    else if (c>a && c<b) printf("tengah");
    else if (c==a || c==b) printf("tepi");

    return 0;
}