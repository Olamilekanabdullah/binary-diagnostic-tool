#include <stdio.h>

int main() {
    int number, option, bit_position;
    printf("Enter an integer you'll like to diagnose: ");
    scanf("%d", &number);
    printf("\n");

    while (number < 0 || number > 65535) {
        printf("Invalid number. Enter a number in the unsigned 16-bit range (between 0 and 65535): ");
        scanf("%d", &number);
        printf("\n");
    }

    do {
    printf("What would you like to analyze about the number?\n");
    printf("Enter 1 to see the 16-bit binary display \n");
    printf("Enter 2 to count how many bits are 1 \n");
    printf("Enter 3 to check if it is an even or odd number \n");
    printf("Enter 4 to see if it is a power of 2 \n");
    printf("Enter 5 to left-shift the number \n");
    printf("Enter 6 to right-shift the number \n");
    printf("Enter 7 to set a certain bit \n");
    printf("Enter 8 to clear a certain bit \n");
    printf("Enter 9 to toggle a certain bit \n");
    printf("Enter 10 to check if a certain bit is set \n");
    printf("Enter 11 to quit \n");
    printf("\n");
    printf("Your option: ");
    scanf("%d", &option);
    printf("\n");

    while (option < 1 || option > 11) {
        printf("Invalid. Enter a valid option: ");
        scanf("%d", &option);
        printf("\n");
    }


    switch (option) {

    case 1:  for (int i = 15; i >=0; i--) {

        printf("%d", ((number >> i) & 1));

    }
    printf("\n");

    break;

    case 2: int count = 0;
            for (int i = 15; i >=0; i--) {
                if ((number >> i) & 1) {
                    count++;
                }
            }
            printf("%d\n", count);

    break;

    case 3: int type;
            type = number & 1;

            if (type) {
                printf("It is an odd number. \n");
            }

            else {printf("It is an even number. \n");}

    break;

    case 4: int check;
            check = (number > 0) && (number & (number - 1)) == 0;
            if (check) {
                printf("It is a power of 2. \n");
            }

            else {printf("It is not a power of 2. \n");}

    break;


    case 5: number = (number << 1) & 0xFFFF;
            for (int i = 15; i >=0; i--) {

        printf("%d", ((number >> i) & 1));

    }
    printf("\n");

    break;

    case 6: number = (number >> 1) & 0xFFFF;
            for (int i = 15; i >=0; i--) {

        printf("%d", ((number >> i) & 1));

    }
    printf("\n");

    break;

    case 7: printf("Which bit position do you want to set? \n");
            scanf ("%d", &bit_position);

            number = number | (1 << bit_position);
            for (int i = 15; i >=0; i--) {

        printf("%d", ((number >> i) & 1));

    }
    printf("\n");

    break;

    case 8: printf("Which bit position do you want to clear? \n");
            scanf ("%d", &bit_position);

            number = number & ~(1 << bit_position);
            for (int i = 15; i >=0; i--) {

        printf("%d", ((number >> i) & 1));

    }
    printf("\n");

    break;

    case 9: printf("Which bit position do you want to toggle? \n");
            scanf ("%d", &bit_position);

            number = number ^ (1 << bit_position);
            for (int i = 15; i >=0; i--) {

        printf("%d", ((number >> i) & 1));

    }
    printf("\n");

    break;

    case 10: printf("Which bit position do you want to check? \n");
            scanf ("%d", &bit_position);

            int result;
            result = ((number & (1 << bit_position)) != 0);
            if (result){
                printf("The bit is set!\n");
            }

            else {printf ("The bit is not set!\n");}

    break;


    case 11: printf("We quit.");
    break;

}
    } while (option != 11);



return 0;
}
