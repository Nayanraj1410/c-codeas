#include<stdio.h>
int main()
{
    int a,b,choice;
    
    printf("enter your choice:\n");
    printf("1.addition\n2.subtraction\n3.multiplication\n4.division\n5.square\n");
    scanf("%d",&choice);

    // Read the first input
    printf("Enter the first number: ");
    scanf("%d", &a);

    // Read the second input if needed
    if (choice != 5) {
        printf("Enter the second number: ");
        scanf("%d", &b);
    }
    
    switch(choice)
    {
        case 1:printf("%d + %d = %d\n",a,b,(a+b));
        break;
        case 2:printf("%d - %d = %d\n",a,b,(a-b));
        break;
        case 3:printf("%d * %d = %d\n",a,b,(a*b));
        break;
        case 4:if(b != 0)
        {
        printf("%d / %d = %d\n",a,b,(a/b));
        }
        else
        {
            printf("The number is not divisible by 0\n");
        }
        break;
        case 5:printf("%d^2 = %d\n",a,(a*a));
        break;
        default:printf("Invalid choice\n");
    }
    return 0;
}

// #include <stdio.h>
// void add()
// {
//     int a, b;
//     printf("Enter the numbers:\n");
//     printf("Enter a:");
//     scanf("%d", &a);
//     printf("Enter b:");
//     scanf("%d", &b);
//     printf("%d + %d = %d", a, b, a + b);
// }
// void sub()
// {
//     int a, b;
//     printf("Enter the numbers:\n");
//     printf("Enter a:");
//     scanf("%d", &a);
//     printf("Enter b:");
//     scanf("%d", &b);
//     printf("%d - %d = %d", a, b, a - b);
// }
// void mult()
// {
//     int a, b;
//     printf("Enter the numbers:\n");
//     printf("Enter a:");
//     scanf("%d", &a);
//     printf("Enter b:");
//     scanf("%d", &b);
//     printf("%d * %d = %d", a, b, a * b);
// }
// void div()
// {
//     float a, b;
//     printf("Enter the numbers:\n");
//     printf("Enter a:");
//     scanf("%f", &a);
//     printf("Enter b:");
//     scanf("%f", &b);
//     if (b == 0)
//     {
//         printf("Not possible");
//     }
//     else
//     {
//         printf("%.0f / %.0f = %.2f", a, b, a / b);
//     }
// }
// void sqr()
// {
//     int a;
//     printf("Enter the numbers:\n");
//     printf("Enter a:");
//     scanf("%d", &a);
//     printf("square of %d is %d", a, a * a);
// }
// int main()
// {
//     int opt;
//     do
//     {
//         printf("\nCalculator Menu:\n");
//         printf("1. Addition\n");
//         printf("2. Subtraction\n");
//         printf("3. Multiplication\n");
//         printf("4. Division\n");
//         printf("5. Square\n");
//         printf("For Exit Press 0\n");
//         printf("Enter your choice: ");
//         scanf("%d", &opt);

//         switch (opt)
//         {
//         case 1:
//             add();
//             break;
//         case 2:
//             sub();
//             break;
//         case 3:
//             mult();
//             break;
//         case 4:
//             div();
//             break;
//         case 5:
//             sqr();
//             break;
//         default:
//             printf("Invalid choice. Please enter a valid option.\n");
//         }
//     } while (opt != 0);
//     return 0;
// }
    
