#include<stdio.h>
#include<stdlib.h>

int main() {
	FILE *fptr;
	char ch;
	int count = 0;

	fptr = fopen("Welcome.txt", "r");
	if (fptr != NULL) {
		while ((ch = fgetc(fptr)) != EOF) {
			printf("%c", ch);
			count++;
		}
		fclose(fptr);
		printf("\n�`�@��%d�Ӧr��", count);
	}
	else {
		printf("�ɮ׶}�ҥ���!!\n");
		exit(1);
	}
}