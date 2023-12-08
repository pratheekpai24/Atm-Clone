#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<conio.h>
using namespace std;
int main(){
    system("CLS");
    int pw,ps=2023,i=3,eps;
    double amt=43600,wd,dp;
    cout<<"                                                        BANK OF PAI\n\n\n\n\n";
    cout<<"Please insert your ATM/Debit card";
    getch();
    stt:
    system("CLS");
    cout<<"Enter your Four digit pin\n\n\n";
    cin>>pw;
    if(pw!=ps){
        incorr:
        system("cls");
        cout<<"Incorrent Pin entered\n Please try again\n\n\n\nAttempts left = "<<i<<endl;
        cout<<"Enter your Four digit pin\n\n\n";
        cin>>pw;
        if(pw==ps) goto mainmenu;
        else{
            i--;
            if(i==0){
                system("CLS");
                cout<<"Your ATM card has been blocked\nPlease visit nearest branch to re-activate the card";
                getch();
                exit(0);
            }
            goto incorr;
        }
        
    }
    if(pw==ps){
        mainmenu:
        system("CLS");
        cout<<"                   PLEASE SELECT THE SERVICE YOU WANT TO AVAIL\n\n\n\n\n";
        int op;
        cout<<"*** 1. Check Balance                                              4. Change the pin***\n";
        cout<<"*** 2. Withdraw amount                                            5. Credits       ***\n";
        cout<<"*** 3. Deposit amount                                             6. Exit          ***\n ";

        cin>>op;
        system("CLS");
        switch (op){
            case 1: cout<<"BALANCE = Rs."<<amt;
            break;
            case 2: 
            with:
            cout<<"Enter the amount to be withdrawn = ";
            cin>>wd;
            if(wd>amt){
                cout<<"Insufficient Bank Balance";
                getch();
                system("CLS");
                goto with;}
            if(wd<=amt){
                cout<<"Withdrawl Successfull\n\nPlease take the cash";
                amt = amt - wd;
                cout<<"\n\nUpdated Balance = Rs."<<amt; 
            } 
            break;
            case 4: 
            pini:
            system("CLS");
            cout<<"Enter your old pin\n\n\n";
            cin>>pw;
            if(pw==ps){
                newp:
                system("CLS");
                cout<<"Enter your new pin\n(For security reasons, your 4 digit pin can't start with the number '0')\n\n\n";
                cin>>eps;
                if(eps<=9999){
                cout<<"\n\n\n\nPin changed successfully";
                ps=eps;
                pw=ps;
                cout<<"\n\n\nPlease login again\n";
                getch();
                goto stt;
                }
                if(eps>9999){
                    cout<<"Pin must not exceed four digits";
                    getch();
                    goto newp; 
                }
            }
            else{
                system("CLS");
                cout<<"Please enter a valid old pin";
                getch();
                goto pini;
            }
            break;
            case 3:
            cout<<"Please enter the amount to be deposited\n";
            cin>>dp;
            cout<<"\n\n\nPlease insert Rs."<<dp<<" into the depository machine\n";
            getch();
            system("CLS");
            amt=amt+dp;
            cout<<"Amount Deposited successfully\n\n\n\n\nUpdated Balance = Rs."<<amt;
            break;
            case 5:
            cout<<"Created and developed by Pratheek Pai\nLanguage used - C++\n\n\n\n\n\nContact the dev\n8431945686\npratheekpaiofcl@outlook.com";
            break;
            case 6:
            exit(0);

            default : cout<<"Please select a valid option";
            getch();
            goto mainmenu;
        }}
        if(pw==ps){
            cout<<"\n\n\n\n\n\n\n1. Back to main menu\n2. Exit \n";
            int jw;
            cin>>jw;
            if(jw==1){
                goto mainmenu;
            }
            else
            exit(0);
            
        }
        
        getch();
        return 0;
}


            


           
        

    