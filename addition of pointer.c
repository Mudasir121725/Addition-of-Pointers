#include<stdio.h>
void main()
{
int  a=20,b=20,c,*ptra,*ptrb,*ptrc;
ptra=&a;
ptrb=&b;
ptrc=&c;
*ptrc=*ptra+*ptrb;
printf("\nAddition= %d",c);
*ptrc=*ptra-*ptrb;
printf("\nsubtraction= %d",c);
*ptrc=*ptra**ptrb;
printf("\nmultiplication= %d",c);
*ptrc=*ptra/(*ptrb);
printf("\ndivision= %d",c);
}
