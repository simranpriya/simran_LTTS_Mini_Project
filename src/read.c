

#include "head.h"

/**
 * @brief Funtion to read the details of customers
 * @param fp1
 * @return result of the read operation
 */



int read(FILE *fp1)
{
    int phone;
    float  totalamount,paid,sta,gro,kit,clo,deco,food,elec,sport,bal1,bal2;
    char name[30],address[30],ch;
     fp1=fopen("customerdetails.txt","r");
     while(!feof(fp1))
     {
        fscanf(fp1,"%d%s%s%f%f%f%f%f%f%f%f%f%f%f%f",&phone,&name,&address,&sta,&gro,&kit,&clo,&deco,&food,&elec,&sport,&totalamount,&paid,&bal1,&bal2);
        if(feof(fp1))
            break;
         else
         {
             printf("\n\nPHONE NUMBER=%d\n",phone);
             printf("Name=%s\n",name);
             printf("ADDRESS=%s",address);
             printf("\n\n  ITEMS PURCHASED           PRICE(in Rs/-) ");
             printf("\n   ------------------------------------------");
             printf("\nSTATIONARY ITEMS            =%f\n",sta);
             printf("GROCERY ITEMS               =%f\n",gro);
             printf("KITCHEN WARES               =%f\n",kit);
             printf("CLOTHES                     =%f\n",clo);
             printf("DECORATIVE ITEMS            =%f\n",deco);
             printf("FOOD  ITEMS                 =%f\n",food);
             printf("ELECTRIC ITEMS              =%f\n",elec);
             printf("SPORTS ITEMS                =%f\n",sport);
             printf("\n\n\n   TOTAL AMOUNT          = %f",totalamount);
             printf("\n   ---------------------");
             printf("\n\n   AMOUNT PAID           = %f",paid);
             printf("\n   ---------------------");
             if(bal1!=0 && bal2==0)
                printf("\n   NEED TO GET           =%f",bal1);
             else if(bal1==0 && bal2!=0)
                printf("\n\n   NEED TO GIVE          =%f",bal2);
             else
                printf("\n\n  EXACT AMOUNT PAID");
         }
     }
     fclose(fp1);

     //return 0;
}