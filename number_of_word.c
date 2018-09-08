#include <stdio.h>
#include <conio.h>
#include <ctype.h>
void main()
{
	FILE *fp;
	char ch;
	int word=1;
	clrscr();
	fp=fopen("INPUT","w");
	printf("\nEnter text: ");
	while((ch=getchar())!=EOF)
		putc(ch,fp);
	fclose(fp);
	fp=fopen("INPUT","r");
	while((ch=getc(fp))!=EOF)
	{
		if(isspace(ch)||ch=='\t'||ch=='\n')
			word++;
		putchar(ch);
	}
	fclose(fp);
	printf("\n\nNumber of words: %d",word);
getch();
}