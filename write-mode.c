#include<stdio.h>

int main(){
	FILE *file;
	file=fopen("for-write.txt","w");
	char content[100];
	if(file==NULL){
		printf("File could not be opened\n");
		return 1;
	}
	printf("Enter the content(max 99 words) : ");
	scanf("%s",content);
	fprintf(file,"%s",content);
	printf("Content successfully written to the file\n");
	fclose(file);
	return 0;
}
