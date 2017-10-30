//Да се напише програма која вчитува од стандарден влез два децимални броја (маса во кг и висина во цм) и пресметува
//и печати на стандарден излез индекс на телесна маса по формулата:
//BMI=masa/visina*visina

#include <stdio.h>
#include <stdlib.h>

int main(){
    float result;
    float masa, visina;
    scanf("%f%f", &masa, &visina);
    visina/=100;
    result = masa / (visina * visina);
    printf("%f", result);

return 0;
}
