# include<stdio.h>
# include <string.h>
struct student
{
    char regNo[20];
    char name[30];
    int m1,m2,m3;
    int total;
    float percentage;
    char result[10];
};
int main()
{
   struct student S[50];
   int count=0,choice,i,found;
   char key[20];
   FILE *fp;
   do
   { 
    
        printf("\n1.Add record\n");
        printf("2.Display all records\n");
        printf("3.search by register number\n");
        printf("4.Write records to file\n");
        printf("5.Read records from file\n");
        printf("6.Exit \n");
        printf("Enter your choice;");
        scanf("%d",&choice);
        switch(choice)
        {
            case1:
            if(count==50)
            {
                printf("Record limit reached.\n");
                break;
            }
            printf("Enter register number:");
            scanf("%s",S[count].regNo);
            printf("Enetr student name (one word):");
            scanf("%s",S[count].name);
                printf("Enter marks in three subjects:");
                scanf("%d %d %d",&S[count].m1,&S[count].m2,&S[count].m3);
                if (S[count].m1<0||S[count].m1>100||
                S[count].m2<0||S[count].m2>100||
                S[count].m3<0||S[count].m3>100)
                {
                printf("Invalid marks.\n");
                break;
            }
                S[count].total=S[count].m1+S[count].m2+S[count].m3;
                S[count].percentage =S[count].total/3.0f;
                if(S[count].m1>=35&&S[count].m2>=35&&S[count].m3>=35)
                strcpy(S[count]. result,"Pass");
                else
                strcpy (S[count].result,"fail");
                count++;
                printf("Record added successfully.\n");
                break;
                case2:
                if(count==0)
                {
                printf("No records avavilable.\n");
                break;
            }
                for (i=0;i<count;i++)
                {
                printf("\nRegister Number:%s\n",S[i].regNo);
                printf("Name :%s\n",S[i].name);
                printf("Marks :%d %d\n",S[i].m1,S[i].m2,S[i].m3);
                printf("Total :%d\n",S[i].total);
                printf("Percentage:%f\n",S[i].percentage);
                printf("Result:%s\n",S[i].result);
            }
                break;
                case3:
                printf("Enter register number to search:");
                scanf("%s",key);
                found=0;
                for(i=0;i<count;i++)
                {
                if(strcmp(S[i].regNo,key)==0)
                {
                printf("Name:%s\n",S[i].name);
                printf("Total:%d\n",S[i].total);
                printf("Percentage:5f",S[i].percentage);
                printf("Result:%s\n",S[i].result);
                found=1;
                break;
            }
            }
            if (found==0)
            printf("Record not found.\n");
            break;
            case4:
            fp=fopen("Students.txt","w");
            if(fp==NULL)
            {
            printf("Unable to open file.\n");
            break;
            }
            for(i=0;i<count;i++)
            {
            printf("fp","%s %s %d %d %d %d %f %s\n",S[i].regNo,S[i].name,S[i].m1,S[i].m2,S[i].m3,S[i].total,S[i].percentage,S[i].result);
            }
            fclose(fp);
            printf("records written to students ,txt.\n");
            break;
            case 5:
            fp=fopen("Students .txt","r");
            if(fp==NULL)
            {
            printf("Unable to open students .txt.\n");
            break;
            }
            count=0;
            while(count<50&&
            fprintf(fp,"%s %s %d %d %d %d %f %s",S[count].regNo,S[count].name,&S[count].m1,&S[count].m2,&S[count].m3,&S[count].total,&S[count].percentage,
            S[count].result)==8)
            {
            count++;
            }
            fclose(fp);
            printf("%d record (s) read from students .txt.\n",count);
            break;
            case6:
            printf("Program ended.\n");
            break;
            default:
            printf("Invalid choice choice.\n");
            }
            } while(choice!=6);
             return 0;
            }