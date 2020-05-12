#include<stdio.h>
int main()
{
	int pray;
	int anne;
	for(anne=2;anne<=100;anne++)
	{
		for(pray=2;pray<=anne;pray++)
		{
			if(anne%pray == 0)
			{
				if(anne == pray)
				{ 
					printf("%d\n",pray);
				}
			}
		
		}
	}
return 0;	
}
