#include<stdio.h>
#include<conio.h>
int main()
{
    printf("\n\n\t\t\t\t**********Welcome To MENZ Option**********\n\n\n");
   printf("\t\t\t\t  Please login to your Admin Portal\n\n");
    char username[15];
    char password[8];
    int i;
    char a[5];
    printf("\n\tEnter your username : ");

  scanf("%s",username);

  printf("\n\tEnter your password : ");


  for(i=0;i<8;i++)
  {
   password[i]=getch();
   printf("*");
  }
  password[i]='\0';

  printf("\n\n\tPress any key to continue\n\n");
  getch();


    if(strcmp(username,"maruf"))
     {

        if(!strcmp(password,"maruf123"))
        {
        printf("\n\n\t\t\t\t\tWelcome.Login Successful!\n\n");

    int o,hc,s,f,mp,sum,hc1,s1,f1,mp1,sum3;
     int mi=13000,ra=12500,ras=12500,ar=13500,mu=12000,tu=12500,ni=12000,sum1;
     float eb,wb,sum2,tf,tf1;
     int fr;
    printf("\t\t\t\t\tPlease Select An Option\n\n");
       printf("\t\tFor Facilities Type :1\n\n\t\tFor Making Bill Of Customer Type :2");
       printf("\n\n\t\tFor Worker Information Type :3 \n\n\t\tFor Saloon Management Type :4\n\n");
       printf("\n\n\t\t*Enter your option here:");
    scanf("%d",&o);
    switch(o)
    {
    case 1:
    printf("\n\n\t\t\t\t*****The Facilities We Have*****\n\n");
    printf("\t\t\tServices\t\t\t\tPrice\n\t\t\t---------\t\t\t\t-------");
    printf("\n\t\t\tHair Cut\t\t\t\t150/=\n\t\t\tShave\t\t\t\t\t100/=");
    printf("\n\t\t\tFacial\t\t\t\t\t600/=\n\t\t\tManicure-Pedicure\t\t\t300/=\n\n\n\n\n\n");
    break;
    case 2:

     printf("\n\n\t\t\t**********Which Services Did You Take**********\n\n");
     printf("\t\t{********Note:Which Service Isn't Taken Type Bill :0********}\n");
    printf("\n\n\tBill For Hair Cut :");
    scanf("%d",&hc);
    printf("\n\tBill For Shave :");
    scanf("%d",&s);
    printf("\n\tBill For Facial :");
    scanf("%d",&f);
    printf("\n\tBill For Manicure-Pedicure :");
    scanf("%d",&mp);
    sum=hc+s+f+mp;
    printf("\n\tYour Total Bill = %d\n\n",sum);
      break;
    case 3:
        printf("\n\n\n\t\t\t\t********Welcome To Worker Information********\n\n\n");
        printf("\n\t\tEnter Your Worker I'd:");
        scanf("%s",&a);

        if(strcmp(a,"101")==0)
        {
            printf("\n\t\tWorker I'd\t\t Name\t\t\tContact NO.\t\t  DOB\t\t\t  Salary\n\t\t-------------\t\t--------");
             printf("\t\t-------------\t\t----------- \t\t----------");


            printf("\n\t\t   101\t\t\t Minhaz\t\t\t01815346343\t\t22/11/1991\t\t  13000/=\n\n\n\n\n");
        }
       else if(strcmp(a,"102")==0)
       {
            printf("\n\t\tWorker I'd\t\t Name\t\t\tContact NO.\t\t  DOB\t\t\t  Salary\n\t\t-------------\t\t--------");
             printf("\t\t-------------\t\t----------- \t\t----------");


            printf("\n\t\t   102\t\t\t Rakib\t\t\t01715865343\t\t02/01/1992\t\t  12500/=\n\n\n\n\n");
       }
        else if(strcmp(a,"103")==0)
       {
            printf("\n\t\tWorker I'd\t\t Name\t\t\tContact NO.\t\t  DOB\t\t\t  Salary\n\t\t-------------\t\t--------");
             printf("\t\t-------------\t\t----------- \t\t----------");


            printf("\n\t\t   103\t\t\t Rasel\t\t\t01915882343\t\t15/10/1995\t\t  12500/=\n\n\n\n\n");
       }
        else if(strcmp(a,"104")==0)
       {
            printf("\n\t\tWorker I'd\t\t Name\t\t\tContact NO.\t\t  DOB\t\t\t  Salary\n\t\t-------------\t\t--------");
             printf("\t\t-------------\t\t----------- \t\t----------");


            printf("\n\t\t   104\t\t\t Arif\t\t\t01615882343\t\t25/08/1990\t\t  13500/=\n\n\n\n\n");
       }
        else if(strcmp(a,"105")==0)
       {
            printf("\n\t\tWorker I'd\t\t Name\t\t\tContact NO.\t\t  DOB\t\t\t  Salary\n\t\t-------------\t\t--------");
             printf("\t\t-------------\t\t----------- \t\t----------");


            printf("\n\t\t   105\t\t\t Munim\t\t\t01515886534\t\t30/05/1995\t\t  12000/=\n\n\n\n\n");
       }
       else if(strcmp(a,"106")==0)
       {
            printf("\n\t\tWorker I'd\t\t Name\t\t\tContact NO.\t\t  DOB\t\t\t  Salary\n\t\t-------------\t\t--------");
             printf("\t\t-------------\t\t----------- \t\t----------");


            printf("\n\t\t   106\t\t\t Tuhin\t\t\t01515657894\t\t30/05/1995\t\t  12500/=\n\n\n\n\n");
       }
       else if(strcmp(a,"107")==0)
       {
            printf("\n\t\tWorker I'd\t\t Name\t\t\tContact NO.\t\t  DOB\t\t\t  Salary\n\t\t-------------\t\t--------");
             printf("\t\t-------------\t\t----------- \t\t----------");


            printf("\n\t\t   107\t\t\t Nizam\t\t\t01715883047\t\t30/05/1995\t\t  12000/=\n\n\n\n\n");
       }
       else
       {
           printf("\n\t\t\t*****Worker Doesn't Exist!!!\n\n\n\n\n");
       }
    break;
    case 4:
     printf("\n\n\t\t********Welcome To Saloon Management Portal********\n\n");
     printf("\n\n\t\t\t*****Calculate Your Total Monthly Income*****\n\n");
     printf("\n\tHow many Hair_Cut Services You Have Given This Month :");
     scanf("%d",&hc1);
     printf("\n\tHow many Shave Services You Have Given This Month :");
     scanf("%d",&s1);
     printf("\n\tHow many Facial Services You Have Given This Month :");
     scanf("%d",&f1);
     printf("\n\tHow many Manicure-Pedicure Services You Have Given This Month :");
     scanf("%d",&mp1);
     sum3=(150*hc1)+(100*s1)+(600*f1)+(300*mp1);
     printf("\n\n\n\t\tYour Total Monthly Income:::%d\n\n",sum3);



     printf("\n\n\tTotal Salary Of your Workers:\n");
        printf("\tSalary Of Id 101 :%d\n",mi);

        printf("\n\tSalary Of Id 102 :%d Tk\n",ra);

        printf("\n\tSalary Of Id 103 :%d Tk\n",ras);

        printf("\n\tSalary Of Id 104 :%d Tk\n",ar);

        printf("\n\tSalary Of Id 105 :%d Tk\n",mu);

        printf("\n\tSalary Of Id 106 :%d Tk\n",tu);

        printf("\n\tSalary Of Id 107 :%d Tk\n",ni);


        sum1=mi+ra+ras+ar+mu+tu+ni;

        printf("\n\n\tTotal Salary Of Workers :%d Tk\n",sum1);
     printf("\n\n\tElectricity Bill :");
     scanf("%f",&eb);
     printf("\n\tWater Bill :");
     scanf("%f",&wb);
     printf("\n\tFloor Rent:");
     scanf("%d",&fr);
     sum2=sum1+eb+wb+fr;
     printf("\n\n\t\tYour Total Monthly Investment :%.2fTk\n\n",sum2);
     //tf=sum3-sum2;
     //printf("\n\n\tYour Total Profit:%.2f\n\n",tf);
     if(sum3>sum2)
     {
         tf=sum3-sum2;
         printf("\n\n\t\tYou Got Total Profit for This Month :::%.2f Tk\n\n\n",tf);
     }
     else
     {
         tf1=sum2-sum3;
         printf("\n\n\t\tYou Got Loss In This Month :::%.2f Tk\n\n\n",tf1);
     }
     break;
  default:
    printf("\n\n\t\t**********Your Selection Isn't Correct**********\n\n");
   break;
    }
    }

     else
    {
    printf("\n\n\n\t\twrong password");
    }
     }
    else
        {
    printf("\n\n\n\t\tUser doesn't exist");
        }

return 0;
}
