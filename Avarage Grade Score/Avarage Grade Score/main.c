//Да се напише програма која пресметува просечна оцена во семестар.
//Програмата чита 5 цели броја. Треба да се испечати еден реален број на две децимали, просек на прочитаните броеви.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int prv, vtor, tret, chet, pet;
    float result;
    scanf("%d %d %d %d0  %d" , &prv, &vtor, &tret, &chet, &pet);
    printf("%.2f",result=(prv+vtor+tret+chet+pet)/5.0);
return 0;
}
