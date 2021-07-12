#include<stdio.h>
void main()
{
	char s[20];
	printf("limit 20 char\n");
	scanf("%s",s)
		printf("%s\n",s);//before
	int len=strlen(s)-1;
		fz(s,len);
		printf("%s\n",s);//after
}
//second mofify 16:49
void fz(char a[],int len){
	int left=0;
	int right=len;
	while(left<=right){
        char tmp =a[left];
	a[left]=a[right];
	a[right]=tmp;
	left++;
	right++;
	}
}
