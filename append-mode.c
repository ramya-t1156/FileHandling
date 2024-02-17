#include<stdio.h>
#include<string.h>

int main(){
	FILE *file;
	file=fopen("for-append.txt","a");
	if(file==NULL){
		printf("Error opening file\n");
		return 0;
	}
	char content[100];
	printf("Enter a content to be append : ");
	scanf("%s",content);
	fprintf(file,"%s",content);
	printf("Content Append Successfully!!");
	fclose(file);
	return 0;	
}
