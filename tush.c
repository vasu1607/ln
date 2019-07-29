#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int x;
	char h[4], n[20], p[20], a[4] = "yes";
	printf("want to register");
	scanf("%s", &h);
	x = strcmp(a,h);
if (x == 0)
{
	printf("enter name");
	scanf("%s", &n);
	printf("enter password");
	scanf("%s", &p);

}
else 
{

	printf("nikal,pehli fursat me nikal");
	system("pause");
}
return 0;
}