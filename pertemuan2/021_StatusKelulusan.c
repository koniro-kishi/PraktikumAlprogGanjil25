#include <stdio.h>

int main(){
    int uts, uas;

    scanf("%d %d", &uts, &uas);
    float rata = (uts+uas)/2.0;
    printf("%f\n", rata);

    if ( rata > 60 ){
        if ( uts > 40 && uas > 40){
            printf("LULUS");
        }
        else
            printf("LULUS BERSYARAT");
    }
    else if (rata < 60) printf("TIDAK LULUS");

    return 0;
}