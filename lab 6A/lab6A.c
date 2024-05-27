//Приклад 1
#include <stdio.h>
void main()
{
int z;
int w;
int x=1;
int y=2;
z=y+x;
w=y-x;
printf("z=%d w=%d", z,w);
}
//Приклад 2
#define PI 3.14159
#include <stdio.h>
void main()
{
int a =5;
float b=23.5;
int c=31000;
printf("%d метрів тканини коштувало %f гривень. \n", a,b);
printf("Значення числа рі рівне %f.\n", PI);
printf("IBM сумісні комп'ютери набули широкого розповсюдження. \n");
printf("%c%d\n", '$', c);
}
//Приклад 3
#include <stdio.h>
void main()
{
printf("/%d/\n",557);
printf("/%2d/\n",557);
printf("/%10d/\n",557);
printf("/%-10d/\n",557);
}
//Приклад 4
#include <stdio.h>
void main() {
printf("/%f/\n", 6543.21);
printf("/%e/\n", 6543.21);
printf("/%4.2f/\n", 6543.21);
printf("/%3.1f/\n", 6543.21);
printf("/%10.3f/\n", 6543.21);
printf("/%10.3e/\n", 6543.21);
}
//Приклад 5
#include <stdio.h>
#define riadok "Чудова погода"
void main(){
printf("/%25/\n", riadok);
printf("/%15.s/\n", riadok);
printf("/%15.5s/\n", riadok);
printf("/%-15.5s/\n", riadok);
}
//Приклад 6
#include <stdio.h>
void main() {
printf("%d\n",557);
printf("%o\n",557);
printf("%x\n",557);
printf("%d\n",-557);
printf("%u\n",-557);
}
//Приклад 7
#include <stdio.h>
void main() {
int vik;
char name [30];
printf("Vash vik?\n");
scanf("%d", &vik);
printf("Vvedit vashe imya\n");
scanf("%s", name);
printf("Pryvit %s jakomy(iy) %d rokiv", name, vik);
}
//Приклад 8
#include <stdio.h>
#define STOP '*'
void main() {
    char ch;
    ch = getchar();
m1:
    if (ch != STOP) { 
        putchar(ch); 
        ch = getchar(); 
        goto m1;
    }

}
//Приклад 9
#include <stdio.h>
void main() {
int i = 99;
float f = 96.14;
char c = 'X';
long b = 649851648;
printf("Integer: %d\n", 1);
printf("Float: %f\n", f);
printf("Character: %c\n", c);
printf("Lond: %ld\n", b);
}
//Приклад 10
#include <stdio.h>
void main() {
    int i;
    char c;
    printf("ASCII символи та їх коди: \n");
    printf("Символ Десятковий Вісімковий Шістнадцятковий\n");
    for (i = 0, c= '0'; i < 10; ++i, ++c) {
        printf("\n%c  %d  %o  %x\n", c, c, c, c);
    }
}
//приклад 11
Завдання 5:
#include <stdio.h>
void main() {
    int i, n;
    float price, quantity, total = 0;
    float prices[] = {10.5, 20, 15.75, 8.99, 12.49};
    int quantities[] = {3, 2, 5, 1, 4};
    printf("Товар \t Ціна \t Кількість \t Сума\n");
    for (i=0;i < 5; ++i) {
        price = prices[i];
        quantity = quantities[i];
        total += price* quantity;
        printf("Товар %d\t%.2f\t%d\t\t%.2f\n", i + 1, price, quantities [i], price* quantity);
    }
    printf("Загальна сума покупки: %.2f\n\n", total);
    total = 0;
    printf("Введіть кількість товарів (не менше 5): "); scanf("%d", &n);
    float dynamic_prices[n];
    int dynamic_quantities [n];
    printf("Введіть ціну та кількість для кожного товару: \n");
    printf("Товар \t Ціна \t Кількість \t Сума\n");
    for (i=0; i<n; ++i) {
        printf("Товар %d: ", 1+ 1);
        scanf("%f %d", &price, &dynamic_quantities[i]);
        dynamic_prices[i] = price;
        total += price* dynamic_quantities[i];
    printf("Товар %d\t%.2f\t%d\t\t%.2f\n", i + 1, price, dynamic_quantities [i], price* dynamic_quantities[i]);

    }
    printf("Загальна сума покупки: %.2f\n", total);
}
//Приклад 12
#include <stdio.h>
#include <math.h>
#define PI 3.14159
void main() {
    float radius;
    printf("Введіть радіус круга: ");
    scanf("%f", &radius);
    float circle_length = 2*PI* radius;
    float area = PI * pow(radius, 2);
    printf("Довжина кола: %.2f\n", circle_length); 
    printf("Площа круга: %.2f\n", area);
}
//Приклад 13
#include <math.h>
void main() {
    float a, b, c;
    float discriminant, root1, root2;
    printf("Введіть а, в, с квадратного рівняння (ах^2 + bx + c): \n");
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);
    discriminant = b*b-4*a*c;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Корені квадратного рівняння: %.2f та %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = root2= -b / (2* a);
        printf("Корені квадратного рівняння: %.2f та %.2f (два однакові корені)\n", root1, root2);
    } else {
        float realPart = b/(2* a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Корені квадратного рівняння: %.2f + %.2f1 та %.2f %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }
}
//Приклад 14
#include <stdio.h>
#include <stdlib.h>
void sound() {
    printf("\a");
}
int main() {
    char symbol;
    printf("Введіть символи. Натисніть звуковий сигнал (наприклад, клавіша Enter) для завершення: \n");
            while ((symbol = getchar()) != EOF && symbol != '\n') {
    putchar(symbol);
    }
    sound();
    printf("Програма завершилася. \n");
    return 0;
}
//Приклад 15



//Приклад 16
#include <stdio.h>
#include <stdlib.h>
void sound() {
    printf("\a");
}
int main() {
    char symbol;
    printf("Введіть символи. Натисніть звуковий сигнал (наприклад, клавіша Enter) для завершення: \n");
            while ((symbol = getchar()) != EOF && symbol != '\n') {
    putchar(symbol);
    }
    sound();
    printf("Програма завершилася. \n");
    return 0;
}

