#include <cstdio>
using namespace std;

int nbTests;
float celsius;
float increase;
float fahrenheit;

float celsiusToFahrenheit(float c) {
	return (9 * c / 5) + 32;
}

float fahrenheitToCelsius(float f) {
	return ((5 * f) - 160) / 9;
}

int main () {
	
	scanf("%d", &nbTests);
	for (int t = 1; t <= nbTests; t++) {
		scanf("%f %f", &celsius, &increase);
		
		fahrenheit = celsiusToFahrenheit(celsius) + increase;
		celsius = fahrenheitToCelsius(fahrenheit);
		
		printf("Case %d: %.2f\n", t, celsius);
	}
	
	return 0;
	
}
