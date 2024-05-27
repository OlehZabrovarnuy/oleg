//Приклад 1
#include <stdio.h>
int main(void)
{
int x = 99;
int *p1, *p2;
p1 = &x;
p2=p1;
/* друк значення х два рази */
printf("Znachennya po adresi plip2: %d %d\n", *p1, *p2);
printf("Znachennya vkazivnukiv plip2: %p %p", p1, p2);
return 0;
}

//Приклад 2
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
void push(int i);
int pop(void);
int *tos,*p1,stack[SIZE];
int main(void)
{
int value;
tos = stack; /* tos посилається на основу стеку */
p1 = stack; /* ініціалізація р1 */
do {
printf("Vvedit znachennya: ");
scanf("%d", &value);
if(value != 0) push(value);
else printf("Znachennya na vershuni rivne %d\n", pop());
} while(value != -1);
return 0;
}
void push(int i)
{
p1++;
if(p1 == (tos+SIZE)) {
printf("Perepovnennya steka.\n");
exit(1);
}
*p1 = i;
}
int pop(void)
{
if(p1 ==tos) {
printf("Stek pyctuy.\n");
exit(1);
}
p1--;
return *(p1+1);
}
//Приклад 3
#include <stdio.h>
#define SIZE 5
int main() {
int a[SIZE];
int *p = a;
int sum = 0;
printf("Введіть %d елементів масиву:\n", SIZE);
for (int i = 0; i < SIZE; i++) {
    printf("Елемент %d: ", i + 1);
    scanf("%d", p + i);
}
for (int i = 0; i < SIZE; i++) {
    sum += *(p + i);
}
printf("Сума елементів масиву: %d\n", sum);
}

