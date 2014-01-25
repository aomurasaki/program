#include <stdio.h>

int main ()
{
	char c[100];
	

	while((fgets(c,100,stdin)) != EOF)
	{
		if(isspace(c))
		{
			printf("%s",c);
		}
	}

	return 0;

} 