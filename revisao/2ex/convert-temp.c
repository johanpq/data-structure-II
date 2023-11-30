#include <stdio.h>

float FahrenheitFunction(float Celsius);

int main() {

    float Fahrenheit;
    float Celsius;

    printf("Informe a temperatura em Celsius: ");
    scanf("%f", &Celsius);
    
    Fahrenheit = FahrenheitFunction(Celsius);
    
    printf("Celsius -> Fahrenheit = %.f\n", Fahrenheit);


    return 0;
}

float FahrenheitFunction(float Celsius) {
    float Fahrenheit;
    if(Celsius >= 30 && Celsius <=50) {
        Fahrenheit = Celsius + 32;
        return Fahrenheit;
    } else {
        while(Celsius < 30 && Celsius < 50) {
            printf("Informou errado! Tente entre 30-50!\n");
            scanf("%f", &Celsius);
            Fahrenheit = Celsius + 32;
        }
        return Fahrenheit;
    }

}