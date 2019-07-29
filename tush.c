#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int p,l,m;
	char check[4], name[20], pass[20], regc[9] = "register", y[4] = "yes", yc[4] , ycc[20], pc[20];
	printf("want to register or login");
	scanf("%s", &check);
	p = strcmp(regc,check);
if (p == 0)
{
	printf("enter name");
	scanf("%s", &name);
	printf("enter password");
	scanf("%s", &pass);
	printf("registration sucessfull want to login");
	scanf("%s", &yc);
	if (yc == 0) 
	{
            printf("enter username");
            scanf("%s", &ycc);
            printf("enter password");
            scanf("%s", &pc);
            l = strcmp(name , ycc);
            m = strcmp(pass , pc);
            if (l == 0 , m == 0)
            {
            	printf("logged in sucessfully");
            }     
            else
            {
            	printf("wrong password");
            }
	}

}
else 
{

	printf("nikal,pehli fursat me nikal");
	system("pause");
}
return 0;
}
