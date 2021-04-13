#include "head.h"


/**
 * @brief Funtion to modify the details of customers
 * @param fp1
 * @param fp2
 * @return result of the modify operation
 */


int modify(FILE *fp1,FILE *fp2)
{
    int phone,temp=0,y,k=0,phone1;
    float  totalamount,paid,sta,gro,kit,clo,deco,food,elec,sport,bal1,bal2;
    //float paid1;
    //char ch;
    char name[30],address[30],fname[30],c;
    fp1=fopen("customerdetails.txt","r");
    fp2=fopen("cust.txt","w");
    printf("\n\nEnter the Customer Name to be modified:");
    scanf("%100s",&fname);
    printf("\nEnter Phone Number Of Customer:");
    scanf("%d",&phone1);
    while(!feof(fp1))
    {
       scanf(fp1,"%d%100s%100s%f%f%f%f%f%f%f%f%f%f%f%f",&phone,&name,&address,&sta,&gro,&kit,&clo,&deco,&food,&elec,&sport,&totalamount,&paid,&bal1,&bal2);
        if(feof(fp1))
            break;
        else if(strcmp(name,fname)==0&&phone1==phone)
        {
            temp=1;
            fflush(stdin);


            //    -----------------------------------------------------------------------------------
            //     MODIFYING TYPE (1) ------  OVERWRITING   SELECTED   RECORD   WITH   A NEW  RECORD
            //    -----------------------------------------------------------------------------------


            printf("\nDO YOU WANT TO OVERWRITE THIS CUSTOMER DETAILS(y/n)?:");
            c=getchar();
            if(c=='y')
            {
            k=1;
            printf("\nEnter New Name : ");
            scanf("%100s",&name);
            printf("\nEnter New Phone Number : ");
            scanf("%d",&phone);
            printf("\nEnter New Address:");
            scanf("%100s",&address);
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
        fprintf(fp2,"%d\n%s\n%s\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n",phone,name,address,sta,gro,kit,clo,deco,food,elec,sport,totalamount,paid,bal1,bal2);
    }
            fflush(stdin);


            //    --------------------------------------------------------------------
            //      MODIFYING TYPE (2) ------  SELECTED  ITEMS  IN  SELECTED  RECORD
            //    --------------------------------------------------------------------

     if(k==0)
            {
            do
            {
               fflush(stdin);
            printf("\nDO YOU WANT TO MODIFY ITEM DETAILS OF THE CUSTOMER(y/n)?:");
            c=getchar();
            if(c=='y')
            {
                printf("\nWhich One You Want To Modify?");
                printf("\n(1)STATIONARY ITEMS");
                printf("\n(2)GROCERY ITEMS");
                printf("\n(3)KITCHEN WARES");
                printf("\n(4)CLOTHES");
                printf("\n(5)DECORATIVE ITEMS");
                printf("\n(6)FOOD ITEMS");
                printf("\n(7)SPORTS ITEMS");
                printf("\n(8)ELECTRIC ITEMS");
                printf("\n\n  ENTER YOUR CHOICE:");
                scanf("%d",&y);
                if(y==1)
                {
                   printf("\nSTATIONARY ITEMS (amount in Rs/-)  = ");
                   scanf("%f",&sta);
                }
                if(y==2)
                {
                   printf("GROCERY ITEMS  (amount in Rs/-)      = ");
                   scanf("%f",&gro);
                }
                if(y==3)
                {
                   printf("KITCHEN WARES  (amount in Rs/-)       = ");
                   scanf("%f",&kit);

                }
                if(y==4)
                {
                    printf("CLOTHES      (amount in Rs/-)         = ");
                    scanf("%f",&clo);

                }
                if(y==5)
                {
                    printf("DECORATING STUFFS  (amount in Rs/-)    = ");
                    scanf("%f",&deco);

                }
                if(y==6)
                {
                   printf("FOOD ITEMS    (amount in Rs/-)         = ");
                   scanf("%f",&food);

                }
                if(y==7)
                {
                   printf("ELECTRIC ITEMS    (amount in Rs/-)    = ");
                   scanf("%f",&elec);

                }
                if(y==8)
                {
                    printf("SPORTS ITEMS  (amount in Rs/-)        = ");
                    scanf("%f",&sport);

                }

            }

        totalamount=sta+gro+kit+clo+deco+food+elec+sport;
        printf("\nTOTAL AMOUNT=%f",totalamount);
        printf("\n\nAMOUNT PAID=%f",paid);

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
        fflush(stdin);
        printf("\nDo you want to modify another item(y/n)? ");
        c=getchar();
        }while(c=='y');
        fprintf(fp2,"%d\n%s\n%s\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n",phone,name,address,sta,gro,kit,clo,deco,food,elec,sport,totalamount,paid,bal1,bal2);
    }
}
        else
            fprintf(fp2,"%d\n%s\n%s\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n",phone,name,address,sta,gro,kit,clo,deco,food,elec,sport,totalamount,paid,bal1,bal2);
    }
    if(temp==0)
        printf("\nInvalid ");
    else
        printf("\n\nModified successfully");
  fclose(fp1);
  fclose(fp2);
  remove("customerdetails.txt");
  rename("cust.txt","customerdetails.txt");

  //return 0;

}
