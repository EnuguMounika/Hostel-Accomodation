#include<stdio.h>
#include<stdlib.h>
int n1,n2;
int acroom();
int nonacroom();
int paymentac(int n1);
int paymentnonac(int n2);
int main()
{
        printf("--------------------------WELCOME--------------------------------\n");
        printf("------------------WELCOME TO RK GIRLS HOSTEL---------------------\n");
        printf("\t Rk hostel one of newest hostel in Hyderabad.This hostel is equipped with all the general amenities and facilities it provides homely environment,and the chefs of this hostel are from north.");
        printf("\n\n\t AMENITIES\n");
        printf("\n\t\t\t1.100%Power backup.\n");
        printf("\t\t\t2.Automatic lift\n");
        printf("\t\t\t3.Round the clock security.\n");
        printf("\t\t\t4.Running hot and cold water.\n");
        printf("\t\t\t5Free internet service.\n");
        printf("\t\t\t6.Laundry service.\n");
        printf("It provides both AC and NON-AC rooms");

       int ch;
        printf("The details of the AC and NON-AC rooms are:\n");
       printf("1.Details of AC rooms 2.Details of NON-AC rooms\n");
       printf("Enter your choice \n");
       scanf("%d",&ch);

       switch(ch)
       {
        case 1: acroom();
 paymentac(n1);
        break;
        case 2:nonacroom();
               paymentnonac(n2);
        break;
        default:printf("enter the right choice");
        }

       //printf("*************THANK YOU ****************");
       return 0;
    }


int acroom()
{
int a[30],*p,c,i,j,x[5][5],s1,k,q,n1;
FILE *f1;
printf("\n\t ************************************************************************************************\n       THIS IS AC BLOCK \n *************************************************************************************** ");
printf("\nCOST : - RS 5500 per head");
printf("\nBOOKED -> 0; UNBOOKED  -> 1");
printf("\nBEDS UNBOOKED");
f1=fopen("ac1.txt","a+");
if(f1==NULL)
{printf("error");
exit(1);}
p=a;
for(c=fgetc(f1);c!=EOF;c=fgetc(f1))
{fscanf(f1,"%d",p);
if(c=='\n')
{
for(i=1;i<=5;i++)
{for(j=1;j<=5;j++)
{if((i==(*p/10))&&(j==(*p%10)))
x[i][j]=0;
else
{if(x[i][j]!=0)
x[i][j]=1;}}}
p++;}}
printf("\n");
for(i=1;i<=5;i++)
{for(j=1;j<=5;j++)
printf("%d ",x[i][j]);
printf("\n");}
printf("enter num of beds");
scanf("%d",&n1);
printf("\n enter the seats to be booked with respective row and column");
for(k=0;k<n1;k++)
{
scanf("%d",&a[k]);
}
for(q=0;q<n1;q++)
{
fprintf(f1,"%4d\n",a[q]);
}
//printf("\n\t***THANK YOU***");
fclose(f1);
return n1;
}

int nonacroom()
{
int a[30],*p,c,i,j,x[5][5],s1,k,q;
FILE *f2;
printf("********************** THIS IS NON AC BLOCK ******************* ");
printf("\nCOST : - RS 4500 per head,per month");
printf("\nBOOKED -> 0; UNBOOKED  -> 1");
printf("\nBEDS UNBOOKED");
f2=fopen("nonac1.txt","a+");
if(f2==NULL)
{printf("error");
exit(1);}
p=a;
for(c=fgetc(f2);c!=EOF;c=fgetc(f2))
{fscanf(f2,"%d",p);
if(c=='\n')
{
for(i=1;i<=5;i++)
{for(j=1;j<=5;j++)
{if((i==(*p/10))&&(j==(*p%10)))
x[i][j]=0;
else
{if(x[i][j]!=0)
x[i][j]=1;}}}
p++;}}
printf("\n");
for(i=1;i<=5;i++)
{for(j=1;j<=5;j++)
printf("%d ",x[i][j]);
printf("\n");}
printf("\n enter the beds num");
scanf("%d",&n2);
printf("enter beds you need in row nd column wise");
for(k=0;k<n2;k++)
{
scanf("%d",&a[k]);
}
for(q=0;q<n2;q++)
{
fprintf(f2,"%4d\n",a[q]);
}
//printf("\n\t***THANK YOU***");
fclose(f2);
return n2;
}


int paymentac(int n1)
{

 char name[40];
 long int cardnum;
 int cvv,s,amnt,pay;
 int vdate,vmonth;
 printf("enter the number of beds you have booked");
 scanf("%d",&n1);
 amnt=n1*5500;
 printf("**DEBIT CARD PAYMENT**\n");
 printf("enter your card number\n");
 scanf("%d",&cardnum);
 printf("enter your card name\n");
 scanf("%s",name);
 printf("enter your  card validity period\n");
 scanf("%d %d",&vdate,&vmonth);
 printf("enter your cvv\n");
 scanf("%d",&cvv);
 printf("total amount is :%d",amnt);
 printf("\n PAY NOW \n");
 printf("1.YES 2.NO\n");
 printf("enter choice");
 scanf("%d",&pay);
 switch(pay)
 {
 case 1:printf("your are debited with %d\n ",amnt);
        s=1;
        break;
 case 2:printf("cancelled");
        s=0;
        break;
 default :printf("enter a valid choice");
          break;
 } if(s==0)
{
printf("Sorry!your ticket is not booked");
}
else
{
printf("your ticket is confirmed \n");
}
printf("****************THANK YOU ***********************");

return 0;

}
int paymentnonac(int n2)
{
 char name[40];
 long int cardnum;
 int cvv,s,amnt,pay;
 int vdate,vmonth;
 printf("enter the number of beds you have booked");
 scanf("%d",&n2);
 amnt=n2*4500;
 printf("**DEBIT CARD PAYMENT**\n");
 printf("enter your card number\n");
 scanf("%d",&cardnum);
 printf("enter your card name\n");
 scanf("%s",name);
 printf("enter your  card validity period\n");
 scanf("%d %d",&vdate,&vmonth);
 printf("enter your cvv\n");
 scanf("%d",&cvv);
 printf("total amount is :%d",amnt);
 printf("\n PAY NOW \n");
 printf("1.YES 2.NO\n");
 printf("enter choice");
 scanf("%d",&pay);
 switch(pay)
 {
 case 1:printf("your are debited with %d\n ",amnt);
        s=1;
        break;
 case 2:printf("cancelled");
        s=0;
        break;
 default :printf("enter a valid choice");
          break;
 }

if(s==0)
{
printf("Sorry!your bed is not booked");
}
else
{
printf("your bed is confirmed \n");
}
printf("****************THANK YOU ***********************");

return 0;

}