#include <stdio.h>

//Source rohit30

main()

{

int i, j, x = 0; 

for (i = 0; i < 5; ++i) 

  for (j= 0; j < i; ++j) { 

printf("i = %d\n", i);
printf("j = %d\n", j);
x += (i + j -1); 
printf("x = %d\n\n", x);
 } 
printf("\nx2 = %d", x);




return 0;

}