import os
ps = "2023"
am = 43000
def cls():
    os.system("cls")
def entrance():
  cls()
  print("\t\t\t\t\t\t\t\t\t\t\tBANK OF PAI\n\n\nPlease insert your ATM/Debit card")
  input()
  cls()
  print("Enter your Four digit pin\n\n")
  pw=input()
  if pw == ps:
     login()
  else:
     fail()
def login():
    cls()
    print("\t\t\tPLEASE SELECT THE SERVICE YOU WANT TO AVAIL\n\n\n\n")
    print("*** 1. Check Balance\t\t\t\t\t\t\t4. Change the pin ***\n")
    print("*** 2. Withdraw amount\t\t\t\t\t\t        5. Credits        ***\n")
    print("*** 3. Deposit amount\t\t\t\t\t\t        6.Exit            ***\n")
    op = int(input())
    cls()
    if op == 1:
       m1()
    if op == 2:
       m2()
    if op == 3:
       m3()
    if op == 4:
       m4()
    if op == 5:
       m5()
    if op == 6:
       m6()
    rip()
def m1():
   global am
   print(f"BALANCE = Rs.{am}")
def m2():
   global am
   wd=int(input("Enter the amount to be withdrawn = "))
   print("Withdrawl successful \n\nPlease take the cash\n")
   am-=wd
   print(f"Updated Balance = Rs.{am}")
def m3():
   global am
   dep = int(input("Please enter the amount to be deposited\n"))
   print(f"\n\n\nPlease insert Rs.{dep} into the depository machine")
   input()
   cls()
   am+=dep
   print(f"Amount Deposited successfully\n\n\nUpdated Balance = Rs.{am}")
def m4():
   global ps
   print("Enter your old password\n")
   pp = input()
   if(pp == ps):
      cls()
      print("Enter your new pin\n")
      ps = input()
      print("Pin Changed Successfully\n\nPlease login again")
      entrance()
   cls()
   print("Incorrect old pin")
   input()
   m4()
def m5():
   print("Created and developed by Pratheek Pai")
   print("Language used - Python\n\n\n\n")
   print("Contact the Dev -\n8431945686\npratheekpaiofcl@outlook.com")
def m6():
   cls()
   exit()
def fail():
   global ps
   cls()
   print("Incorrect pin entered\n Please try again\n\n")
   i = 3
   for i in reversed(range(4)):
      cls()
      print(f"Attempts left = {i} ")
      pw = input("Enter the four digit pin\n")
      if pw == ps:
         login()
      if i == 1:
         ban()
def ban():
   cls()
   print("Your ATM card has been blocked")
   print("Please visit the nearest branch to re-activate the card.")
   exit()
def rip():
    print("\n\n\n\n\n1. Return to Login")
    print("2. Exit")
    option = input()
    if option == '1':
        login()
    else:
        m6()
entrance()



   


 



    



   
   
    
  
  



         
    
    
   

  
        