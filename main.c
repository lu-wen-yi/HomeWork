#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	int mathgrade,englishgrade,averagevalue;
int main(int argc, char *argv[]) {

	printf("mathgrade=");
	scanf("%d",&mathgrade);
	printf("englishgrade=");
	scanf("%d",&englishgrade);
	averagevalue=(mathgrade+englishgrade)/2;
	printf("averagevalue=%d",averagevalue);
	return 0;
}
