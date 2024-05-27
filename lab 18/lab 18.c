//Приклад 1
#include <stdio.h>
int main(void) {
    struct {
        int a;
        int b;
    } x, y;
    x.a = 10;
    y = x;
    printf("%d", y.a);
    return 0;
}
//Приклад 2
#include <stdio.h>
#include <string.h>
struct student { 
    char name [30]; int age;
    int kurs;
};
int main() {
    struct student stud1;
    printf("Введіть ім'я: ");
    fgets(stud1.name, sizeof(stud1.name), stdin);
    stud1.name[strcspn(stud1.name, "\n")] = '\0';
    printf("Введіть вік: ");
    scanf("%d", &stud1.age);
    printf("Введіть курс: ");
    scanf("%d", &stud1.kurs);
    printf("Студент %s\n", stud1.name);
    printf("Kypc %d\n", stud1.kurs);
    printf("Вік %d\n", stud1.age);
    return 0;
}
//Приклад 3
#include <stdio.h>
struct student {
    char name [30];
    int kurs;
    int age;
};
int main() {
    struct student stud [10];
    int i, n;
    printf("Кількість студентів: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("Введіть ім'я: ");
        scanf("%s", stud[i].name);
        printf("Введіть вік: "); scanf("%d", &stud[i].age);
    printf("Введіть курс: "); scanf("%d", &stud[i].kurs);
}
    for(i = 0; i < n; i++) {
        printf("Студент %s\n", stud[i].name); 
        printf("Курс %d\n", stud[i].kurs); 
        printf("Вік %d\n", stud[i].age);
    }
    return 0;
}
//Приклад 4
#include <stdio.h>
struct zavd {
    char name [50];
    float weight;
    float height;
    int age;
};
int main() {
    struct zavd emp;
    printf("Ім'я працівника: ");
    scanf("%s", emp.name);
    printf("Barа працівника: ");
    scanf("%f", &emp.weight);
    printf("Висота працівника: ");
    scanf("%f", &emp.height);
    printf("Вік працівника: ");
    scanf("%d", &emp.age);
    printf("\nІнформація про працівника %s\n", emp.name);
    printf("----------------------------------------\n");
    printf("Ім'я: %s\n", emp.name);
    printf("Bara: %.2f\n", emp.weight);
    printf("Висота: %.2f\n", emp.height);
    printf("Вік: %d\n", emp.age);
    return 0;
}

