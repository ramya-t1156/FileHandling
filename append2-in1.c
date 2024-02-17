#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *f1,*f2,*f3;
	f1=fopen("for-read.txt","r");
	f2=fopen("for-read2.txt","r");
	f3=fopen("for-append2.txt","a");
	char c;
	if(f1==NULL||f2==NULL||f3==NULL){
		printf("Could not open files");
		exit(0);
	}
	while((c=fgetc(f1)!=EOF)){
		fputc(c,f3);
	}
	while((c=fgetc(f2)!=EOF)){
		fputc(c,f3);
	}
	printf("Files merged successfully!!");
	fclose(f1);
	fclose(f2);
	fclose(f3);
	return 0;
}
