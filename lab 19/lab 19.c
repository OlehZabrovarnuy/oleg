//Приклад 1
#include <stdio.h>
int main() {
	FILE *in;
	int ch;

	if ((in = fopen("C:\\Users\\Олег\\Desktop\\Мотиваційний\\text.txt", "r")) != NULL) { 
		while ((ch = getc(in)) != EOF) {
			putc(ch, stdout);
		}	
		fclose(in);
	} else {
		printf("FILE test NOT OPEN\n");
	}
	return 0;
}
//Приклад 2
#include <stdio.h>
int main() {
    FILE *ff;
int base;
    ff = fopen("E://sam.txt", "r"); 
    fscanf(ff, "%d", &base); 
    fclose(ff);
    ff = fopen("E://data.txt", "a"); 
    fprintf(ff, "sam is %d.\n", base); 
    fclose(ff);
    return 0;
}
//Приклад 3
#include <stdio.h>
#define LINE 80
int main() {
    FILE *ff;
    char string[LINE];
    ff = fopen("E://opus.txt", "r");
    if (ff == NULL) {
        perror("ERROR OPEN FILE");
        return 1;
    }   
    while (fgets(string, LINE, ff) != NULL) { puts(string);
    }
    fclose(ff);
    return 0;
}
//Приклад 4
#include <stdlib.h>
#include <stdio.h>
int main() {
    int f1, f2, f3, f4, f5;
    FILE *fp;
    fp = fopen("E:\\text.txt", "r");
        if (fp == NULL) {
        perror("ERROR OPEN FILE");
        return 1;
    }
    if (fscanf(fp, "%d%d%d%d%d", &f1, &f2, &f3, &f4, &f5) != 5)
        fprintf(stderr, "ERROR READ FILE\n");
        fclose(fp);
        return 1;
    printf("The values are %d,%d,%d,%d, %d.\n", f1, f2, f3, f4, f5); fclose(fp);
    return 0;
}
//Приклад 5
#include <stdio.h>
int main() {
    FILE *pf;
    int n, nn, l;
    if ((pf = fopen("E://proba.txt", "r")) == NULL){
        perror("proba.txt");
        return 1;
    }
    for (l = 0; l <= 5; l++) {
        fscanf(pf, "%d %d\n", &n, &nn);
        printf("chuslo: %d, kyb: %d\n", n, nn);
    }
    fclose(pf);
    return 0;
}
//Приклад 6
#include <stdio.h>
#define SIZE 11
int main() {
    int num1 = 98, num2 = 11, num3 = 14, num4 99, num5 156, num6 = 74, num7 = 54, num8 = 88, num990, num10 = 100, num11 = 110;
    FILE *file;
    file = fopen("E://numbers.txt", "w");
    if (file == NULL) {
        perror("ERROR OPEN FILE");
        return 1;
    }
    fprintf(file, "%d %d %d %d %d %d %d %d %d %d %d", num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11);
    fclose(file);
    int numbers [SIZE];
    file= fopen("E://numbers.txt", "r");
    if (file == NULL) {
        perror("ERROR OPEN FILE");
        return 1;
    }
    printf("massyv:\n");
    for (int i=0; i < SIZE; i++) {
        fscanf(file, "%d", &numbers[i]);
        printf("%d\n", numbers[i]);
    }
    fclose(file);
    return 0;
}

