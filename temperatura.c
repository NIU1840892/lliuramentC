#include <stdio.h>

int main(void){
	int temperatura = 25;
	float f = (temperatura*9/5+32);
	printf("Temperature: %d degrees\n", temperatura);
	printf("Farenheit: %.1f degrees\n", f);
	
	return 0;
}

