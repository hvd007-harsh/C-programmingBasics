
#include <stdio.h>
void odd(int arr[]);
int main()
{
    int number[10]= {2, 98, 99, 27, 31, 53, 88, 92, 11, 12};
    odd(number);
}
void odd(int arr[])
{
    for(int i=0; i<=10; i++)
    {
        if(arr[i]%2!=0)
        {
            printf("The values are:%d\n",arr[i]);
        }
    }
}
