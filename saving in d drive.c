#include<stdio.h>
int main(){
	FILE *a;
	char b[100];
	a=fopen("d:/Aids.txt","r");
	//fscanf(a,"%s",b);
	//fgets(b,100,a);
	b=fgetc(a);
	printf("%s",b);
	//fprintf(a,"Hola worldo\nCount word");
	fclose(a);
}//write a program to count no of words present in your file
