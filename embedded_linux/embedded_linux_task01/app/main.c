#include "add.h"
#include "sub.h"
#include "mult.h"
#include "div.h"
#include "stdio.h"

int main()
{

int r1,r2,r3 ;
float r4 ;
r1=add(6,2);
r2=sub(6,2);
r3=mult(6,2);
r4=div(6,2);

printf("%d \n %d \n %d \n %f \n",r1,r2,r3,r4);

return 0 ;
}
