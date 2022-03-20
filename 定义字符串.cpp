/*#include<stdio.h>
void main()
{
	char a[]="in";
	char b[]="chinese is very simple in china";
	char *p1,*p2;
	int count;
	int j;
	p1=a;
	p2=b;
	for(j=0;b[j]!=0;j++)
	{
		if(*p1!=*p2)
			p2++;
		else
		{
			p1++;
			p2++;
		}
	}
		if(*p1=='\0')
		{
			count++;
			p1=a;
		}
		printf("出现了%d次"，count);

}*/



#include<stdio.h>
#include"string.h"
#define chang 100
int main()
{
	char a[chang];
	gets(a);
	int in=0;
	for(int i=0;i<strlen(a);i++)
	{
		if((a[i]=='i'||'I')&&a[i+1]=='n')
		{
			in++;
		}
	}
	printf("%d",in);
	return 0;
}

