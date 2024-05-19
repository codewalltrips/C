#include<stdio.h>

struct Book
{
	int id;
	char bkname[50],auname[50];
}

main()
{
struct Book id,bn,an,id1,id2,ba;
printf("1st Enter the id & names\n");
scanf("%d%s%s",&id.id,&bn.bkname,&bn.auname);
printf("2nd Enter the id & names\n");
scanf("%d%s%s",&id1.id,&an.bkname,&an.auname);
printf("3rd Enter the id & names\n");
scanf("%d%s%s",&id2.id,&ba.bkname,&ba.auname);
printf("after displaying\n");
printf("Roll=%d BKName=%s AUName=%s\n",id.id,bn.bkname,bn.auname);
printf("Roll=%d BKName=%s AUName=%s\n",id1.id,bn.bkname,an.auname);
printf("Roll=%d BKName=%s AUName=%s\n",id2.id,ba.bkname,ba.auname);
}
