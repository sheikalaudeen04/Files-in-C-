#include<stdio.h>
int main(){
	FILE *Fptr;
	char ch;
	//char a[100];
	Fptr=fopen("AIDS.txt","r");
	//fscanf(Fptr,"%s",&a);
	//printf("%s",a);
	//fgets(a,1000,Fptr);
	//printf("%s",a);
	printf("Contents of the file:\n");
    while((ch=fgetc(Fptr))!=EOF){
        printf("%c",ch);
    }
	fclose(Fptr);
}
