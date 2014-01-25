#include <stdio.h>


int main()
{	
	int i = 0;
	int j = 0;

	for(i = 0 ;i < 9; i++)
	{
		for(j = 0; j < 9; j++)
		{
			printf("%d\n",(i+1)*(j+1));
		}
	}
}