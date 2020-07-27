#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
char *dynamic_var;

dynamic_var = malloc( 200 * sizeof(char) );

if( dynamic_var== NULL )
{
printf("Couldn't able to allocate requested memory\n");
}
else
{
strcpy( dynamic_var,"Dynamically allocated string.");
}
printf("%s\n", dynamic_var );

free(dynamic_var);

return 0;
}
