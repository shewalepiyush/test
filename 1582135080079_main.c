#include<stdio.h>
#include<stdlib.h>
void write_data(char *name)
{
	FILE *stream=fopen("file.txt","w");
	if(stream!=NULL)
	{

		while(*name!='\0')
		{
			fputc(*name,stream);
			name++;
		}
		fclose(stream);
	}

	else
	printf("File IO error\n");

}
void read_data(char *name)
{
	int i=0;
	FILE *stream= fopen("file.txt","r");
	if(stream!=NULL)
	{
		for(i=0;i<14;i++)
			name[i]=fgetc(stream);
		fclose(stream);
	}
	else
		printf("file IO error\n");
}
int main(void)
{
	char name[]="Piyush Shewale";
	char name2[15]={};
	write_data(name);
	read_data(name2);
	printf("%s",name2);
	return 0;
}
