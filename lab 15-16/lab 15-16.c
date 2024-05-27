//Приклад 1
#include <stdio.h>
#include <string.h>
int main(void) {
 char s1[80], s2[80];
 printf("Введіть перший рядок:");
 fgets(s1, sizeof(s1), stdin);
 printf("Введіть другий рядок: ");
 fgets(s2, sizeof(s2), stdin);
 printf("Довжина:%zu %zu\n", strlen(s1), strlen(s2));
 if (!strcmp(s1, s2))
 printf("Рядки рівні:\n");
 strcat(s1, s2);
 printf("%s\n", s1);
 strcpy(s1, "Перевірка.\n");
 printf("%s", s1);
 return 0;
}
//Приклад 2
#include <stdio.h>
int main(void) {
int x[100]; //оголошення масиву цілого типу з 100 чисел
int t;
for(t=0;t<100;++t) x[t]=t; //присвоєння значення від0 до 99
for(t=0;t<100;++t) printf("%d\n",x[t]);}
//Приклад 3
#include<stdio.h>
int main(void){
int t,i, num[3][4];
for(t=0;t<3;++t)
for(i=0;i<4;++i)
num[t][i]=(t*4)+i+1;
//вивід на екран
for(t=0;t<3;++t){
for(i=0;i<4;++i)
printf("%3d",num[t][i]);
printf("\n");
}
return 0;
}
//Приклад 4
#include <stdio.h>
#define MAX 100
#define LEN 80
char text[MAX][LEN];
int main(void) {
 int t, i, j;
 printf("Для виходу введіть пустий рядок.\n");
 for (t = 0; t < MAX; t++) {
 printf("%d: ", t);
 gets(text[t]);
 if (!*text[t]) break; } // вихід при пустому рядку 
 for (i = 0; i < t; i++) {
 for (j = 0; text[i][j]; j++)
 putchar(text[i][j]);
 putchar('\n'); }
 return 0;
}
//Приклад 5
#include <stdio.h>
#define SIZE 10
int main() {
 int arr[SIZE];
 int sum = 0;
 // Заповнення масиву
 printf("Введіть %d цілих чисел:\n", SIZE);
 for (int i = 0; i < SIZE; i++) {
 printf("Елемент %d: ", i + 1);
 scanf("%d", &arr[i]);
 sum += arr[i]; // Додавання поточного елементу до суми
 }
 // Виведення масиву
 printf("Введений масив: ");
 for (int i = 0; i < SIZE; i++) {
 printf("%d ", arr[i]);
 }
 // Виведення суми елементів масиву
 printf("\nСума елементів масиву: %d\n", sum);
 return 0;}


