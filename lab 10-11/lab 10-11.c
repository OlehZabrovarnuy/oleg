//Приклад 1
#include <stdio.h>
#include <stdlib.h>
int main() {
int magic; /* магічне число */
int guess; /* спроба гравця */
magic = rand(); /* генерація магічного числа */
 printf("Vgaday magichne chuslo: ");
 scanf("%d", &guess);
 if(guess == magic) printf(" Virno ");
 return 0;
}
//Приклад 2
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
 int magic;
 int guess;
 magic = rand();
 printf("Vgaday magichne chuslo: ");
 scanf("%d", &guess);
 if(guess == magic) printf(" Virno ");
 else printf("Nevirno");
 return 0;
}
//Приклад 3
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
 int magic;
 int guess;
 magic = rand();
 printf("Vgaday magichne chuslo: ");
 scanf("%d", &guess);
 if (guess == magic) {
 printf(" Virno ");
 printf("Magichne chuslo rivne %d\n", magic);
 }
 else {
 printf("** Nevirno, ");
 if(guess > magic) printf("zanadto veluke\n");
 /* вкладений if */
 else printf("zanadto male\n");
 }
 return 0;
}
//Приклад 4
#include <stdlib.h>
#include <stdio.h> 
int main(void) {
int magic;
int guess;
magic = rand();
printf("Vgaday magiche chyslo: ");
scanf("%d", &guess);
if(guess == magic) {
printf(" Virno  ");
printf("Magichne chyslo rivne %d\n", magic);
}
else if(guess > magic)
printf("Nevirno, zanabto veluke");
else printf("Nevirno, zanabto male");
return 0;
}
//Приклад 5
#include <stdio.h>
int main(void)
{
 int t;
 for(t=0; t<100; t++) {
 printf("%d ", t);
 if(t==10) break;
 }
 return 0;
}
//Приклад 6
#include <stdio.h>
int main(void) {
 char s[80], *str;
 int space;
 printf("Vvedit riadok: ");
 gets(s);
 str = s;
 for(space=0; *str; str++) {
 if(*str != ' ') continue;
 space++;
 }
 printf("%d probiliv\n", space);
 return 0;
}
//Приклад 7
#include <stdio.h>
#include <conio.h>
void main() {
    int a = 2, b = 0, c = 1;
    printf("\n\n");
    if (a > 0 && b < -3)
        c = b * b / a;
    printf("c=%d\n", c);
    a = ++c / a + a % c;
    b += c * c;
    if (a < b || a < 0) {
        c *= a; 
        printf("c=%d\n", c);
    }
    else if (c++ == 2) 
        printf("c=%d\n", c);
    if (b < a && a == 2) 
        c = 2 * a + 1;
    else { 
        c = (b--) + a; 
        a = 0; 
    }
    printf("c=%d\n", c);
    a = b = 2;
    if (c >= 3) {
        if (a < 0 || a > c) 
            c = 0;
        else { 
            a = 1; 
            c = 7; 
            printf("c=%d\n", c++);
        }
    } else c = 10;
    if (c <= 5) {
        if((a = b + 1) > 2)
            c %= 2;
    }
    printf("c=%d\n", c);
    a = 3;
    b = -1;
    if (b > 0)
        c = 1;
    else if (b < -10)
        c = -1;
    else if (b <= -3)
        c = 2;
    else
        c = b * b + 10;
    printf("c=%d\n", c);
    return 0;
}
//Приклад 8
#include <stdio.h>
int main() {
    float num1, num2;
    char op;
    printf("Введіть перше число: ");
    scanf("%f", &num1);
    printf("Введіть операцію (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Введіть друге число: ");
    scanf("%f", &num2);
    if (op == '+') {
        printf("Результат: %.2f\n", num1 + num2);
    } else if (op == '-') {
        printf("Результат: %.2f\n", num1 - num2);
    } else if (op == '*') {
        printf("Результат: %.2f\n", num1 * num2);
    } else if (op == '/') {
        if (num2 != 0) {
            printf("Результат: %.2f\n", num1 / num2);
        } else {
            printf("Помилка: Ділення на нуль неможливе!\n");
        }
    } else {
        printf("Помилка: Невірна операція введена!\n");
    }
    return 0;
}
