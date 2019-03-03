
#include <stdio.h>
#include <stdlib.h>
/** main - adds
 *
 *@argc : count
 *@argv : vec
 *
 *
 * return : 0
 */
int main(int argc, char *argv[])
{
int a = 0;
int i, j;

if (argc > 1)
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
if (argv[i][j] < '0' || argv[i][j] > '9')
return (printf("Error\n"), 1);
a += atoi(argv[i]);
}
printf("%i\n", a);
return (0);
}
