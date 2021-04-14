                      
#include "head.h"


/**
 * @brief Funtion to remove the details of customers
 * @param fp1
 * @param fp2
 * @return result of the remove operation
 */


int remov(FILE *fp1, FILE *fp2)
{
  int phone,temp=0,phone1;
  float  totalamount,paid,sta,gro,kit,clo,deco,food,elec,sport,bal1,bal2;
  //FILE *fp2;
  //char ch;
  char name[30],address[30],fname[30];
  fp1=fopen("customerdetails.txt","r");
  fp2=fopen("cust.txt","w");
  printf("\n\nEnter the name of customer :");
  scanf("%100s",&fname);
  printf("\nEnter Phone Number Of Customer:");
    scanf("%d",&phone1);
  while(!feof(fp1))
  {
      fscanf(fp1,"%d%100s%s%f%f%f%f%f%f%f%f%f%f%f%f",&phone,&name,&address,&sta,&gro,&kit,&clo,&deco,&food,&elec,&sport,&totalamount,&paid,&bal1,&bal2);
      if(feof(fp1))
        break;
      if(strcmp(name,fname)==0&&phone1==phone)
      temp=1;
      else
        fprintf(fp1,"%d\n%s\n%s\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n",phone,name,address,sta,gro,kit,clo,deco,food,elec,sport,totalamount,paid,bal1,bal2);
  }
  if(temp==0)
    printf("Customer not found");
  else
    printf("Customer Details Deleted successfully");
  fclose(fp1);
  fclose(fp2);
  remove("customerdetails.txt");
  rename("cust.txt","customerdetails.txt");

  //return 0;

}


