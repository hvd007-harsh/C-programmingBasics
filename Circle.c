#include <stdio.h>
#include <unistd.h>

//Area of circle
int main(){
    const float PI =3.14;
    int s =1000000;
    float radius,Area;
    printf("**************************************\n\n\t*****WELCOME*****\n\n**************************************\n");
    printf("*********** AREA OF CIRCLE *********** \t");
    usleep(s);
    printf("\n\nEnter the value of radius and enter the circle and suggest now\n\n");
    usleep(s);
    scanf("%f",&radius);
    usleep(s);
    Area = radius * radius * PI;
    usleep(s);
    printf("\n\nThe area of circle is defined as the %.2f \n\n",Area);
    printf("**************************************\n\n\t*****HAPPY ENDING*****\n\n**************************************\n");
    return 0;
}

