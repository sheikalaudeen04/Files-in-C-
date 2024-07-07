#include<stdio.h>
int main(){
	FILE *Fptr;
	int a;
	Fptr=fopen("AIDS.txt","r");
	fscanf(Fptr,"%d",&a);
	printf("%d",a);
	fclose(Fptr);
}
