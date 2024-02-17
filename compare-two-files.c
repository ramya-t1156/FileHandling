#include<stdio.h>
#include<stdlib.h>

int compareFiles(FILE *f1,FILE *f2){
	char ch1,ch2;
	while((ch1=fgetc(f1))!=EOF&&(ch2=fgetc(f2))!=EOF){
		 if(ch1!=ch2){
		 	return 0;
		 }
	}
	if(ch1==EOF&&ch2==EOF){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	FILE *f1,*f2;
	f1=fopen("for-read.txt","r");
	f2=fopen("for-read2.txt","r");
	if(f1==NULL||f2==NULL){
		printf("Error opening files\n");
		return 1;
	}
	if(compareFiles(f1,f2)){
		printf("Files are identical\n");
	}
	else{
		printf("Files are different\n");
	}
	fclose(f1);
	fclose(f2);
	return 0;
}
