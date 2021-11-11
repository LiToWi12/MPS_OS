#include <stdio.h>

// Variablen
float Num1;
float Num2;

void ScanForNum() {
	printf("Wert 1: ");
	scanf_s("%f", &Num1);
	printf("Wert 2: ");
	scanf_s("%f", &Num2);
	printf("\n");
};

void Addition() {
	float temp;

	ScanForNum();
	temp = Num1 + Num2;
	printf("Das Ergebniss ist: %f\n", temp);
}

void Subtraktion() {
	float temp;

	ScanForNum();
	temp = Num1 - Num2;
	printf("Das Ergebniss ist: %f\n", temp);
}

void Multipikation() {
	float temp;

	ScanForNum();
	temp = Num1 * Num2;
	printf("Das Ergebniss ist: %f\n", temp);
}

void Division() {
	float temp;

	ScanForNum();
	temp = Num1 / Num2;
	printf("Das Ergebniss ist: %f\n", temp);
}

int main() {
	int temp_Art;
	int temp_Anzahl;

	// User Input
	printf("Was soll gerechnet werden? \n 1 = Addition \n 2 = Subtraktion \n 3 = Multiplikation \n 4 = Division \n\n");
	scanf_s("%d", &temp_Art);

	switch (temp_Art) {
		case 1: 
			Addition();
			break;
		case 2: 
			Subtraktion();
			break;
		case 3: 
			Multipikation();
			break;
		case 4: 
			Division();
			break;
	}

	return 0;
}


