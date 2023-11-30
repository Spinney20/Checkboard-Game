//Dobre Andrei-Teodor 314CA
#include <stdio.h>
#include "functii_gigel.h"
#define NMAX 1000

int main(void)
{
	long long a[NMAX][NMAX];
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			scanf("%lld", &a[i][j]);
	}

	int x = 0, y = 0; //Coordonatele
	long long distanta = 0;

	while (a[x][y] != 0) {
		if ((x + y) % 2 == 0) {
			int parcurs = a[x][y];

			//actualizam valoarea pozitiei actuale, in caz ca se revine in ea
			a[x][y] = 0;

			distanta += pozitiv(parcurs);

			y += parcurs;
			if (y >= n)
				y = micsorare(n, y);

			else if (y < 0)
				y = marire(n, y);
		}
		if ((x + y) % 2 == 1) {
			int parcurs = a[x][y];

			a[x][y] = 0;

			distanta += pozitiv(parcurs);

			x += parcurs;
			if (x >= n)
				x = micsorare(n, x);
			else if (x < 0)
				x = marire(n, x);
		}
	}
	printf("%lld\n", distanta);

	//Convertim coordonatele x si y in coordonatele cerute de problema
	//Convertim coordonata x
	x = n - x;
	printf("%d ", x);

	//Convertim coordonata y
	afisare_excel(y);

	return 0;
}
