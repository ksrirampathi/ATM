#include<stdio.h>

int main() {
    char card;
    int n;
    int p;
    int a;
    int b;
    int diff;
    int i;
    
    printf("Welcome To The ATM\n\n");
    printf("Please Insert your card (k/s/i): \n\n");
    scanf(" %c", &card);
    
    if(card == 'k') {
        printf("Hello Ken Keneki\n\n");
        printf(">Press 1 to withdrawal the money from your account\n\n");
        printf(">Press 2 to check the balance\n\n");
        b = 50000;
        scanf("%d", &n);

        if(n == 1) {
            printf("Please enter your 4-digit pin : \n");
            scanf("%d", &p);

            if(p == 1234) {
                printf("Enter the amount to be withdrawal : \n");
                scanf("%d", &a);

                if(a > b) {
                    printf("Insufficient balance\n");
                }
                else {
                    printf("Collect the money\n\n");
                    diff = b - a;
                    printf("Now, your bank balance is %d\n", diff);
                }
            }
            else {
                printf("Incorrect pin\n\n");
                printf("Please try again\n\n");
                scanf("%d", &p);
                if(p == 1234) {
                    printf("Enter the amount to be withdrawal : \n");
                    scanf("%d", &a);

                    if(a > b) {
                        printf("Insufficient balance\n");
                    }
                    else {
                        printf("Collect the money\n\n");
                        diff = b - a;
                        printf("Now, your bank balance is %d\n", diff);
                    }
                }
                else {
                    printf("Your request has been blocked\n");
                    printf("Please try again later\n");
                }
            }
        }
        else if(n == 2) {
            printf("Please enter your 4-digit pin : \n");
            scanf("%d", &p);
            if(p != 1234) {
                printf("Incorrect pin. Please try again\n\n");
                scanf("%d", &p);
                if(p != 1234) {
                    printf("Your request has been blocked\n");
                    printf("Please try again later\n");
                }
                else {
                    printf("Your bank balance is %d\n", b);
                }
            }
            else {
                printf("Your bank balance is %d\n", b);
            }
        }
    }
    else if(card == 's') {
        printf("Hello Sasuke Uchiha\n\n");
        printf(">Press 1 to withdrawal the money from your account\n\n");
        printf(">Press 2 to check the balance\n\n");
        b = 100000;
        scanf("%d", &n);
        
        if(n == 1) {
            printf("Please enter your 4-digit pin : \n");
            scanf("%d", &p);
            if(p == 5678) {
                printf("Enter the amount to be withdrawal : \n");
                scanf("%d", &a);
                if(a > b) {
                    printf("Insufficient balance\n");
                }
                else {
                    printf("Collect the money\n\n");
                    diff = b - a;
                    printf("Now, your bank balance is %d\n", diff);
                }
            }
            else {
                printf("Incorrect pin\n\n");
                printf("Please try again\n\n");
                scanf("%d", &p);
                if(p == 5678) {
                    printf("Enter the amount to be withdrawal : \n");
                    scanf("%d", &a);
                    if(a > b) {
                        printf("Insufficient balance\n");
                    }
                    else {
                        printf("Collect the money\n\n");
                        diff = b - a;
                        printf("Now, your bank balance is %d\n", diff);
                    }
                }
                else {
                    printf("Your request has been blocked\n");
                    printf("Please try again later\n");
                }
            }
        }
        else if(n == 2) {
            printf("Please enter your 4-digit pin : \n");
            scanf("%d", &p);
            if(p != 5678) {
                printf("Incorrect pin. Please try again\n\n");
                scanf("%d", &p);
                if(p != 5678) {
                    printf("Your request has been blocked\n");
                    printf("Please try again later\n");
                }
                else {
                    printf("Your bank balance is %d\n", b);
                }
            }
            else {
                printf("Your bank balance is %d\n", b);
            }
        }
    }
    else if(card == 'i') {
        printf("Hello Itachi Uchiha\n\n");
        printf(">Press 1 to withdrawal the money from your account\n\n");
        printf(">Press 2 to check the balance\n\n");
        b = 60000;
        scanf("%d", &n);
        
        if(n == 1) {
            printf("Please enter your 4-digit pin : \n");
            scanf("%d", &p);
            if(p == 9123) {
                printf("Enter the amount to be withdrawal : \n");
                scanf("%d", &a);
                if(a > b) {
                    printf("Insufficient balance\n");
                }
                else {
                    printf("Collect the money\n\n");
                    diff = b - a;
                    printf("Now, your bank balance is %d\n", diff);
                }
            }
            else {
                printf("Incorrect pin\n\n");
                printf("Please try again\n\n");
                scanf("%d", &p);
                if(p == 9123) {
                    printf("Enter the amount to be withdrawal : \n");
                    scanf("%d", &a);
                    if(a > b) {
                        printf("Insufficient balance\n");
                    }
                    else {
                        printf("Collect the money\n\n");
                        diff = b - a;
                        printf("Now, your bank balance is %d\n", diff);
                    }
                }
                else {
                    printf("Your request has been blocked\n");
                    printf("Please try again later\n");
                }
            }
        }
        else if(n == 2) {
            printf("Please enter your 4-digit pin : \n");
            scanf("%d", &p);
            if(p != 9123) {
                printf("Incorrect pin. Please try again\n\n");
                scanf("%d", &p);
                if(p != 9123) {
                    printf("Your request has been blocked\n");
                    printf("Please try again later\n");
                }
                else {
                    printf("Your bank balance is %d\n", b);
                }
            }
            else {
                printf("Your bank balance is %d\n", b);
            }
        }
    }
    else {
        printf("Invalid card\n");
    }
    
    return 0;
}