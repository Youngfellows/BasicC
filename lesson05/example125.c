#include<stdio.h>

int main()
{
		float x,y;
		int a,b;
		char c1,c2;

		printf("请输入:\n");
		scanf("%d %d",&a,&b);
		scanf("%f %e",&x,&y);
		scanf("%c%c",&c1,&c2);
		printf("a=%d,b=%d,x=%f,y=%f,c1=%c,c2=%c\n",a,b,x,y,c1,c2);

		return 0;
}
