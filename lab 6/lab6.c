//Приклад 1
#include<stdio.h>
void main() {
    int z,w;
    int x = 1;
    int y = 2;
    z = x + y;
    w = y - x;
    printf("z = %d, w = %d",z,w);
}
//Приклад 2
#define PI 3,14159
#include<stdio.h>
void main(){
	int a = 5;
	float b = 23.5;
	int c = 31000;
	printf("%d метрів тканини коштувало %.2f гривень\n",a,b);
	printf("Значення числа PI %f\n",a,b);
	printf("IBM сумісні комп'ютери набули широкого розповсюдження.\n");
	printf("%c%d",'&',c);
}
//Приклад 3
#include<stdio.h>
void main(){
	printf("/%d/\n",557);
	printf("/%10d/\n",557);
	printf("/%-10d/\n",557);
}
//Приклад 4
#include<stdio.h>
void main(){
	printf("%d\n",557);
	printf("%o\n",557);
	printf("%x\n",557);
	printf("%d\n",-557);
}
//Приклад 5
#include<stdio.h>
void main(){
	int vik;
	char name[30];
	printf("Ваш вік?  ");
	scanf("%d",&vik);
	printf("Введіть ваше ім'я  ");
	scanf("%s",&name);
	printf("Привіт %s якому %d років",name,vik);
}
//Приклад 6
#include<stdio.h>
#include<conio.h>
#define STOP '*'
void main(){
	char ch;
	ch = getchar();
          ml: if(ch != STOP){
	putchar(ch);
	main();}}


