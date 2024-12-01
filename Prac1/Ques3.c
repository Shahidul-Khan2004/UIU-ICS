#include <stdio.h>
#include <ctype.h>

int main (void) {
    int Student_ID;
    char Section;
    printf("Enter your student ID: ");
    //varifying ID
    if(scanf("%d", &Student_ID) != 1) {
        printf("Invalid ID!");
        return 1;
    }
    printf("Enter your section: ");
    scanf(" %c", &Section);
    //varifying Section
    if (isalpha(Section) == 0) {
        printf("Invalid Section!");
        return 1;
    }
    printf("Your student ID is: %010d and your section is: %c", Student_ID, toupper(Section)); 
    /*I used %010d (print 10 digits) because my ID has a leading 0 and was being considered an octal number. 
    Thus the leading 0 wasn't being printed.*/
}