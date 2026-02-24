#include <stdio.h>

#define PI 3.14159 

// Povrsina kvadrata

float povrsinaKvadrata(float a) {
	return a * a;
}

// Obim kvadrata

float obimKvadrata(float a) {
	return 4 * a;
}

// Povrsina pravougaonika 

float povrsinaPravougaonika(float a, float b) {
	return a * b;
}

// Obim pravougaonika

float obimPravougaonika(float a, float b) {
	return 2 * (a + b);
}

// Povrsina kruga

float povrsinaKruga(float r) {
	return PI * (r * r);
}

// Obim kruga

float obimKruga(float r) {
	return 2 * (PI * r);
}

// Ilistrativni primjer konzole

int main() {

	int izbor;
	float a, b, r;

	do {
		for (int i = 0; i < 42; i++) {
			printf("*");
		}
		printf("\n");

		printf("	Kalkulator geometrijskih oblika\n");

		for (int i = 0; i < 42; i++) {
			printf("*");
		}
		printf("\n");

		printf("1. Izracunavanje povrsine i obima kvadrata\n");
		printf("2. Izracunavanje povrsine i obima pravougaonika\n");
		printf("3. Izracunavanje povrsine i obima kruga\n");
		printf("0. Izlaz\n");
		
		for (int i = 0; i < 42; i++) {
			printf("*");
		}
		printf("\n");

		printf("Unesite izbor: ");
		scanf_s("%d", &izbor);
		switch (izbor) {
			case 1: 
				printf("Unesite stranicu kvadrata: ");
				scanf_s("%f", &a);

				if (a <= 0) {
					printf("Stranica mora biti pozitivan broj\n");
				}
				else {
					printf("Povrsina kvadrata: %f\n", povrsinaKvadrata(a));
					printf("Obim kvadrata: %f\n", obimKvadrata(a));
				}
				break;
			
			case 2:
				printf("Unesite duzinu pravougaonika: ");
				scanf_s("%f", &a);
				printf("Unesite sirinu pravougaonika: ");
				scanf_s("%f", &b);

				if (a <= 0 || b <= 0) {
					printf("Stranice moraju biti pozitivan broj\n");
				}
				else {
					printf("Povrsina pravougaonika: %f\n", povrsinaPravougaonika(a, b));
					printf("Obim pravougaonika: %f\n", obimPravougaonika(a, b));
				}
				break;
			
			case 3:
				printf("Unesite poluprecnik kruga: ");
				scanf_s("%f", &r);

				if (r <= 0) {
					printf("Poluprecnik kruga mora biit pozitivan broj\n");
				}
				else {
					printf("Povrsina kruga: %f\n", povrsinaKruga(r));
					printf("Obim kruga: %f\n", obimKruga(r));
				}
				break;

			case 0:
				printf("Program zavrsen.\n");
				break;

				default:
					printf("Neispravan izbor! Pokusajte ponovo.\n");
		}

	} while (izbor != 0);

	return 0;
}