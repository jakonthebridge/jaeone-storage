#include <stdio.h>
#include<string.h>
int main()
{
	char d='.';
	char l='_';
	char *jak;
	char *jam= "ab";
	printf("ª: .\n��:_\n\n"); 
	printf("%c%c\n",d,l);
	printf("%c%c%c%c\n",l,d,d,d);
	printf("%c%c%c%c\n",l,d,l,d);
	printf("%c%c\n",l,d,d);
	printf("%c\n",d);
	printf("%c%c%c%c\n",d,d,l,d);
	printf("%c%c%c\n",l,l,d);
	printf("%c%c%c%c\n",d,d,d,d);
	printf("%c%c\n",d,d);
	printf("%c%c%c%c\n",d,l,l,l);
	printf("%c%c%c\n",l,d,l);
	printf("%c%c%c%c\n",d,l,d,d);
	printf("%c%c\n",l,l);
	printf("%c%c\n",l,d);
	printf("%c%c%c\n",l,l,l);
	printf("%c%c%c%c\n",d,l,l,d);
	printf("%c%c%c%c\n",l,l,d,l);
	printf("%c%c%c\n",d,l,d);
	printf("%c%c%c\n",d,d,d);
	printf("%c\n",l);
	printf("%c%c%c\n",d,d,l);
	printf("%c%c%c%c\n",d,d,d,l);
	printf("%c%c%c\n",d,l,l);
	printf("%c%c%c%c\n",l,d,d,l);
	printf("%c%c%c%c\n",l,d,l,l);
	printf("%c%c%c%c\n",l,l,d,d);
	printf("��ȣ�Է�\n");
	scanf("%s\n",&jak);
	int ret =strcmp( jak, jam );
	if(!ret)
	{
		printf("��!");
	}

	
	
	
	
	
	
	
}



