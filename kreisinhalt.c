#include<stdio.h>
#define PI 3.141592653589793

int main () {

	/*
 	Dieser Rechner soll den Radius eines Kreises einlesen und dann den
	Flächeninhalt ausgeben.
	(c) Sharon Buch
	*/

	float r;
	printf("\n   ^,,,,^   * \n");
	printf("\n  ( o x o)  * Kreis-Flächeninhalt-Rechner \n");
	printf("\n (   ,,,  ) * (c)Sharon Buch \n");       
	printf("\n (  D   D ) * \n");
	printf("\n\nBitte geben Sie den Radius des Kreises an (cm): ");
	scanf("%f", &r);
	printf("\nDer Flächeninhalt des Kreises beträgt %8.2fcm²\n\n",PI*r*r);
	return 0;
}
