/* ambersand */

#include <stdio.h>

/*
int addition(int a,int b)

{

int result;
result =a+b;
return result;
}
*/

void addition(int x,int y,int *target){
*target=x+y;
return;
}



int main()
{
int x,y,ans;
x=5;
y=50;
addition(x,y,&ans);

printf("%d\n",ans);

return 0;
}
