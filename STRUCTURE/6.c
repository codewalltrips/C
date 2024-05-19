#include<stdio.h>
struct Student
       {
              int Roll;
              char Name[25];
              int Marks[3];//Statement 1 : array of marks
              int Total;
              float Avg;
       };

       void main()
       {
              int i;
              struct Student S;

              printf("\n\nEnter Student Roll : ");
              scanf("%d",&S.Roll);

              printf("\n\nEnter Student Name : ");
              scanf("%s",&S.Name);

              S.Total = 0;

              for(i=0;i<3;i++)
              {
                     printf("\n\nEnter Marks %d : ",i+1);
                     scanf("%d",&S.Marks[i]);

                     S.Total = S.Total + S.Marks[i];
              }

              S.Avg = S.Total / 3;

              printf("\nRoll : %d",S.Roll);
              printf("\nName : %s",S.Name);
              printf("\nTotal : %d",S.Total);
              printf("\nAverage : %f",S.Avg);
       }

