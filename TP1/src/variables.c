#include <stdio.h>

int main(void)
{
	char caractere = 'A';
	signed char caractere_signe = -10;
	unsigned char caractere_non_signe = 250;

	short entier_court = -1234;
	signed short entier_court_signe = -2345;
	unsigned short entier_court_non_signe = 54321;

	int entier = -123456;
	signed int entier_signe = -234567;
	unsigned int entier_non_signe = 345678;

	long int entier_long = -123456789L;
	signed long int entier_long_signe = -234567890L;
	unsigned long int entier_long_non_signe = 345678901UL;

	long long int entier_tres_long = -123456789012LL;
	signed long long int entier_tres_long_signe = -234567890123LL;
	unsigned long long int entier_tres_long_non_signe = 345678901234ULL;

	float reel_simple = 3.14f;
	double reel = 2.718281828;
	long double reel_tres_precis = 1.618033988749895L;

	printf("char                 : %c\n", caractere);
	printf("signed char          : %hhd\n", caractere_signe);
	printf("unsigned char        : %hhu\n", caractere_non_signe);

	printf("short                : %hd\n", entier_court);
	printf("signed short         : %hd\n", entier_court_signe);
	printf("unsigned short       : %hu\n", entier_court_non_signe);

	printf("int                  : %d\n", entier);
	printf("signed int           : %d\n", entier_signe);
	printf("unsigned int         : %u\n", entier_non_signe);

	printf("long int             : %ld\n", entier_long);
	printf("signed long int      : %ld\n", entier_long_signe);
	printf("unsigned long int    : %lu\n", entier_long_non_signe);

	printf("long long int        : %lld\n", entier_tres_long);
	printf("signed long long int : %lld\n", entier_tres_long_signe);
	printf("unsigned long long int : %llu\n", entier_tres_long_non_signe);

	printf("float                : %f\n", reel_simple);
	printf("double               : %f\n", reel);
	printf("long double          : %Lf\n", reel_tres_precis);

	return 0;
}
