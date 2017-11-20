#include<cstdio>
using namespace std;
int o[5];
char n[][10]={"&#34;", "&#60;", "&#62;", "&#38;", };
int main()
{
	freopen("in.txt", "r", stdin);
	freopen("out.html", "w", stdout);
	puts("<pre>");
	int t, i;
	o[0]='"';
	o[1]='<';
	o[2]='>';
	o[3]='&';
	while((t=getchar())!=EOF)
	{
		for(i=0; i<4; i++)
		{
			if(t==o[i])
			{
				printf("%s", n[i]);
				break;
			}
		}
		if(i==4)
		{
			putchar(t);
		}
	}
	puts("</pre>");
	return 0;
}
