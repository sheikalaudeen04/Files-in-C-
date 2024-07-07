#include<stdio.h>
#include<string.h>
int main(){
	FILE *ptr;
	char a[1000],temp;
	int i,j,len;
	ptr=fopen("d:/Reverse.txt","r+");
	i=0;
	j=0;
	do{
		a[j]=fgetc(ptr);
	}
	while(a[j++]!=EOF);
	len=j;
	j=j-1;
	while(i<j){
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i+=1;
		j-=1;
	}
	fseek(ptr,0,0);
	fprintf(ptr,"%s",a);
	fclose(ptr);
	printf("The content of the file is reversed.");
	return 0;
}
