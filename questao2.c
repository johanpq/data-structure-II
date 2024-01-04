#include <stdio.h>

void FahrenheitFunction(int Celsius);

int main() {

    FahrenheitFunction(30);

    return 0;
}

void FahrenheitFunction(int Celsius) {
    int Fahrenheit;

    if(Celsius >= 30 && Celsius <= 50) {
        Fahrenheit = Celsius + 32;
        printf("Celsius = %d\t Fahrenheit = %d\t", Celsius, Fahrenheit);
        FahrenheitFunction(Celsius + 1); // loop
    }

}