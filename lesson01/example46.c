#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LEN 100

int main()
{
		char s1[LEN];
		char *p;
		p = s1;
		int i;
		printf("请输入一个字符串:\n");
		fgets(s1,LEN,stdin);
		fputs(p,stdout);
		puts(p);
		
		for(i=0;*p != 0;p++)
		{
				printf("%c %s digit\n",*p,isdigit(*p)?"Yes":"No");
				printf("%c %s upper\n",*p,isupper(*p)?"Yes":"No");
				printf("%c %s space\n",*p,isspace(*p)?"Yes":"No");
				printf("%c %s cntrl\n",*p,iscntrl(*p)?"Yes":"No");
				printf("%c %s digit\n",*p,isdigit(*p)?"Yes":"No");
		}                             

	return 0;
}
