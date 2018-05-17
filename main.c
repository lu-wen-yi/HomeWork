#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	int MathGrade,EnglishGrade,AverageValue;
int main(int argc, char *argv[]) {

	printf("MathGrade=");
	scanf("%d",&MathGrade);
	printf("EnglishGrade=");
	scanf("%d",&EnglishGrade);
	AverageValue=(MathGrade+EnglishGrade)/2;
	printf("AverageValue=%d",AverageValue);

}
