#include <stdio.h>


int main()
{	
	int i = 0;
	int j = 0;
	
	printf("<!DOCTYPE html>\n");
	printf("<html>\n");
	printf("  <head>\n");
	printf("    <meta charset='UTF-8'>\n");
	printf("    <title>9x9</title>\n");
	printf("  </head>\n");
	printf("  <body>\n");
	printf("  <table>\n");
	for(i = 0 ;i < 9; i++)
	{
		printf("  <tr>\n");
		for(j = 0; j < 9; j++)
		{			
			printf("         %d\n",(i+1)*(j+1));
		}
		printf("  </tr>\n");
	}
	printf("  </table>\n");
	printf(" </body>\n");
	printf("</html>\n");
	return 0;
}