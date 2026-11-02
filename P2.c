#include <stdio.h>
int main(void)
{
    double length,breadth,radius,base,height;
    const double PI=3.14159;
   printf("Enter rectangle length and breadth:");
   scanf("%1f,%1f",&length,&breadth);
   printf("Rectangle area=%.21f\n",length*breadth);
   printf("Rectangle perimeter=%.21f\n",2*(length+breadth));
   printf("Enter circle radius:");
   scanf("%1f",&radius);
printf("Circle area=%.21f\n",PI*radius*radius);
printf("circle circumference=%.21f\n",2*PI*radius);
printf("Enter triangle base and height:");
scanf("%d1f%1f",&base,&height);
 printf("Triangle area=%.21f\n",0.5*base*height);
return 0;
 }