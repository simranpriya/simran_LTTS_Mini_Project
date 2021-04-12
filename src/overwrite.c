



#include "head.h"


/**
 * @brief Funtion to overwrite the details of customers
 * @param fp1
 * @return result of the write operation
 */




int write(FILE *fp1)
{
    int phone;
    float  totalamount,paid,sta,gro,kit,clo,deco,food,elec,sport,bal1,bal2;
    char name[30],address[30],ch;
    fp1=fopen("customerdetails.txt","w");
    do
    {
        printf("\nEnter name : ");
        scanf("%s",&name);
        printf("\nEnter the phone number : ");
        scanf("%d",&phone);
        printf("\nEnter Address:");
        scanf("%s",&address);
        printf("\n  ITEMS PURCHASED           PRICE(in Rs/-)");
        printf("\n ------------------------------------------");
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
        totalamount=sta+gro+kit+clo+deco+food+elec+sport;
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
        fflush(stdin);
        printf("\n\nDo you want to add  another record(y/n)?");
        ch=getchar();
    }while(ch=='y');
    fclose(fp1);

    //return 0;
}

