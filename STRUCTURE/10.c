#include<stdio.h>
#include<stdio.h>
#define SIZE 50

struct Employee {
   char name[30];
   int id;
   int dob;
   int bs;
};

void main() {
   int i, j, max, count, total, n, a[SIZE], ni;
   struct Employee em[SIZE];
  // clrscr();

   printf("Enter how many employees: ");
   scanf("%d", &n);

   /* for loop to read the names and roll numbers*/
   for (i = 0; i < n; i++) {
      printf("\nEnter name and id and dob and salary %d : ", i);
      scanf("%s", &em[i].name);
      scanf("%d", &em[i].id);
      scanf("%d",&em[i].dob);
      scanf("%d",&em[i].bs);
   }
   max=0;
for (i=0;i<n;i++)
{
	if (em[i].bs<em[i+1].bs)
		max=i;
}
printf("Max salary is got by\n %s %d %d %d",em[max].name,em[max].id);
}
