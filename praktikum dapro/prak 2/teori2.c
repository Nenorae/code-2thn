#include <stdio.h>

int x,y,z;
int main(int argc, char const *argv[])
{
    x=(2+3)-10*2;
    y=(2+3)-(10*2);
    z=10 % 3 * 2 + 1;
    
    printf("x adalah %d \n",x);
    printf("y adalah %d \n",y);
    printf("z adalah %d \n",z);
    return 0;
}
