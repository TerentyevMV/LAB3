#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#define      EnglishD       2.54
#define      SpanishD       2.32166
#define      StaroD       2.7076
#define      SeaM      1.852
#define      DryM      1.609
#define      RomeM      1.475
#define      RUSM      7.468
#define      GeoM      7.4126


int main() {
	setlocale(LC_CTYPE, ".UTF-8");

	question1();

	question2();

	question2A();

	question3();
}
// ЗАДАНИЕ 1

int question1() {
	int num1, num2;

	puts("введи число 1\n");

	scanf("%d", &num1);

	printf("Введено число - %d\n", num1);

	puts("введи число 2\n");

	scanf("%d", &num2);

	printf("Введено число - %d\n", num2);

	printf("Произведение чисел - %d\n", num1 * num2);
	printf("Частное чисел - %d, остаток - %d\n", num2 / num1, num2 % num1);
	printf("Сумма чисел - %d\n", num1 + num2);
	printf("Разность чисел - %d\n\n", num2 - num1);

	return 0;
}

// ЗАДАНИЕ 2

int question2() {

	int dym;
	float result;

	puts("Введите числа\n");

	scanf("%d", &dym);

	float result1 = EnglishD * dym;
	printf("%d английских дюймов – это %.2f см\n", dym, result1);

	float result2 = SpanishD * dym;
	printf("%d испанских дюймов – это %.2f см\n", dym, result2);

	float result3 = StaroD * dym;
	printf("%d старолитовского дюймов – это %.2f см\n", dym, result3);

	return 0;
}

// ЗАДАНИЕ 2А

int question2A() {

	int mil;

	puts("Введите числа\n");

	scanf("%d", &mil);

	float result1 = SeaM * mil;
	printf("%d Морских миль – это %.2f км\n", mil, result1);

	float result2 = DryM * mil;
	printf("%d Сухопутных миль – это %.2f км\n", mil, result2);

	float result3 = RomeM * mil;
	printf("%d Римских миль – это %.2f км\n", mil, result3);

	float result4 = RUSM * mil;
	printf("%d Старорусских миль – это %.2f км\n", mil, result4);

	float result5 = GeoM * mil;
	printf("%d Географических миль – это %.2f км\n", mil, result5);

	return 0;
}

//ЗАДАНИЕ 3

int question3() {

	float a, b;

	puts("Введите числа\n");

	scanf("%f %f", &a, &b);
	system("pause");

	puts("_________________________");
	puts("| a * b | a + b | a - b |");
	puts("-------------------------");
	printf("|%2.f *%2.f |%2.f +%2.f |%2.f -%2.f |\n",a,b,a,b,a,b);
	puts("-------------------------");
	printf("| %5.f | %5.f | %5.f |\n", a*b, a+b, a-b);

	return 0;

}
