#include <stdio.h>

int Addition(int*);
int Subtraction(int*);
int Multiplication(int*);
float Division(float*, float*);

int main() {

    int user_input, answer;
    char input;
    float q, r;

    printf("====================================================================");
    printf("\nWelcome to Console Calculator, please choose your desired options:\n");
    printf("[1] << Addition\n[2] << Subtraction\n[3] << Multiplication\n[4] << Division\n[5] << Exit\n");
    printf("------> ");
    scanf("%d", &user_input);

    switch(user_input) {

        case 1:
            printf("\nThe sum is: %d\n", Addition(&answer));
            break;
            

        case 2:
            printf("\nThe difference is: %d\n", Subtraction(&answer));
            break;

        case 3:
            printf("\nThe product is: %d\n", Multiplication(&answer));
            break;

        case 4:
            Division(&q, &r);
            printf("\nThe quotient is: %.2f\n", q);
            printf("And the remainder is: %.2f\n", r);
            break;

        case 5:
            printf("\nThank you for using me!");
            return 0;
    }
    
    printf("\nDo you wish to use the calculator again?\n");
    printf("-----> ");
    scanf("%s", &input);

    if(input == 'Y') {
        main();
    }

    else if(input == 'N') {
        printf("\nOkay, see you again!");
        return 0;
    }
}

int Addition(int *sum) {
    
    int a1, a2;

    printf("\nPlease Enter your first addend\n");
    printf("-----> ");
    scanf("%d", &a1);

    printf("Please Enter your second addend\n");
    printf("-----> ");
    scanf("%d", &a2);

    return *sum = a1 + a2;
}

int Subtraction(int *diff) {

    int s1, s2;

    printf("\nPlease Enter your Minuend\n");
    printf("-----> ");
    scanf("%d", &s1);

    printf("Please Enter your Subtrahend\n");
    printf("-----> ");
    scanf("%d", &s2);

    return *diff = s1 - s2;
}

int Multiplication(int *pro) {

    int m1, m2;

    printf("\nPlease Enter your Multiplicand\n");
    printf("-----> ");
    scanf("%d", &m1);

    printf("Please Enter your Multiplier\n");
    printf("-----> ");
    scanf("%d", &m2);

    return *pro = m1 * m2;
}

float Division(float *quo, float *remain) {

    int d1, d2;

    printf("\nPlease Enter your Dividend\n");
    printf("-----> ");
    scanf("%d", &d1);

    printf("Please Enter Divisor\n");
    printf("-----> ");
    scanf("%d", &d2);

    return *quo = d1 / d2, *remain = d1 % d2;
}
