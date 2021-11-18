#include <stdio.h>
#include <math.h>
// Mathematische Formeln
long long int fakultät(long long int ausgang){
	if(ausgang!=0){
	for(long long int help = ausgang-1; help > 1; --help){
		ausgang = help*ausgang;
	} }else{ausgang = 1;}
	return ausgang;
}
int binominalkoeffizient(int n, int k){
	float bino;
	if(k==0 || (n-k)==0){
	bino = 1;
	}else{	
	bino = fakultät(n)/(fakultät(k)*(fakultät(n-k)));
	}
	bino = (int)bino;
	return bino;
}

float bernoulli_genau(int n, float p, int k){
	float bern;
	bern = binominalkoeffizient(n,k)*pow(p,k)*pow((1-p),(n-k));
	return bern;
}

float bernoulli_kleiner_gleich(int n, float p, int k){
	float addierer;
	for(int i = k; i>=0; --i){
		addierer = addierer+bernoulli_genau(n,p,i);
	}
	return addierer;
}
float bernoulli_größer_gleich(int n, float p, int k){
	float addierer;
	addierer = 1-bernoulli_kleiner_gleich(n,p,k-1);
	return addierer;
}

// Eingabe Funktionen
void Fakultät_eingabe(int help){
	printf("Geben sie die Zahl an von der sie die Fakultät wissen wollen: ");
	scanf("%d",&help);
	if(help >=0){
	printf("Die Fakultät beträgt: %d\n", fakultät(help)); 
	}else{
	printf("\n\nBitte geben sie eine Zahl an, die Positiv ist\n\n\n");
	Fakultät_eingabe(help);	
	}
}
void Binomi_eingabe(){
	int n;
	int k;
	printf("Geben sie die Anzahl der Versuche an: ");
	scanf("%d",&n);
	printf("Geben sie die Anzahl der Treffer an: ");
	scanf("%d", &k);
	if(n<0 || k<0){
		printf("\n\nBitte geben sie positive Zahlen an\n\n\n");
		Binomi_eingabe();
	}else{
	printf("Es existieren %d mögliche Pfade für dieses Ereignis\n", binominalkoeffizient(n,k));
	}
}

// Main
void main(){
	long long int help;
	printf("Was möchten sie berechnen?\n");
	printf("1: Fakultätsberechnungen \n2: Binominalkoeffizient\n3: Zufallsexperimente\n");
	scanf("%d",&help);
	
	// Aufruf der Fakultät mit den long long int wert von help
	switch (help){	
		case 1:
			// Fakultät
			Fakultät_eingabe(help);
			break;
		case 2:;
			// Binominalkoeffizient
			Binomi_eingabe();
			break;	
		case 3:;
			// Zufallsexperimente
			printf("Wie ist das Zufallsexperiment verteilt? \n1: Binominalverteilt\n2: Hypergeometrisch Verteilt\n");
			scanf("%d", &help);
			switch (help){
				// Bernoulli Experimente
				case 1:;
					int n;
					float p;
					int k;
					printf("Geben sie an Wie ihr Bernoulli Experiment aussieht:\n1: Genaue Treffer \n2: höchstens die Anzahl der Treffer\n3: Mindestens die Anzahl der Treffer\n");
					scanf("%d",&help);
					printf("Geben sie die Anzahl der Versuche an: ");
					scanf("%d",&n);
					printf("Geben sie die Anzahl der Treffer an: ");
					scanf("%d", &k);
					printf("Geben sie die Einzelwahrscheinlichkeit für einen Treffer an: ");
					scanf("%f", &p);
					if(p>1){ printf("\n\nBitte geben sie eine Einzelwahrscheinlichkeit an, die kleiner als 1 ist\nSie werden an den Anfang zurürckgeschickt\n\n\n");
						main();}
					switch(help){
						case 1:
							printf("Es liegt eine Wahrscheinlichkeit von: %.4f vor\n", bernoulli_genau(n,p,k));
						break;
						case 2:
							printf("Es liegt eine Wahrscheinlichkeit von: %.4f vor\n", bernoulli_kleiner_gleich(n,p,k));
						break;
						case 3:
							printf("Es liegt eine Wahrscheinlichkeit von: %.4f vo\n", bernoulli_größer_gleich(n,p,k));
						break;
					}
				break;
				// Hypergeometrisch Verteilt
				case 2:	
				break;	
		}
	}
}
