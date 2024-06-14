# ATM-Machine
#ATM Simulation Program

#_**Overview**_
This repository contains a simple ATM simulation program written in C. The program allows users to perform basic banking operations such as checking account balance and withdrawing money from their bank accounts. The simulation supports multiple banks, each with predefined account balances and PIN codes.

#_**Features**_
Bank Selection: Users can select from four different banks:
  -Punjab National Bank
  -Bank of Baroda
  -Bank of India
  -Indian Overseas Bank
Account Operations:
  -Withdraw money from the savings account.
  -Check account balance.
  -PIN Verification: Ensures secure access to account operations by verifying a 4-digit PIN.
  -Account Lock: Locks the account for the day after two incorrect PIN attempts.

#_**Program Flow**-
1. The program starts by displaying a welcome message and prompts the user to select their bank.

2. Based on the bank selection, the user is greeted and given options to either withdraw money or check their account balance.

3. If the user chooses to withdraw money:
   >The program prompts for a 4-digit PIN.
   >If the PIN is correct, the user is asked to enter the withdrawal amount.
   >The program checks if the account balance is sufficient and either dispenses the money or shows an insufficient balance message.

4. If the user chooses to check the balance:
   >The program prompts for the 4-digit PIN.
   >If the PIN is correct, the current account balance is displayed.

5. If the PIN is entered incorrectly twice, the account is locked for the day.

