#include<stdio.h>
#include<unistd.h>


int main(){
    char Name[30];
    char Section,Grade;
    int Standard,math,hindi,English,Social,Science;
    int Total;


    printf("Enter the Name\n Student name:");
    scanf("%[^\n]%*c",Name);

    printf("Enter the Section\n Section:");
    scanf("%c",&Section);

    getchar()!="\n";

    printf("Enter the Standard\n Standard:");
    scanf("%d",&Standard);

    puts("Enter the marks of Math\n");
    scanf("%d",&math);

    puts("Enter the marks of hindi\n");
    scanf("%d",&hindi);

    puts("Enter the marks of English\n");
    scanf("%d",&English);

    puts("Enter the marks of Social\n");
    scanf("%d",&Social);

    puts("Enter the marks of Science\n");
    scanf("%d",&Science);

    Total = math + hindi + English + Social + Science;
    if( Total>=450 && Total <= 500){
        Grade = 'A';
    }
    else if(Total>=400 && Total <= 449){
        Grade ='B';
    }
    else if(Total>=350 && Total <= 399){
        Grade ='C';
    }
    else if(Total>=300 && Total <= 349){
        Grade ='D';
    }
    else if(Total>=200 && Total <= 299){
        Grade ='E';
    }
    else if(Total>=0 && Total <= 200){
            Grade ='F';
    }
    else{
        printf("The data you made is incorrect because it exceed more than 500 marks\n");
        return 0;
    }
    usleep(10000);
    printf("\n\n\n\n\n\n\n\n");

    puts("\tJawahar \tNavodaya\t Vidyalaya");

    puts("\t\tAnnual Report Card");

    printf("Student Name: %s\n",Name);

    printf("Section: %c\n",Section);

    printf("Standard: %d\n",Standard);

    puts("Marks Secured out of 100\n");
    usleep(3000);
    printf("\n Math: %d \n",math);

    printf("\n Hindi: %d \n",hindi);

    printf("\n English: %d \n",English);

    printf("\n Social: %d \n",Social);

    printf("\n Science: %d \n",Science);

    printf("\n Total marks secured: %d \n",Total);

    printf("\n Grade: %c\n",Grade);

return 0;
}
