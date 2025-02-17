#include <stdio.h>
#include <math.h>

int main()
{

    float addition, subtraction, multiplication, division;
    int choice, n, a, b, c;
    float i, j, root, root1, root2;
    long long factorial = 1;
    char operation;

    while (1)
    {

        printf("\nchoose operation:");
        printf("\n1.addition");
        printf("\n2.subtraction");
        printf("\n3.multiplication");
        printf("\n4.division");
        printf("\n5.factorial");
        printf("\n6.quadratic roots");
        printf("\n7.modulo");
        printf("\n8.exit");
        printf("\nenter your choice:");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("enter first number:");
            scanf("%f", &i);

            printf("enter second number:");
            scanf("%f", &j);
            addition = i + j;
            printf("\nthe value is:%.2f", addition);
        }
        else if (choice == 2)
        {
            printf("enter first number:");
            scanf("%f", &i);

            printf("enter second number:");
            scanf("%f", &j);
            subtraction = i - j;
            printf("\nthe value is:%.2f", subtraction);
        }
        else if (choice == 3)
        {
            printf("enter first number:");
            scanf("%f", &i);

            printf("enter second number:");
            scanf("%f", &j);
            multiplication = i * j;
            printf("\nthe value is:%.2f", multiplication);
        }
        else if (choice == 4)
        {
            printf("enter first number:");
            scanf("%f", &i);

            printf("enter second number:");
            scanf("%f", &j);
            if (j != 0)
            {
                division = i / j;
                printf("\nThe value is: %.2f", division);
            }
            else
            {
                printf("\nError! Division by zero is not allowed.");
            }
        }
        else if (choice == 5)
        {

            printf("enter the value:");
            scanf("%d", &n);
            if (n == 0)
            {
                printf("\nthe factorial is:1 ");
            }
            else
            {
                for (int i = 1; i <= n; i++)
                {
                    factorial *= i;
                }

                printf("\nthe factorial of %d is %lld:", n, factorial);
            }
        }
        else if (choice == 6)
        {
            printf("enter the coefficients of a,b,c:\n");
            scanf("%d %d %d", &a, &b, &c);
            if (a == 0) {
                printf("Invalid input! a cannot be zero in a quadratic equation.\n");
            }else{
            int discriminant = b * b - (4 * a * c);
            if (discriminant < 0)
            {
                printf("roots are imaginary!\n");
            }
            else if (discriminant > 0)
            {
                root1 = (-b + sqrt(discriminant)) / (2.0 * a);
                root2 = (-b - sqrt(discriminant)) / (2.0 * a);
                printf("the roots are real and distinct and has two roots.%.2f %.2f\n", root1, root2);
            }
            else{
                root = -b / (2.0 * a);
            printf("The quadratic equation has only one root: %.2f\n", root);
            }
        }
        }
        else if (choice == 7)
        {
            printf("enter first number:");
            scanf("%d", &a);
            printf("enter second number:");
            scanf("%d", &b);
            if (b != 0)
            {
                int modulo = a % b;
                printf("The modulo of %d %% %d is: %d\n", a, b, modulo);
            }
            else
            {
                printf("Error! Modulo by zero is not allowed.\n");
            }
        }
        else if (choice == 8)
        {
            printf("thankyou!");
            break;
        }
        else
        {
            printf("invalid option, please try again!");
        }
    }
    return 0;
}