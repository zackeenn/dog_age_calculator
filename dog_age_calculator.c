#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


// this makes the input lowercase for people
// who type YES or Yes or yEs etc
    void tolowercase(char *str) {
        for (int i = 0; str[i]; i++) {
            str[i] = tolower(str[i]);
        }
    }


    // its a class but in C its called struct
    // a struct is a collection of variables
    // when i instanciate it, it asks me to fill in the variables
    // the product of it is an object
    // doggy is the name of the struct
    typedef struct {
        char name[50];
        int age;
        float weight;
    }  doggy;


    // int main is the starting point of the program
int main() 
{

printf("========================================================\n");
printf("           Welcome to the Dog Age Calculator!      \n");
printf("                 _     /)---(\\                   \n");
printf("                 \\\\   (/ . . \\)                  \n");
printf("                  \\\\__)-\\(*)/                    \n");
printf("                  \\_       (_                   \n");
printf("                  (___/-(____)                   \n");
printf("========================================================\n");
printf("      This program will help you calculate         \n");
printf("      your dog's age in human years!               \n\n");


    printf("Write bellow with spaces in between :3\n");
    printf("Please enter your dog's name, age, and weight:\n");

    doggy baby;

    scanf("%49s", baby.name); // limita o tamanho para evitar overflow
    scanf("%d", &baby.age);
    scanf("%f", &baby.weight); // float está correto, não usar %lf

    printf("Your dog's name is %s, age is %d, and weight is %.2f kg.\n", baby.name, baby.age, baby.weight); // %.2f para float

    printf("The name is %s. Is it correct? (yes/no)\n", baby.name);
    char confirmation[10];
    scanf("%s", confirmation);

    if (strcmp(confirmation, "yes") == 0) {
        printf("Great! Let's proceed.\n");
    } else {
        printf("Please restart the program and enter the correct name.\n");
        return 0;
    }

    printf("Do you wanna calculate your dog's age in human years? (yes/no)\n");

    char answer[10];

    scanf("%s", answer);

    tolowercase(answer);
    if (strcmp(answer, "yes") == 0) {
    int human_years = baby.age * 7;
    printf("Your dog's age in human years is %d\n", human_years); // remove espaço extra
    } else {
        printf("Okay, no problem!\n");
    }


    // Tutorial Comment Section
    // \n means new line
    // % it marks a placeholder for a variable
    // d means integer
    // f means float
    // c means character
    // so %d means integer placeholder
    // so %f means float placeholder
    // so %c means character placeholder
    //system("pause");// it doesnt let the console close immediately
    return 0;
}