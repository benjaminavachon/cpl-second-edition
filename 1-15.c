#include <stdio.h>

float f_to_c(float fahr);

int main(){
    float fahr,celsius;
    int lower,upper,step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = upper;

    printf(" F\tC\n");

    while(fahr >= lower){
        celsius = f_to_c(fahr);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr -= step;
    }

    return 0;
}

float f_to_c(float fahr){
    return ((5.0/9.0) * (fahr-32.0));
}