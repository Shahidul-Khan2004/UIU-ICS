/*Write a program where you have to type your own UIU student ID, if the ID is valid, it will ask
you to enter your password. Suppose your password is the ASCII value of your nickname. Now
it will check whether your password is a positive number or negative or zero. If the password
is a positive number, the program will print your date of Birth, otherwise, the program will
print Incorrect Password. If the ID does not exist, the program will print Incorrect ID. [Hint:
Define ID, Password at top]*/

#include <stdio.h>

#define studentID 112430301
#define password 65

int main (void) {
    int id, pass;
    printf("Enter your student ID: ");
    scanf("%d", &id);
    switch (id)
    {
    case studentID:
        printf("Enter your password: ");
        scanf("%d", &pass);
        switch (pass > 0)
        {
        case 1:
            printf("Your date of birth is: 18/06/2004");
            break;
        
        default:
            printf("Incorrect Password");
            break;
        }
        break;
    
    default:
        printf("Incorrect ID");
        break;
    }
}