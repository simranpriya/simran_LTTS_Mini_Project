
#include <stdio.h>
#include "head.h"




void main()
{
    

    FILE *fp1,*fp2;
    int x;
    char ch,c;
    do
    {

      //                            **********************
      //                              STARTING INTERFACE
      //                            **********************

    printf("\n\t*----------------------------*");
    printf("\n\t|xxxxxxxxxxxxxxxxxxxxxxxxxxxx|");
    printf("\n\t|----------------------------|");
    printf("\n\t| CUSTOMER SHOPPING DETAILS  |");
    printf("\n\t|----------------------------|");
    printf("\n\t|xxxxxxxxxxxxxxxxxxxxxxxxxxxx|");
    printf("\n\t*----------------------------*");
    printf("\n\n\n\t____________________");
    printf("\n\t||----------------||");
    printf("\n\t|| FILE OPERATION ||");
    printf("\n\t||________________||");
    printf("\n\n\t(1)=ADD RECORD AND CHEQUEOUT");
    printf("\n\n\t(2)=READ ALL RECORDS");
    printf("\n\n\t(3)=SEARCH A RECORD");
    printf("\n\n\t(4)=REMOVE A RECORD");
    printf("\n\n\t(5)=MODIFY AN EXISTING RECORD");
    printf("\n\n\t(6)=OVERWRITE ALL PREVIOUS RECORDS");
    printf("\n\n\t(7)=EXIT");
    printf("\n\n  Enter your choice : ");
    scanf("%d",&x);
    printf("\n ----------------------");
    if(x==1)
        append(fp1);                                                                           //     ADDING A RECORD
    if(x==2)
        read(fp1);                                                                             //     READING ALL EXISTING RECORDS
    if(x==3)
        search(fp1);                                                                           //     SEARCHING A PARTICULAR RECORD
    if(x==4)
    {
        fflush(stdin);
        printf("\nDO YOU WANT TO REMOVE A RECORD FOR SURE(y/n)?");                             //     REMOVING A PARTICULAR RECORD
        c=getchar();
        if(c=='y')
        remov(fp1,fp2);
    }
    if(x==5)
       {
        fflush(stdin);
        printf("\nDO YOU WANT TO MODIFY A RECORD FOR SURE(y/n)?");                             //    MODIFYING A PARTIOCULAR RECORD
        c=getchar();
        if(c=='y')
        modify(fp1,fp2);
       }

    if(x==6)
        {
            fflush(stdin);
            printf("\nDO YOU WANT TO OVERWRITE ALL OREVIOUS RECORDS FOR SURE(y/n)?");          //    OVERWRITING ALL PREVIOUS RECORD AND A NEW RECORD
            c=getchar();
            if(c=='y')
                write(fp1);
        }
    if(x==7)
        exit(9);                                                                               //      EXITING  THIS WHOLE OPERATION
    if(x>=8)
        printf("\nSORRY NO MORE OPERATION AVAILABLE\n");
    fflush(stdin);

        //              OPTION  FOR TRYING OTHER OPERATIONS SIMULTANEOUSLY

    printf("\n\n   DO  YOU  WANT  TO  TRY  OTHER  OPERATION ( y / n ) ? :");
    ch=getchar();
    printf("\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n");
    }while(ch=='y');

    
}


