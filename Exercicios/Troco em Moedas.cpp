/*
https://neps.academy/br/exercise/143
Troco em Moedas

*/
#include<bits/stdc++.h>

int main() {
	int centavos, m100, m50, m25, m10, m5, m1, total;
	scanf("%d", &centavos);

	m100 = centavos / 100;
	centavos = centavos % 100;

	m50 = centavos / 50;
	centavos = centavos % 50;

	m25 = centavos / 25;
	centavos = centavos % 25;

	m10 = centavos / 10;
	centavos = centavos % 10;

	m5 = centavos / 5;
	centavos = centavos % 5;

	m1 = centavos / 1;
	centavos = centavos % 1;

	total = m100 + m50 + m25 + m10 + m5 + m1;

	printf("\n%d \n%d \n%d \n%d \n%d \n%d \n%d\n", total, m100, m50, m25, m10, m5, m1);
}
