#include <stdio.h>
 
 int x=17,y;{
 int*p;
 p = &x;
 printf("El valor de x %d",*p);
 y=*p+3;
 printf ("El valor de y es %d",y);





    return 0;
}