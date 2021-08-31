#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main()
{   
    char a[100], b[1000], c[25],chaff[100];
    int units, income, hno;
    float rate,amt;
    int no;
    while(1>0)
    {
    printf("\n==========================================================================================================================\n\n\n\t\t\t\t\t\t\tWELCOME\n\n\n==========================================================================================================================\n\n\n");
    time_t t;
    time(&t);
    printf("%s \t \t", ctime(&t));
    printf("\n\n==========================================================================================================================\n\n");
    printf("\nENTER SERIAL NO.:-\t");
    gets(chaff);
    printf("\n---------------------------------------------------------------------------------------------------------------------------\n\n");
    printf("ENTER YOUR STATE / U.T.\t:\t");
    gets(c);
    printf("\n---------------------------------------------------------------------------------------------------------------------------\n\n");
    printf("ENTER YOUR NAME        \t:\t");
    gets(a);
    printf("\n---------------------------------------------------------------------------------------------------------------------------\n\n");
    printf("ENTER YOUR ADDRESS     \t: \t");
    gets(b);
    printf("\n--------------------------------------------------------------------------------------------------------------------------\n\n");
    printf("ENTER HOUSE NUMBER     \t: \t");
    scanf("%d", &hno);
    printf("\n---------------------------------------------------------------------------------------------------------------------------\n\n");
    printf("ENTER UNITS CONSUMED   \t: \t");
    scanf("%d",&units);
    printf("\n---------------------------------------------------------------------------------------------------------------------------\n\n");
    printf("ENTER ANNUAL INCOME    \t: \t");
    scanf("%d",&income);
    printf("\n---------------------------------------------------------------------------------------------------------------------------\n\n");
    printf("\n\n==========================================================================================================================\n\n");
    

    if (strcmp(c,"Andhra pradesh")==0)
    {
      printf("BILL NUMBER:             \t AP%d\n",hno );
      printf("-----------------------------------------------------------------\n");
      rate = 7.30;
    }
    
    else if (strcmp(c,"Arunachal pradesh")==0)
    {
      printf("BILL NUMBER:             \t AR%d\n",hno );
      printf("-----------------------------------------------------------------\n");
      rate = 7.00;
    }


   else if (strcmp(c,"Assam")==0)
    {
      printf("BILL NUMBER:             \t AS%d\n",hno );
      printf("-----------------------------------------------------------------\n");
      rate = 7.00;
    }

    else if (strcmp(c,"Bihar")==0)
    {
      printf("BILL NUMBER:             \t BI%d\n",hno );
      printf("-----------------------------------------------------------------\n");
      rate = 4.30;
    }

    else if (strcmp(c,"Chhattisgarh")==0)
    {
      printf("BILL NUMBER:             \t CT%d\n",hno );
      printf("-----------------------------------------------------------------\n");
      rate = 3.35;
    }

    else if (strcmp(c,"Goa")==0)
    {
      printf("BILL NUMBER:             \t GO%d\n",hno );
      printf("-----------------------------------------------------------------\n");
      rate = 7.30;
    }

    else if (strcmp(c,"Gujarat")==0)
    {
      printf("BILL NUMBER:             \t GJ%d\n",hno );
      printf("-----------------------------------------------------------------\n");
      rate = 9.00;
    }

    else if (strcmp(c,"Haryana")==0)
    {
      printf("BILL NUMBER:             \t HR%d\n",hno );
      printf("-----------------------------------------------------------------\n");
      rate = 5.30;
    }

    else if (strcmp(c,"Himachal Pradesh")==0)
    {
      printf("BILL NUMBER:             \t HP%d\n",hno );
      printf("-----------------------------------------------------------------\n");
      rate = 4.00;
    }

    else if (strcmp(c,"Jharkhand")==0)
    {
      printf("BILL NUMBER:             \t JH%d\n",hno );
      printf("-----------------------------------------------------------------\n");
      rate = 6.25;
    }

    else if (strcmp(c,"Karnataka")==0)
    {
      printf("BILL NUMBER:             \t KT%d\n",hno );
      printf("-----------------------------------------------------------------\n");
      rate = 6.20;
    }

    else if (strcmp(c,"Kerela")==0)
    {
      printf("BILL NUMBER:             \t KR%d\n",hno );
      printf("-----------------------------------------------------------------\n");
      rate = 7.50;
    } 

    else if (strcmp(c,"Madhya pradesh")==0)
    {
     printf("BILL NUMBER:             \t MP%d\n",hno );
     printf("-----------------------------------------------------------------\n");
      rate = 6.80;
    }

    else if (strcmp(c,"Maharashtra")==0)
    {
      printf("BILL NUMBER:             \t MH%d\n",hno );
      printf("-----------------------------------------------------------------\n");
      rate = 8.80;
    }
    
    else if (strcmp(c,"Manipur")==0)
    {
      printf("BILL NUMBER:             \t MN%d\n",hno );
      printf("-----------------------------------------------------------------\n");
      rate = 7.25;
    }
    
    else if (strcmp(c,"Meghalya")==0)
    {
      printf("BILL NUMBER:             \t MG%d\n",hno );
      printf("-----------------------------------------------------------------\n");
      rate = 6.00;
    }
    
    else if (strcmp(c,"Mizoram")==0)
    {
      printf("BILL NUMBER:             \t MZ%d\n",hno );
      printf("-----------------------------------------------------------------\n");
      rate = 5.00;
    }
    
    else if (strcmp(c,"Nagaland")==0)
    {
      printf("BILL NUMBER:             \t NG%d\n",hno );
      printf("-----------------------------------------------------------------\n");
      rate = 5.33;
    }
    
    else if (strcmp(c,"Odisha")==0)
    {
      printf("BILL NUMBER:             \t OD%d\n",hno );
      printf("-----------------------------------------------------------------\n");
      rate = 6.15;
    }
    
    else if (strcmp(c,"Punjab")==0)
    {
      printf("BILL NUMBER:             \t PB%d\n",hno );
      printf("-----------------------------------------------------------------\n");
      rate = 7.20;
    }

    else if (strcmp(c,"Rajasthan")==0)
    {
      printf("BILL NUMBER:             \t RJ%d\n",hno );
      printf("-----------------------------------------------------------------\n");
      rate = 5.30;
    }
    else  if (strcmp(c,"Sikkim")==0)
    {
      printf("BILL NUMBER:             \t SK%d\n",hno );
      printf("-----------------------------------------------------------------\n");
      rate = 3.50;
    }
    
    else if (strcmp(c,"Tamil nadu")==0)
    {
      printf("BILL NUMBER:             \t TN%d\n",hno );
      printf("-----------------------------------------------------------------\n");
      rate = 5.20;
      
    }
    
    else if (strcmp(c,"Telangana")==0)
    {
      printf("BILL NUMBER:             \t TL%d\n",hno );
      printf("-----------------------------------------------------------------\n");
      rate = 6.90;
    }
    
    else if (strcmp(c,"Tripura")==0)
    {
      printf("BILL NUMBER:             \t TR%d\n",hno );
      printf("-----------------------------------------------------------------\n");
      rate = 5.40;
    }
    
    else if (strcmp(c,"Uttarakhand")==0)
    {
      printf("BILL NUMBER:             \t UK%d\n",hno );
      printf("-----------------------------------------------------------------\n");
      rate = 3.70;
    }
    
    else if (strcmp(c,"Uttar Pradesh")==0)
    {
      printf("BILL NUMBER:             \t UP%d\n",hno );
      printf("-----------------------------------------------------------------\n");
      rate = 5.50;
    }
    
    else if (strcmp(c,"West bengal")==0)
    {
      printf("BILL NUMBER:             \t WB%d\n",hno );
      printf("-----------------------------------------------------------------\n");
      rate = 8.00;
    }
    
    else if (strcmp(c,"Andaman and nicobar islands")==0)
    {
      printf("BILL NUMBER:             \t AN%d\n",hno );
      printf("-----------------------------------------------------------------\n");
      rate = 7.30;
    }
   
    else if (strcmp(c,"Daman and diu")==0)
    {
      printf("BILL NUMBER:             \t DD%d\n",hno );
      printf("-----------------------------------------------------------------\n");
      rate = 3.50;
    }

    else if (strcmp(c,"Jammu and kashmir")==0)
    {
      printf("BILL NUMBER:             \t JK%d\n",hno );
      printf("-----------------------------------------------------------------\n");
      rate = 3.30;
    }

    else if (strcmp(c,"Lakshwadeep")==0)
    {
      printf("BILL NUMBER:             \t LK%d\n",hno );
      printf("-----------------------------------------------------------------\n");
      rate = 6.00;
    }

    else if (strcmp(c,"Chandigarh")==0)
    {
      printf("BILL NUMBER:             \t CH%d\n",hno );
      printf("-----------------------------------------------------------------\n");
      rate = 4.80;
    }
    
   else if (strcmp(c,"Delhi")==0)
    {
      printf("BILL NUMBER:             \t DL%d\n",hno );
      printf("-----------------------------------------------------------------\n");
      rate = 6.50;
    }
    
   else if (strcmp(c,"Ladakh")==0)
    {
       printf("BILL NUMBER:             \t LD%d\n",hno );
       printf("-----------------------------------------------------------------\n");
      rate = 3.50;
    }
    
   else if (strcmp(c,"Puduchery")==0)
    {
       printf("BILL NUMBER:             \t PD%d\n",hno );
       printf("-----------------------------------------------------------------\n");
      rate = 6.65;
    }
    else
    {
        printf("Wrong state/UT");
        printf("-----------------------------------------------------------------\n");
        return 0;
    }


   printf("\nNAME                      :\t %s",a);
   printf("\n-----------------------------------------------------------------\n");
   printf("\nADDRESS                   :\t %s",b);
   printf("\n-----------------------------------------------------------------\n");
   if(income< 600000 && income>=300000)
   {
       units = units - 100;
       printf("\n-----------------------------------------------------------------\n");
       printf("\nCongratulations!! You are eligible for 100 units concession.\n\n");
   }
    else if(income< 300000 && income>=100000)
   {
       units = units - 150;
       printf("\n-----------------------------------------------------------------\n");
       printf("\nCongratulations!! You are eligible for 150 units concession.\n\n");
   }
   else if(income< 100000 )
   {
       units = units - 200;
       printf("\n------------------------------------------------------------------\n");
       printf("\nCongratulations!! You are eligible for 200 units concession.\n\n");
   }
   
   amt = units * rate;
   printf("\n-----------------------------------------------------------------\n");
   printf("AMOUNT TO BE PAID AFTER CONCESSION (IF ANY): \t Rs. %.2f\n", amt);
   printf("\n-----------------------------------------------------------------\n");
   printf("\n\nPress 1 to print new bill\nPress 2 to exit\n");
   scanf("%d", &no);
   if(no != 1)
   {
   return 0;
   }
    }
}
