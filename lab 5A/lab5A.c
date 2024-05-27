//Приклад 1
#include <stdio.h>
#include <math.h>
#define PI 3.14159265
int main() {
int N = 32;
double max_val = INFINITY;
double min_val = INFINITY;
printf("i\tValue\n");
for
(int i = 0; i <= 31; i++) {
double value = i *i*exp(-i* i / 100) * sin((2 * PI / N) * i); printf("%d\t%.6f\n", i, value);
if (value > max_val) {
max_val = value;
}
if (value < min_val) { min_val = value;
}
}
printf("\nМаксимальне значення: %.6f\n", max_val); printf("Мінімальне значення: %.6f\n", min_val);
return 0;
}

//Приклад 2
#include<stdio.h>
#include<math.h>
int main(void) {
    int i = 0;
    float precision = 1.0;
    float a;
    while (1) {
        precision = precision / 2.0;
        a = precision + 1.0;
        i++;
        if (a <= 1.0) {
            break;
        }
    }
    printf("\n число ділень на 2: %6d\n", i);
    printf("машинний нуль для float: %e\n", precision);
    i = 0;
    precision = 1.0;
    do {
        precision = precision / 2.0;
        a = precision + 1.0;
        i++;
    } while (a > 1.0);
    printf("\n число ділень на 2: %6d\n", i);
    printf("машинний нуль для float: %e\n", precision);
    i = 0;
    precision = 1.0;
    for (i = 0; a > 1.0; i++) {
        precision = precision / 2.0;
        a = precision + 1.0;
    }
    printf("\n число ділень на 2: %6d\n", i);
    printf("машинний нуль для float: %e\n", precision);
    return 0;}

//Приклад 3
#include <stdio.h>
int main() {
int height = 10;
int start_code = 100;
for (int i = 1; i <= height; i++) {
for (int j = 1; j <= i; j++) { printf("%c", start_code);
}
printf("\n");
start_code++;
}
return 0;
}

//Приклад 4
#include <stdio.h>
#include <math.h>
int main() {
int N = 10;
double result = 0;
for
(int i = 1; i <= N; i++) {
double sum = 0;
for
(int k = 0; k <= i; k++) {
sum += pow(i * k, 2);
}
result += sum;
}
printf("Результат: %lf\n", result);
return 0;
}
//Приклдад 5
#include <stdio.h>
#include <math.h>
int main() {
double x, y_library, y_series, term, a;
int iterations = 0;
const double precision = 0.00001;
printf("Введіть значення х (0 <= x <= pi / 2): ");
scanf("%lf", &x);
y_library = exp(x) - pow(M_E, 2);
y_series = 0.0;
a = 1.0;
term = x;
while (fabs(term) >= precision) {
y_series += term;
iterations++;
a *= (double)iterations;
term = pow(x, iterations + 1) / a;
}
printf("Значення функції у за допомогою бібліотечної функції: %f\n", y_library);
printf("Значення функції у за допомогою ряду: %f\n", y_series);
printf("Кількість ітерацій: %d\n", iterations);
}


