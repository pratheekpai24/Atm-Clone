#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    system("CLS");
    int pw,ps=2023,i=3,eps;
    float amt=43600,wd,dp;
    printf("                                                        BANK OF PAI\n\n\n\n\n");
    printf("Please insert your ATM/Debit card");
    getch();
    stt:
    system("CLS");
    printf("Enter your Four digit pin\n\n\n");
    scanf("%d",&pw);
    if(pw!=ps){
        incorr:
        system("cls");
        printf("Incorrent Pin entered\n Please try again\n\n\n\nAttempts left = %d",i);
        printf("\nEnter your Four digit pin\n\n\n");
        scanf("%d", &pw);
        if(pw==ps) goto mainmenu;
        else{
            i--;
            if(i==0){
                system("CLS");
                printf("Your ATM card has been blocked\nPlease visit nearest branch to re-activate the card");
                getch();
                exit(0);
            }
            goto incorr;
        }
        
    }
    if(pw==ps){
        mainmenu:
        system("CLS");
        printf("                   PLEASE SELECT THE SERVICE YOU WANT TO AVAIL\n\n\n\n\n");
        int op;
        printf("*** 1. Check Balance                                              4. Deposit amount ***\n");
        printf("*** 2. Withdraw amount                                            5. Credits        ***\n");
        printf("*** 3. Change the pin                                             6. Exit           ***\n");

        scanf("%d",&op);
        system("CLS");
        switch (op){
            case 1: printf("BALANCE = Rs. %0.2f",amt);
            break;
            case 2: 
            with:
            printf("Enter the amount to be withdrawn = ");
            scanf("%f",&wd);
            if(wd>amt){
                printf("Insufficient Bank Balance");
                getch();
                system("CLS");
                goto with;}
            if(wd<=amt){
                printf("Withdrawl Successfull\n\nPlease take the cash");
                amt = amt - wd;
                printf("\n\nUpdated Balance = Rs. %0.2f",amt); 
            } 
            break;
            case 3: 
            pini:
            system("CLS");
            printf("Enter your old pin\n\n\n");
            scanf("%d",&pw);
            if(pw==ps){
                newp:
                system("CLS");
                printf("Enter your new pin\n(For security reasons, your 4 digit pin can't start with the number '0')\n\n\n");
                scanf("%d",&eps);
                if(eps<=9999){
                printf("\n\n\n\nPin changed successfully");
                ps=eps;
                pw=ps;
                printf("\n\n\nPlease login again\n");
                getch();
                goto stt;
                }
                if(eps>9999){
                    printf("Pin must not exceed four digits");
                    getch();
                    goto newp; 
                }
            }
            else{
                system("CLS");
                printf("Please enter a valid old pin");
                getch();
                goto pini;
            }
            break;
            case 4:
            printf("Please enter the amount to be deposited\n");
            scanf("%f",&dp);
            printf("\n\n\nPlease insert Rs. %0.2f into the depository machine\n",dp);
            getch();
            system("CLS");
            amt=amt+dp;
            printf("Amount Deposited successfully\n\n\n\n\nUpdated Balance = Rs.%f",amt);
            break;
            case 5:
            printf("Created and developed by Pratheek Pai\nLanguage used - C\n\n\n\n\n\nContact the dev\n8431945686\npratheekpaiofcl@outlook.com");
            break;
            case 6:
            exit(0);

            default : printf("Please select a valid option");
            getch();
            goto mainmenu;
        }}
        if(pw==ps){
            printf("\n\n\n\n\n\n\n1. Back to main menu\n2. Exit \n");
            int jw;
            scanf("%d",&jw);
            if(jw==1){
                goto mainmenu;
            }
            else
            exit(0);
            
        }
        
        getch();
        return 0;
}
