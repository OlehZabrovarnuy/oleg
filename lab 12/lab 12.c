//Приклад 1
#include<stdio.h>
int main() {
int i = 2;
while (i <= 1024) {
i = i * 2;
printf("%d\n", i);
}
return 0;
}
//Приклад 2
#include<stdio.h>
int main() {
int j = 0, k = 0;
while (j < 5) {
k += 10;
j++;
}
printf("k=%d\n", k);
return 0;
}
//Приклад 3
#include <stdio.h>
int main(void) {
int x;
for (x = 1; x <= 100; x++)
printf("%d ", x);
return 0;
}
//Приклад 4
#include<stdio.h>
int main() {
int a = 2, b = 10, c;
do {
b = b + a;
c = 10 * a;
a++;
} while (a < 5);
printf("\nb=%d c=%d a=%d", b, c, a);
return 0;
}
//Приклад 5
#include<stdio.h>
#include<stdlib.h>
int main(void) {
int magic;
int guess;
magic = rand() % 100 + 1;
printf("Вгадайте число: ");
scanf("%d", &guess);
if(guess == magic) {
printf("**Вірно! **\n");
printf("Магічне число рівне %d\n", magic);
} else {
printf("Невірно\n");
while (guess != magic) {
printf("Вгадайте число: ");
scanf("%d", &guess);
printf("Невірно\n");
}
}
return 0;
}
//Приклад 6
#include<stdio.h>
#include<stdlib.h>
int main(void) {
int magic;
int guess;
int m = 1;
magic = rand() % 100 + 1;
printf("Вгадайте число: ");
scanf("%d", &guess);
if(guess == magic) {
printf("**Bірно! **\n");
printf("Магічне число рівне %d\n", magic);
} else {
printf("Невірно\n");
printf("m=%d\n", m);
while (guess != magic) {
m++;
printf("Вгадайте число: ");
scanf("%d", &guess);
printf("Невірно\n");
printf("m=%d\n", m);
}
}
return 0;
}
// Приклад 7
#include <stdio.h>
#include <stdlib.h>
int main(void) {
int magic;
int guess;
int m = 1;
magic = rand() % 100 + 1;
printf("Вгадайте число: ");
scanf("%d", &guess);
if(guess == magic) {
printf("**Biрно! **\n");
printf("Магічне число рівне %d\n", magic);
} else {
printf("Невірно\n");
printf("m=%d\n", m);
while (guess != magic) {
m++;
printf("Вгадайте число: ");
scanf("%d", &guess);
printf("Невірно\n");
printf("m=%d\n", m);
if(m > 9) {
printf("Магічне число рівне %d\n", magic);
break;
}
}
}
return 0;
}
//Приклад 8
#include<stdio.h>
int main() {
int fahr, celsius;
int lower, upper, step;
lower = 0;
upper = 300;
step = 20;
fahr = lower;
printf("\n\nCelsius Fahrenheit\n");
while (fahr <= upper) {
celsius = 5 * (fahr - 32) / 9;
printf("%10d\t%8d\n", fahr, celsius);
fahr = fahr + step;
}
return 0;
}
//ПРиклад 9
#include <stdio.h>
int main() {
int n, i, j;
    printf("Введіть кількість рядків для прямокутного трикутника: "); 
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            printf("* ");
    }   
        printf("\n");
    }
    return 0;
}
//Приклад 10
#include <stdio.h>
#include <stdint.h>
int main() {
    int n = 64;
    uint64_t grains = 1;
    uint64_t total_grains = 0;
    for (int i = 0; i < n; i++) {
        total_grains += grains;
        grains *= 2;
    }
    printf("Загальна кількість зерен на шахівниці: %lu\n", total_grains);
    return 0;
}
//Приклад 11
#include <stdio.h>
#include <math.h>
int main() {
    printf("Номер\+квадрат\куб\тчетвертий корінь\n");
    for (int i = 1; i <= 20; i++) {
    double square = pow(i, 2);
    double cube = pow(i, 3);
    double fourth_root = pow(i, 0.25);

    printf("%d\t%.2f\t%.2f\t%.2f\n", i, square, cube, fourth_root);
    }
    return 0;
}
//Приклад 12
#include <stdio.h>
#include <math.h>
#define PI 3.14159265
int main() {
    int N = 32;
    double max_val = -INFINITY;
    double min_val = INFINITY;
    printf("i\tValue\n");
    for (int i = 0; i <= 31; i++) {
    double value = i *i* exp(-i* i / 100) * sin((2 * PI / N) * i);
    printf("%d\t%.6f\n", i, value);
    if (value > max_val) {
    max_val = value;
    }
    if (value < min_val) { min_val = value;
        }
    }
    printf("\nМаксимальне значення: %.6f\n", max_val);
    printf("Мінімальне значення: %.6f\n", min_val);
    return 0;
}
//Приклад 13
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
    return 0;
    }
//Приклад 14
#include <stdio.h>
int main() {
    int N = 10;
    double S = 0.0;
    for (int i = 1; i < N; i++) {
        double inner_sum = 0.0;
        double factorial = 1.0;
        for(int k = 0; k <= i; k++) {
            double term = factorial / (1.0);
            inner_sum += term;
            factorial *= (i - k);
        }
        S += inner_sum;
    }
    printf("Значення суми Ѕ: %.6f\n", S);
    return 0;
}
//Приклад 15
#include <stdio.h>
#include <math.h>
int main() {
    double x, y_library, y_series, term, a;
    int iterations = 0;
    const double precision = 0.00001;
    printf("Введіть значення х (0 <= x <= pi/2): ");
    scanf("%lf", &x);
    y_library = exp(x)-pow(M_E, 2);
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
    return 0;
}

