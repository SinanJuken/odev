#include <stdio.h>

int main() {
    int sayi;
    int kontrol ;
    printf("sayi girin :\n");
    scanf("%d",&sayi);

    for (int i = 2; i <= sayi ; ++i) {
        kontrol=1 ;
        for (int j = 2; j <= i/2 ;j++) {
            if(i%j == 0) {
                kontrol = 0;
                break;
            }
        }
        if(kontrol==1)
            printf("%d\n",i);
    }








}
