//Dobre Andrei-Teodor 314CA
#include <stdio.h>

int pozitiv(long long x)
{
	if (x < 0)
		return -x;
	else
		return x;
}

int micsorare(int n, long long input)
{
	while (input >= n)
		input = input % n;

	return input;
}

int marire(int n, long long input)
{
	while (input < 0)
		input = input + n;
	return input;
}

void afisare_excel(int y)
{
if (y > (26 * 26) && y < 1001) {
	//daca y se afla in acest interval avem 3 litere (ex. AAA)
	char unitati = 'A';
	char zeci = 'A';
	char sute = 'A' - 1;

	sute += y / 26 / 26;
	zeci += y / 26 % 26;
	unitati += y % 26;

	printf("%c%c%c\n", sute, zeci, unitati);
} else if (y >= 26 && y <= (26 * 26)) {
	//daca y se afla in acest interval avem 2 litere (ex. AA)
	char unitati = 'A';
	char zeci = 'A' - 1;

	zeci += y / 26;
	unitati += y % 26;

	printf("%c%c\n", zeci, unitati);
} else if (y < 26)
	//daca y se afla in acest interval avem o singura litera (ex. A)
	printf("%c\n", 'A' + y);
}
