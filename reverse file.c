#include<stdio.h>
#include<string.h>
int main(){
	char a,s[1000];
	FILE *fptr;
	fptr=fopen("d:/Aids.txt","r+");
	int i=0;
	a=fgetc(fptr);
	while(a!=EOF){
		s[i++]=a;
		a=fgetc(fptr);
	}
	s[i]='\0';
	strrev(s);
	fseek(fptr,0,0);
	fprintf(fptr,"%s",s);
	fclose(fptr);
	printf("The content is reversed.");
	
}
