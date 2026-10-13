#include <stdio.h>
#include <locale.h>

void z1();
int z2();
int z3(int N);



int main() {
    setlocale(LC_ALL, "Ru");
    printf("Практика 4\n");
    printf("\nЗадание 1\n");
    z1();

    printf("\nЗадание 2\n");
    z2();

    printf("\nЗадание 3\n");
    int N;
    printf("введите трехзначное число: ");
    scanf("%d\n", &N);
    z3(N);
   

    return 0;
}
void z1()
{
    char c = '!';
    int i = 2;
    float f = 3.14f;
    double d = 5e-12;
    double num;
    char c1;
    int i1;
    printf("char:   %c\n", c);
    printf("int:    %d\n", i);
    printf("float:  %.2f\n", f);
    printf("double: %e\n", d);
    printf("\nввод значений\n");
    printf("введите символ (char): ");
    scanf("%c", &c);
    printf("введите целое число (int): ");
    scanf("%d", &i);
    printf("введите число с плавающей точкой (float): ");
    scanf("%f", &f);
    printf("введите число double: ");
    scanf("%lf", &d);
    printf("\nвы ввели:\n");
    printf("char:   %c\n", c);
    printf("int:    %d\n", i);
    printf("float:  %f\n", f);
    printf("double: %e\n", d);

    printf("\nзадача 1a\n");
    printf("введите вещественное число: ");
    scanf("%lf", &num);
    int num_int = (int)num;
    double num_frac = num - num_int;
    printf("целая часть: %d\n", num_int);
    printf("дробная часть: %g\n", num_frac);

    printf("\nзадача 1b\n");
    printf("введите символ: ");
    scanf(" %c", &c1);
    printf("код в 16-ричной системе: %x\n", c1);
    printf("код в 10-ричной системе: %d\n", c1);

    printf("\nзадача 1c\n");
    printf("введите целое число i: ");
    scanf("%d", &i1);
    double otv = 1.0 / i1;
    printf("1/%d:=%g\n", i1, otv);
}

int z2()
{
    int a = 11;
    int b = 3;

    int x;
    float y;
    double z;

    printf("неявное преобразование\n");
    printf("\n11/3:\n");
    x = a / b;
    y = a / b;
    z = a / b;

    printf("x (int):    %d\n", x);
    printf("y (float):  %f\n", y);
    printf("z (double): %lf\n", z);

    printf("\nявное преобразование\n");
    printf("\n11/3:\n");
    y = (float)a / b;
    z = (double)a / b;

    printf("y (float, с приведением):  %f\n", y);
    printf("z (double, с приведением): %lf\n", z);

    return 0;
}

int z3(int N)
{
    int first = N / 100;
    int second = (N / 10) % 10;
    int last = N % 10;

    int sum = first + second + last;
    int naoborot = last * 100 + second * 10 + first;

    printf("последняя цифра: %d, первая цифра: %d, сумма цифр: %d, число наоборот: %d\n", last, first, sum, naoborot);

    return 0;
}


