//Приклад 1
#include <stdio.h>
int main() {
    int a = 67;
    int b = 33;
    int c = a+b+7;
    printf("a+b+7 = %d \n", c);
    return 0;
}
//Приклад 2
#include <stdio.h>
int main()
{
int a = 8;
int b = 7;
int c = a + 5 * b;
printf("c = %d \n", c);
}
//Приклад 3
#include <stdio.h>
int main()
{
int a = 8;
int b = 7;
int c = (a + 5) * b;
printf("c = %d \n", c);
}
//Приклад 4
#include <stdio.h>
int main()
{
int a = 8;
int b = a++;
printf("a = %d \n", a);
printf("b = %d", b);
}
//Прикдад 5
#include <stdio.h>
int main()
{
int a = 8;
int b = ++a;
printf("a = %d \n", a);
printf("b = %d", b);
}
//Приклад 6
#include <stdio.h>
int main()
{
int a = 8;
int b = a--;
printf("a = %d \n", a);
printf("b = %d", b);
}
//Приклад 7
#include <stdio.h>
int main()
{
int a = 8;
int b = --a;
printf("a = %d \n", a);
printf("b = %d", b);
}
//Приклад 8
#include <stdio.h>
#include <string.h>
#define PRAISE "О, яке чудове ім'я!"
int main() {
    char name[50];
    printf("Як Вас звати?\n");
    scanf("%s", name);
    printf("Привіт, %s. %s\n", name, PRAISE);
    printf("Ваше ім'я складається з %lu літер і займає %lu комірок пам'яті.\n", strlen(name), sizeof(name));
    printf("Вітальна фраза складається з %lu літер і займає %lu комірок пам'яті.\n", strlen(PRAISE), sizeof(PRAISE));
    return 0;
}
//Приклад 9
#include <stdio.h>
#include <conio.h>
void main()
{
float x=1.4, y=2.0; int z;
z= x/2*7 + y/4 - 1; printf("z=%d\n",--z);
getch();
}
//Приклад 10
#include <stdio.h>
#include <conio.h>
void main()
{
int x = 2,z;
float y;
z=0.5*(y = 2.3*x) + x++/3*y;
printf("z=%d\n",z);
getch();
}
//Приклад 11
#include <stdio.h>
#include<conio.h>
void main()
{
int x,y = 3;
float z;
z = 1.1*(x = ++y/2.)+0.3*x;
printf("z=%4.1f\n",z);
getch();
}



