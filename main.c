#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	int MathGrade,EnglishGrade,AverageValue;
int main(int argc, char *argv[]) {

	printf("MathGrade=");/*�L�X���ܦr�����ϥΪ̿�J�ƾǦ��Z*/
	scanf("%d",&MathGrade);/*��J�ƾǦ��Z*/
	printf("EnglishGrade=");/*�L�X���ܦr�����ϥΪ̿�J�^�妨�Z*/
	scanf("%d",&EnglishGrade);/*��J�^�妨�Z*/
	AverageValue=(MathGrade+EnglishGrade)/2;/*�p�⥭�����Z*/
	printf("AverageValue=%d",AverageValue);/*�L�X�������Z*/
	
}
