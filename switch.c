/* This program will ask an ID and password and will match
those ID and password by using switch. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ID;
    int password;
    printf("Enter your ID:");
    scanf("%d", &ID);
    switch(ID)
    {
    case 10:
        printf("enter your password: ");
        scanf("%d", &password);
        switch(password)
        {
        case 101:
            printf("welcome to our website!!");
            break;
        default:
            printf("Incorrect password!!");
            break;
        }
        break;
    default:
        printf("wrong ID!!");
        break;
    }
    return 0;
}
