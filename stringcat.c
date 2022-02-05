#include<stdio.h>
#include<string.h>
int main()
{
	char a[10],b[20];
	printf("enter string 1");
	gets(a);
	printf("enter string 2");
	gets(b);
	strcat(a,b);
	printf("%s",a,b);
	return 0;
}
