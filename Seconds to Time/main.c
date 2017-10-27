//Да се напише програма коjа за даден цел броj секунди коj се чита од стандарден влез,ке ги отпечати на екран соодветните вредности во часови, минути и секунди.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int vlez;
    scanf("%d",&vlez);
    int chas = vlez / 3600;
    int conv = vlez % 3600;
    int min = conv / 60;
    int sec = vlez % 60;
    printf("%d ima %d chasevi, %d minuti, i %d sekundi..n/", vlez, chas, min, sec);

return 0;
}
