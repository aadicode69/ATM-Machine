#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p, a, i, n, q, diff, b, e, r, t;
    printf("WELCOME TO THE ATM\n\n");
    printf("Please Select Your Card\n\n");
    printf("1. Punjab National Bank\n");
    printf("2. Bank Of Baroda\n");
    printf("3. Bank Of India\n");
    printf("4. Indian Overseas Bank\n");
    scanf("%d", &q);

    if (q == 1)
    {
        printf("Welcome Mr. XYZ\n");
        printf("> Press 1 to withdraw the money from your Bank's savings account\n");
        printf("> Press 2 to check your Bank balance\n");
        b = 300000;
        scanf("%d", &n);

        if (n == 1)
        {
            printf("Enter the 4-digit pin number: \n");
            scanf("%4d", &p); // Read 4 digits for the pin
            if (p == 1900)
            {
                printf("Enter the amount of money to be withdrawal: \n");
                scanf("%d", &a);
                if (a > b)
                {
                    printf("Insufficient balance to carry out withdrawal\n");
                }
                else
                {
                    printf("Collect your amount\n");
                    printf("Your account has been debited with Rs.%d\n", a);
                    diff = b - a;
                    printf("Now, your current balance is Rs.%d\n", diff);
                }
            }
            else
            {
                printf("Incorrect pin\n");
                printf("Please try again\n");
                scanf("%4d", &p); // Read 4 digits for the pin
                if (p != 1900)
                {
                    printf("Your account has been locked for today. Please try again tomorrow\n");
                }
                else
                {
                    printf("Enter the amount of money to be withdrawal: \n");
                    scanf("%d", &a);
                    if (a > b)
                    {
                        printf("Insufficient balance to carry out withdrawal\n");
                    }
                    else
                    {
                        printf("Collect your amount\n");
                        printf("Your account has been debited with Rs.%d\n", a);
                        diff = b - a;
                        printf("Now, your current balance is Rs.%d\n", diff);
                    }
                }
            }
        }
        else if (n == 2)
        {
            printf("Enter your 4-digit pin: \n");
            scanf("%4d", &p); // Read 4 digits for the pin
            if (p != 1900)
            {
                printf("Wrong Pin Entered\n");
                printf("Please Try Again\n");
                scanf("%4d", &p); // Read 4 digits for the pin
                if (p != 1900)
                {
                    printf("Your account has been locked for today. Please try again tomorrow\n");
                }
                else
                {
                    printf("Your current account balance is Rs.%d\n", b);
                }
            }
            else
            {
                printf("Your current account balance is Rs.%d\n", b);
            }
        }
        else
        {
            printf("Invalid Response\n");
        }
    }
    else if (q == 2)
    {
        // Similar code for Bank Of Baroda
        // ....................................................................................................
        printf("Welcome Mr. XYZ\n");
        printf("> Press 1 to withdraw the money from your Bank's savings account\n");
        printf("> Press 2 to check your Bank balance\n");
        e = 300000;
        scanf("%d", &n);

        if (n == 1)
        {
            printf("Enter the 4-digit pin number: \n");
            scanf("%4d", &p); // Read 4 digits for the pin
            if (p == 1901)
            {
                printf("Enter the amount of money to be withdrawal: \n");
                scanf("%d", &a);
                if (a > e)
                {
                    printf("Insufficient balance to carry out withdrawal\n");
                }
                else
                {
                    printf("Collect your amount\n");
                    printf("Your account has been debited with Rs.%d\n", a);
                    diff = e - a;
                    printf("Now, your current balance is Rs.%d\n", diff);
                }
            }
            else
            {
                printf("Incorrect pin\n");
                printf("Please try again\n");
                scanf("%4d", &p); // Read 4 digits for the pin
                if (p != 1901)
                {
                    printf("Your account has been locked for today. Please try again tomorrow\n");
                }
                else
                {
                    printf("Enter the amount of money to be withdrawal: \n");
                    scanf("%d", &a);
                    if (a > e)
                    {
                        printf("Insufficient balance to carry out withdrawal\n");
                    }
                    else
                    {
                        printf("Collect your amount\n");
                        printf("Your account has been debited with Rs.%d\n", a);
                        diff = e - a;
                        printf("Now, your current balance is Rs.%d\n", diff);
                    }
                }
            }
        }
        else if (n == 2)
        {
            printf("Enter your 4-digit pin: \n");
            scanf("%4d", &p); // Read 4 digits for the pin
            if (p != 1901)
            {
                printf("Wrong Pin Entered\n");
                printf("Please Try Again\n");
                scanf("%4d", &p); // Read 4 digits for the pin
                if (p != 1901)
                {
                    printf("Your account has been locked for today. Please try again tomorrow\n");
                }
                else
                {
                    printf("Your current account balance is Rs.%d\n", e);
                }
            }
            else
            {
                printf("Your current account balance is Rs.%d\n", e);
            }
        }
        else
        {
            printf("Invalid Response\n");
        }
    }
    else if (q == 3)
    {
        // Similar code for Bank Of India
        // ................................................................................................
        printf("Welcome Mr. XYZ\n");
        printf("> Press 1 to withdraw the money from your Bank's savings account\n");
        printf("> Press 2 to check your Bank balance\n");
        r = 300000;
        scanf("%d", &n);

        if (n == 1)
        {
            printf("Enter the 4-digit pin number: \n");
            scanf("%4d", &p); // Read 4 digits for the pin
            if (p == 1902)
            {
                printf("Enter the amount of money to be withdrawal: \n");
                scanf("%d", &a);
                if (a > r)
                {
                    printf("Insufficient balance to carry out withdrawal\n");
                }
                else
                {
                    printf("Collect your amount\n");
                    printf("Your account has been debited with Rs.%d\n", a);
                    diff = r - a;
                    printf("Now, your current balance is Rs.%d\n", diff);
                }
            }
            else
            {
                printf("Incorrect pin\n");
                printf("Please try again\n");
                scanf("%4d", &p); // Read 4 digits for the pin
                if (p != 1902)
                {
                    printf("Your account has been locked for today. Please try again tomorrow\n");
                }
                else
                {
                    printf("Enter the amount of money to be withdrawal: \n");
                    scanf("%d", &a);
                    if (a > r)
                    {
                        printf("Insufficient balance to carry out withdrawal\n");
                    }
                    else
                    {
                        printf("Collect your amount\n");
                        printf("Your account has been debited with Rs.%d\n", a);
                        diff = r - a;
                        printf("Now, your current balance is Rs.%d\n", diff);
                    }
                }
            }
        }
        else if (n == 2)
        {
            printf("Enter your 4-digit pin: \n");
            scanf("%4d", &p); // Read 4 digits for the pin
            if (p != 1902)
            {
                printf("Wrong Pin Entered\n");
                printf("Please Try Again\n");
                scanf("%4d", &p); // Read 4 digits for the pin
                if (p != 1902)
                {
                    printf("Your account has been locked for today. Please try again tomorrow\n");
                }
                else
                {
                    printf("Your current account balance is Rs.%d\n", r);
                }
            }
            else
            {
                printf("Your current account balance is Rs.%d\n", r);
            }
        }
        else
        {
            printf("Invalid Response\n");
        }
    }
    else if (q == 4)
    {
        // Similar code for Indian Overseas Bank
        // .............................................................................................................
        printf("Welcome Mr. XYZ\n");
        printf("> Press 1 to withdraw the money from your Bank's savings account\n");
        printf("> Press 2 to check your Bank balance\n");
        t = 300000;
        scanf("%d", &n);

        if (n == 1)
        {
            printf("Enter the 4-digit pin number: \n");
            scanf("%4d", &p); // Read 4 digits for the pin
            if (p == 1903)
            {
                printf("Enter the amount of money to be withdrawal: \n");
                scanf("%d", &a);
                if (a > t)
                {
                    printf("Insufficient balance to carry out withdrawal\n");
                }
                else
                {
                    printf("Collect your amount\n");
                    printf("Your account has been debited with Rs.%d\n", a);
                    diff = t - a;
                    printf("Now, your current balance is Rs.%d\n", diff);
                }
            }
            else
            {
                printf("Incorrect pin\n");
                printf("Please try again\n");
                scanf("%4d", &p); // Read 4 digits for the pin
                if (p != 1903)
                {
                    printf("Your account has been locked for today. Please try again tomorrow\n");
                }
                else
                {
                    printf("Enter the amount of money to be withdrawal: \n");
                    scanf("%d", &a);
                    if (a > t)
                    {
                        printf("Insufficient balance to carry out withdrawal\n");
                    }
                    else
                    {
                        printf("Collect your amount\n");
                        printf("Your account has been debited with Rs.%d\n", a);
                        diff = t - a;
                        printf("Now, your current balance is Rs.%d\n", diff);
                    }
                }
            }
        }
        else if (n == 2)
        {
            printf("Enter your 4-digit pin: \n");
            scanf("%4d", &p); // Read 4 digits for the pin
            if (p != 1903)
            {
                printf("Wrong Pin Entered\n");
                printf("Please Try Again\n");
                scanf("%4d", &p); // Read 4 digits for the pin
                if (p != 1903)
                {
                    printf("Your account has been locked for today. Please try again tomorrow\n");
                }
                else
                {
                    printf("Your current account balance is Rs.%d\n", t);
                }
            }
            else
            {
                printf("Your current account balance is Rs.%d\n", t);
            }
        }
        else
        {
            printf("Invalid Response\n");
        }
    }
    else
    {
        printf("Invalid Response\n");
    }

    return 0;
}
