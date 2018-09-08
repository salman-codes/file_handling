#include <stdio.h>
#include <conio.h>
void main(int argc, char *argv[])
{
	FILE *fpt,*fpt1;
	int c;
	if(argc<2)
	{
		printf("\nError\nusage");
		printf("\n<command> SourceFile TargetFile");
		return;
	}
	fpt=fopen(argv[1],"r");
	if(fpt==NULL)
	{
		printf("File '%s' does not exist",argv[1]);
		return;
	}
	fpt1=fopen(argv[2],"w");
	while((c=getc(fpt))!=eof(fpt))
		putc(toupper(c),fpt1);
	printf("\nFile Successfully copied !!!!!!");
	fclose(fpt);
	fclose(fpt);
}