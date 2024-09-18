#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");

	int N = 7, K = 50;

	printf("Сейчас %d часов %d минут 00 секунд\n", N, K);
	printf("Идет %d минута суток\n", K);
	printf("До полуночи осталось %d часов и %d минут\n", N, K);
	printf("С 8.00 прошло %d секунд\n", K * 60);
	printf("Текущий час  = %f суток  и текущая минута = %f часа\n", N / 24., K / 60.);

	return 0;
}