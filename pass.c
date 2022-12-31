#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* create a function to get the randomly generated password */

void password(int password_length) {

    /* To generate the password we need a place from where we can grab random numbers, alphabets and symbols. That is why we created the array list. */

    char list[] = "1234567890qwertyuiopasdfghjklzxcvbnm!@#$%^&*()_- +=QWERTYUIOPASDFGHJKLZXCVBNM[]{};':\"<>,.?/|";

    printf("\t");
    for(int i = 0; i < password_length; i++) {
        printf("*");
    }
    printf("\n");
    printf("\t");

    /* srand() stands for seeding. A value given for the seed will generate different output based on the value of the seed.
    and to set a seed value which will change every time we run the program, we use the time() method 
    so that even after assigning the value of the seed it will not repeat the same output*/

    srand(time(NULL));

    /* The below "for loop" generates a letter or a symbol or an alphabet in every iteration until the password length entered by the user is reached. */
    /* by randomly selection from the character list using the rand() method */

    for(int i = 0; i < password_length; i++) {
        printf("%c", list[rand() % (sizeof list - 1)]);
    }

    printf("\n");
    printf("\t");
    for(int i = 0; i < password_length; i++) {
        printf("*");
    }
    printf("\n");
}

int main() {
    int password_length;
    printf("\n\t*********************************\n\n");
    printf("\tWelcome to the password generator\n\n");
    printf("\t*********************************\n");
    printf("\n\tEnter length of the password = ");
    scanf("%d", &password_length);   //Take input of the password length.
    printf("\n");
    printf("\n");
    password(password_length);   //pass the length of the password into the generating function.
    return 0;
}