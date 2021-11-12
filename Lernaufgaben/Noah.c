// Basic Declarations and Expressions

// 1
printf("Name		:	Noah Zepner\n");
printf("Geburtstag	:	September 25, 2003\n");
printf("Handynummer	:	+49 178 3391546\n");

// 3
printf("######\n");
printf("#\n");
printf("#\n");
printf("#####\n");
printf("#\n");
printf("#\n");
printf("#\n");

// 4
char char1 = 'X';
char char2 = 'M';
char char3 = 'L';

printf("The reverse of %c%c%c is %c%c%c\n", char1, char2, char3, char3, char2, char1);

// 5 (mit Input)
int breite;
int hoehe;

int umfang;
int flaecheninhalt;

printf("Diese Programm berechnet dir denn Umfang und den Flaecheninhalt eines Rechtecks.\n\n");

printf("Breite:		");
scanf_s("%d", &breite);
printf("Hoehe:		");
scanf_s("%d", &hoehe);

umfang = 2 * (breite + hoehe);
flaecheninhalt = breite * hoehe;

printf("\nUmfang:		%d\nFlaecheninhalt:	%d\n", umfang, flaecheninhalt);

// 6 (mit Input)
int radius;

int umfang;
int flaecheninhalt;

printf("Diese Programm berechnet dir denn Umfang und den Flaecheninhalt eines Kreises.\n\n");

printf("Radius:		");
scanf_s("%d", &radius);

umfang = 2 * 3.14159 * radius;
flaecheninhalt = 3.14159 * radius * radius;

printf("\nUmfang:		%d\nFlaecheninhalt:	%d\n", umfang, flaecheninhalt);

// Basic Algorithm

// 1
int Wert1;
int Wert2;

int Ergebniss;

printf("Geben sie zwei Werte ein:\n");
printf("Wert 1: ");
scanf_s("%d", &Wert1);
printf("Wert 2: ");
scanf_s("%d", &Wert2);
printf("\n");

if (Wert1 == Wert2) {
	Ergebniss = (Wert1 + Wert2) * 3;
}
else
{
	Ergebniss = Wert1 + Wert2;
}

printf("Das Ergebniss ist: %d\n\n", Ergebniss);

// 2
int Wert;
int Differenz;

printf("Wert: ");
scanf_s("%d", &Wert);


if (Wert <= 51) {
	Differenz = 51 - Wert;
}
else
{
	Differenz = (Wert - 51) * 3;
}


printf("%d", Differenz);

// 
