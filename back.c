#include<stdio.h>
#include<string.h>
void back(const char *sc,char *lst)
{
	int ni=0;
	int len=strlen(sc);

	for(ni=0;ni<len;ni++)
	{
        lst[len-ni-1]=sc[ni];
	}
	lst[len]=0;
}


int main()
{
	char sc[20],lst[20];
	scanf("%s",sc);
	back(sc,lst);
	printf("%s\n",sc);
	printf("%s\n",lst);
	return 0;
}
