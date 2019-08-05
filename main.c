#include <stdio.h>

int add( int x, int y)
{
    return x + y;
}
int main()
{
    int a = 2;
    int b = 3;

    //use add 
    //这是调用add
    int d = add(a,b);
    printf("hello\n");

    return 0;
}

