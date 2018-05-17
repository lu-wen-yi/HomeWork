#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	int MathGrade,EnglishGrade,AverageValue;
int main(int argc, char *argv[]) {

	printf("MathGrade=");/*印出提示字元讓使用者輸入數學成績*/
	scanf("%d",&MathGrade);/*輸入數學成績*/
	printf("EnglishGrade=");/*印出提示字元讓使用者輸入英文成績*/
	scanf("%d",&EnglishGrade);/*輸入英文成績*/
	AverageValue=(MathGrade+EnglishGrade)/2;/*計算平均成績*/
	printf("AverageValue=%d",AverageValue);/*印出平均成績*/
	
}
