#include<stdio.h>
void main()
{
	//v0
	char str[]="3+4";
	int a=str[0]-'0';
	int b=str[2]-'0';
	int c=a+b;
	printf("c=%d\n",c);
	//v1
	char xx[]="1+2+2+1+2+5+4-1-3+4-8";
	int d=xx[0]-'0';
	int e=xx[2]-'0';
	int f=xx[4]-'0';
	int g=xx[6]-'0';
	int h=xx[8]-'0';
	int w=xx[10]-'0';
	int j=xx[12]-'0';
	int k=xx[14]-'0';
	int m=xx[16]-'0';
	int n=xx[18]-'0';
	int o=xx[20]-'0';
	int p=d+e+f+g+h+w+j-k-m+n-o;
	printf("p=%d\n",p);
	//v2
	char nn[]="2*2/4*1/1*2*3/2";
	int jg=nn[0]-'0';
	for(int i=0;i<15;i++)
	{
		if(nn[i]=='*')
		{
			int q=nn[i+1]-'0';
			jg=jg+q;
			i++;
		}
	}
	printf("jg=%d\n",jg);

	//v3
	char cx[]="2+2*3+2/2-1";
	int r=cx[0]-'0';
	int s=cx[2]-'0';
	int t=cx[4]-'0';
	int u=cx[6]-'0';
	int v=cx[8]-'0';
	int ww=cx[10]-'0';
	int x=s*t;
	int y=u/v;
	int z=r+x+y-ww;
	printf("z=%d",z);



}