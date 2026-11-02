# include <stdio.h>
int main(void)
{
    float marks[5],total=0.0f,percentage;
    int i,failed=0;
    printf("Enter marks in five subjects (each out of 100):\n");
    for(i=0;i<5;i++)
    {
        printf("Subjects %d:",i+1);
        scanf("%f",&marks[i]);
        total=total+marks[i];
        if(marks[i]<35)
        failed=1;
    }
    percentage=total/5.0f;
    printf("Total =%.2f/500\n",total);
    printf("Percentage =%.2f%%\n",percentage);
    if(failed)
    printf("Result=fail\n");
    else if(percentage>=75)
        printf("Result=Distinction\n");
        else if(percentage>=60)
        printf("Result=First clas\n");
        else if(percentage>=50)
        printf("Result=second class\n");
        else
        printf("Result=Pass class\n");
        return 0;
}