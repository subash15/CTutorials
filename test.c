 #include <stdio.h>
 #include <stdlib.h>
#include <ctype.h>


int main() {

int i = 0 ;
char  name[6];

for ( i = 0; i < 5 ; i++)
{
	printf("Enter the first character of the array \n" , i+1);
	scanf(" %c" , &name[i]);
}
name[i] = '\0';

printf("%s", name);

return 0;	
}

