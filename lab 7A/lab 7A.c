//Приклад 1
#include <stdio.h>
int main() {
    printf("Числа типу int займають %d байт. \n", sizeof(int));
    printf("Числа типу char займають %0 байт. \n", sizeof(char));
    printf("Числа типу float займають %d байт.\n", sizeof(float));
    printf("Числа типу double займають %d байт.\n", sizeof(double));
    return 0;
}
//Приклад 2
#include <stdio.h>
int main() {
    int n = 1;
    printf("n=%d \n", n);
    // Префіксне інкрементування (++п)
    printf("prefix: ++n=%d\n", ++n);
    // Постфіксне інкрементування (п++)
    printf("postfix: n++=%d\n", n++);
    // Після постфіксного інкрементування (перевірка значення п)
    printf("after-postfix: n=%d\n", n);
    // Префіксне декрементування (--п)
    printf("prefix: --n=%d\n", --n);
    // Постфіксне декрементування (п--)
    printf("postfix: n--=%d\n", n--);
    // Після постфіксного декрементування (перевірка значення п)
    printf("after-postfix: n=%d\n", n);
    return 0;
}
//Приклад 3
#include <stdio.h>
int main() {
    int n = 1, m= 1, res1, res2;
    res1= m + --n;
    res2 = m++ - (++n);
    printf("res1=%d\n", res1);
    printf("res2=%d\n", res2);
    return 0;
}
//Приклад 4
#include <stdio.h>
int main() {
    int a, b = 3;
    float c;
    c = b % 2 + (a= ++b/2) + 1.1;
    printf("a=%d, c=%4.1f\n", a, c);
    return 0;
}
//Приклад 5
#include <stdio.h>
int main() {
    int x = 2 , z;
    float y = 2.1;
    z = x++ * y + y/ x *3;
    printf("x=%d z=%d\n", x, z);
    return 0;
}
//Приклад 6
#include <stdio.h>
int main() {
    float x = 1.1, y = 0, z;
    int a;
    z = (a = x++) * y + 3* x;
    printf("z=%4.1f\n", z);
    return 0;
}

