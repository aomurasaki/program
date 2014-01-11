#include <stdio.h>

int main ()
{
	char s[100];
	
	puts("input plz");
	fgets(s,100,stdin);

	for(int i; i < 100; i++)
	{
		if(s[i] == " ") s[i] = i++;
		printf(s);	
	}
	

	return 0;

} 
