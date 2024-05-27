//Приклад 1
#include <stdio.h>

int main(void) {
    float var1, var2;
    printf("Введіть перше число (var1): ");
    scanf("%f", &var1);
    printf("Введіть друге число (var2): ");
    scanf("%f", &var2);

    printf("var1 > var2 дає %d\n", var1 > var2);
    printf("var1 < var2 дає %d\n", var1 < var2);
    printf("var1 == var2 дає %d\n", var1 == var2);
    printf("var1 >= var2 дає %d\n", var1 >= var2);
    printf("var1 <= var2 дає %d\n", var1 <= var2);
    printf("var1 != var2 дає %d\n", var1 != var2);
    printf("!var1 дає %d\n", !var1);
    printf("!var2 дає %d\n", !var2);
    printf("var1 || var2 дає %d\n", var1 || var2);
    printf("var1 && var2 дає %d\n", var1 && var2);

    return 0;
}
//Приклад 2
#include <stdio.h>
#define TRUE "ІСТИНА"
#define FALSE "ХИБНІСТЬ"

int main(void) {
    float var1, var2;
    printf("Введіть перше число (var1): ");
    scanf("%f", &var1);
    printf("Введіть друге число (var2): ");
    scanf("%f", &var2);
    printf("var1 > var2 це %s\n", var1 > var2 ? TRUE : FALSE);
    printf("var1 < var2 це %s\n", var1 < var2 ? TRUE : FALSE);
    printf("var1 == var2 це %s\n", var1 == var2 ? TRUE : FALSE);
    printf("var1 >= var2 це %s\n", var1 >= var2 ? TRUE : FALSE);
    printf("var1 <= var2 це %s\n", var1 <= var2 ? TRUE : FALSE);
    printf("var1 != var2 це %s\n", var1 != var2 ? TRUE : FALSE);
    printf("!var1 це %s\n", !var1 ? TRUE : FALSE);
    printf("!var2 це %s\n", !var2 ? TRUE : FALSE);
    printf("var1 || var2 це %s\n", var1 || var2 ? TRUE : FALSE);
    printf("var1 && var2 це %s\n", var1 && var2 ? TRUE : FALSE);
    return 0;
}
//Приклад 3
#include <stdio.h>

int main() {
    int x, y, z;
    x = 2;
    y = 1;
    z = 0;
    x = x && y || z;
    printf("%d\n", x);
    printf("%d\n", x || !y && z);

    return 0;
}
//Приклад 4
#include <stdio.h>
#include <conio.h>

void main() {
    int a = 0, b = 3, c; //створюють зміні а б с де а = 0 б = 3  с не має значення
    c = b % 2 || (a >= 0) && (++b / (2 * a)) == 0; /*Б ділить на 2 потім за допомогою ||  перевіряється чи хочаб одна умова виконується тобто вийде 1  чи а більше або = 0 , далі йде перевірка чи а більше рівне 0 потім йде перевірка на істиність обох виразів якщо хочаб 1 = 0 то і відповідь буде 0*/
    printf("a=%d, c=%d\n", a, c); /*a=0,c=1 результат */
    getch();
}
//Приклад 5
#include <stdio.h>
#include <conio.h>

int main() {
    int a = 1, b = 0, c;
    c = (b ^ 2) || (a >= 0) && (++b * a) == 0;//Тут 0*2 = 0 перевіряють чи хочаб один оператор не є хибним потім пеевіряють чи два оперератора є істиними 0+1*1=1
    printf("c=%d\n", c); /*c=0*/
    getch();
    return 0;
}
//Приклад 6
#include <stdio.h>
#include <conio.h>

void main() {
    int x = 1, y = 2, z;
    z = (x / 2 * 7 <= 0) && (y < 0) || (y % x == 0); /*в перших дужках буде 1 потім йде порівняня в якому і в першому і в другому, потім йде 2 порівняня в якому буде 1 будь якому випадку */
    printf("z=%d\n", --z); /*z=0*/
    getch();
}
//Приклад 7
#include <stdio.h>
#include <conio.h>

void main() {
    int x = 1, y = 2, z;
    z = (x / 2 * 7 <= 0) && (y < 0) || (y % x == 0); /*в перших дужках буде 1 потім йде порівняня в якому і в першому і в другому, потім йде 2 порівняня в якому буде 1 будь якому випадку */
    printf("z=%d\n", --z); /*z=0*/
    getch();
}
//приклад 8
#include <stdio.h>
#include <conio.h>

void main() {
    int x = 1, y = 0, z = 2, a = 0;
    z = ((a = x++) * y == 0 || a < 0 && z);//В першій дужці буде 1 через властивість  z = 1
    printf("z=%d\n", z); /* Z = 1 */
    getch();
}
//Приклад 9
#include <conio.h>
#include <stdio.h>

void main() {
    int x = 2, z, y = 0;
    z = (x = 0) && (y = x) || (y > 0); //тут в кожній вийде 0
    printf("Z = %d\n", z); /* Z = 0 */
    getch();
}
//Приклад 10
#include <stdio.h>
#include <conio.h>

void main() {
    int x = 0, y = 3, z;
    z = (++x > y || y && y > 0);//1)0 в 2)1 через те що 1 та 2 умова = 1
    printf("z=%d\n", z); /* z=1 */
    getch();
}
//Приклад 11
#include <stdio.h>
#include <conio.h>

void main() {
    unsigned int x = 2, y = 1, z = 3, res;
    char chx = 0xAF;
    printf("%u\n", x & y | z);
    x = y = z = 2; /* 3 */
    printf("%u\n", x * y & z);
    x = 3; y = 0; z = 1; /* 2 */
    printf("x^y/~z=%u\n", x ^ y / ~z); /* 65535 */
    printf("3/0^~1=%u\n", x | y ^ ~z); /* 65535 == 11111111 */
    x = 1; y = 2; z = 0;
    printf("1&2/0=%u\n", x & y | z); /* 0 */
    printf("~1^2&0=%u\n", ~x ^ y & z); /* 65534 - 11111110 */
    printf("2|0&1=%u\n", y | z & x); /* 2 */
    printf("2++&~0~1=%u\n", y++ & ~z & ~x); /* 65534 - 11111110 */
    printf("~3/1&++0=%u\n", ~y | x & ++z); /* 65533 = 11111101 */
    x = 0xAF;
    printf("%X\n", x >> 4); /* A */
    chx <<= 7;
    printf("0x=%X\n", chx); /* (FF)80 = 10000000 */
    getch();
}
//Приклад 12
#include <stdio.h>
#include <conio.h>

void main() {
    char x = 255, y = 0177;
    printf("%u\n", x & y);
    x = '(';
    y = 017;
    printf("%u\n", x & ~y);
    y = 127;
    printf("%u\n", x & y);
    y = 128;
    printf("%u\n", x | y);
}

