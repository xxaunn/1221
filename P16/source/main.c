#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define ENTER 13
#define MAX 80

int main() {
	FILE *fptr;
	char str[MAX], ch;
	int i = 0;

	fptr = fopen("output.txt", "a");
	printf("�п�J�r��A��ENTER������J�G\n");
	while ((ch = getch()) != ENTER) {
		str[i++] = ch;
	}
	putc('\n', fptr);
	fwrite(str, sizeof(char), i, fptr);
	fclose(fptr);
	printf("�ɮת��[����!!\n");
	system("pause");
}