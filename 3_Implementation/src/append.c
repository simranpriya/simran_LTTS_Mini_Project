
#include "head.h"

/**
 * @brief Funtion to append the details of customers
 * 
 * @param[in] name
 * @param fp1
 * @return result of the append operation
 */


int append(FILE *fp1)
{
    int phone;
    float paid,sta,gro,kit,clo,deco,food,elec,sport,bal1,bal2;
    char name[30],address[30],ch;
    fp1=fopen("customerdetails.txt","a");
    do
    {
        printf("\nEnter name : ");
        scanf("%100s",&name);
        printf("\nEnter the phone number : ");
        scanf("%d",&phone);
        printf("\nEnter Address:");
        scanf("%100s",&address);
        printf("\n  ITEMS PURCHASED           PRICE(in Rs/-)");
        printf("\n------------------------------------------");
        printf("\nSTATIONARY ITEMS             = ");
        scanf("%f",&sta);
        printf("GROCERY ITEMS                = ");
        scanf("%f",&gro);
        printf("KITCHEN WARES                = ");
        scanf("%f",&kit);
        printf("CLOTHES                      = ");
        scanf("%f",&clo);
        printf("DECORATING STUFFS            = ");
        scanf("%f",&deco);
        printf("FOOD ITEMS                   = ");
        scanf("%f",&food);
        printf("ELECTRIC ITEMS               = ");
        scanf("%f",&elec);
        printf("SPORTS ITEMS                 = ");
        scanf("%f",&sport);
        
        float totalamount=sta+gro+kit+clo+deco+food+elec+sport;
        printf("\nTOTAL AMOUNT=%f",totalamount);
        printf("\n\nAMOUNT PAID=");
        scanf("%f",&paid);
        if(totalamount>paid)
        {
            bal2=0;
            bal1=totalamount-paid;
            printf("\nNEED TO GET=%f",bal1);
        }
       else if(paid>totalamount)
        {
            bal1=0;
            bal2=paid-totalamount;
            printf("\nNEED TO GIVE=%f",bal2);
        }
        else
        {
            bal1=0;bal2=0;
            printf("\nEXACT AMOUNT PAID");
        }
        fprintf(fp1,"%d\n%s\n%s\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n",phone,name,address,sta,gro,kit,clo,deco,food,elec,sport,totalamount,paid,bal1,bal2);

        printf("\n\nDo you want to add  another record(y/n)?");
        ch=getchar();
    }while(ch=='y');
    fclose(fp1);

    

}
