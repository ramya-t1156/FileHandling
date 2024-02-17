#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	FILE *fp;
	fp=fopen("for-read.txt","r");
	char content[100];
	if(fp!=NULL){
		while(fgets(content,100,fp)){
				printf("%s",content);
		}
	}
	else{
		printf("File open Unsucessful");
	}
	fclose(fp);	  	
}

