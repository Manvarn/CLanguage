//pointer 4
#include<stdio.h>
int main()
{
	FILE *fp;
	//fp=fopen("Desktop/lab/skill.txt","w+");
	fp=fopen("skill.txt","w+");
	fprintf(fp,"ok ok welcome to skill qode the programming lab\n");
	fputs("you are entering to learn c language now...\n",fp);
	fclose(fp);
}

/*
r- opens a text file in read mode.
w- opens a text file in write mode.
a- opens a text file in append mode.
*/