
#include "head.h"

/**
 * @brief Funtion to saerch the record of customers
 * @param fp1
 * @return result of the search operation
 */




int search(FILE *fp1)
{
    int phone,temp=0,k=0,phone1;
    float  totalamount,paid,sta,gro,kit,clo,deco,food,elec,sport,bal1,bal2;
    char name[30],address[30],fname[30];
    //char ch,str_name,dup_name[30];
    fp1=fopen("customerdetails.txt","r");
    printf("\n\nEnter Name :");
    scanf("%100s",&fname);
    printf("\nEnter Phone Number Of Customer:");
    scanf("%d",&phone1);
    while(!feof(fp1))
    {
        fscanf(fp1,"%d%100s%s%f%f%f%f%f%f%f%f%f%f%f%f",&phone,&name,&address,&sta,&gro,&kit,&clo,&deco,&food,&elec,&sport,&totalamount,&paid,&bal1,&bal2);
        if(feof(fp1))
            break;
        if(strcmp(name,fname)==0&&phone1==phone)
        {
             temp=1;
             printf("\nCustomer Details FOUND-");
             printf("\n\n\nCustomer Name =%s",name);
             printf("\nPHONE NO.     =%d",phone);
             printf("\nADDRESS       =%s",address);
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
                printf("\n     NEED TO GET           =%f",bal1);
             else if(bal1==0 && bal2!=0)
                printf("\n\n   NEED TO GIVE          =%f",bal2);
             else
                printf("\n\n  EXACT AMOUNT PAID");
            k++;
            }

    }
    if(temp==0)
        printf("Customer is not in the record");
    fclose(fp1);

    //return 0;
}



