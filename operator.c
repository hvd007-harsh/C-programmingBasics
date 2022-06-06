#include <stdio.h>

int main(void)
{
    int x=3,y=2, z=1;
    int r1 = x>y;
    int r2 =x<y;
    int r3 = y>z;       //TRUE
    int r4 = y>=z;      //FALSE
    int r5 = x!= y;
    int r6 = x==y;
        int a = y>=z;      //FALSE
    int b = x!= y;
    int c = r6;
    int d= r5;
    int r7 = a && b;
    int r8 = a||b;
    int r9 = c||d;
    int r10= c&&d;
    int r11= !d;
    printf("%d\n",r1);
    printf("%d\n",r2);
    printf("%d\n",r3);
    printf("%d\n",r4);
    printf("%d\n",r5);
    printf("%d\n",r6);
    printf("%d\n",r7);
    printf("%d\n",r8);
    printf("%d\n",r9);
    printf("%d\n",r10);
    printf("%d\n",r11);
    return 0;
}
