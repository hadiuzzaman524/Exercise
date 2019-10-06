#include<stdio.h>

#include<stdlib.h>

#include<math.h>


int main()
{

    int menu_choice, i, j, a, b;
    int choice;
    float x, y, result;
menu_choice:

    printf("\n --------------------------------------------------\n\n");

    printf("Select your operation(0 to exit): \t |\n");

    printf("1. Addition  \n2. Subtraction \n3. Multiplication \n");
    printf("4. Division \n5. Square root \n6. X ^ Y \n7. X ^ 3 \n");
    printf("8. 1 / X \n9. X ^ (1 / Y) \n10. 10 ^ X \n11. X! \n12. % \n");
    printf("13. log10(x) \n14. Modulas \n15. Sin(X) \n16. Cos(x) \n");
    printf("17. Tan(X) \n18. Cosec(X)\n19. Cot(X) \n20. Sec(X) \n");
    printf("\n -------------------------------------------------- \n");
    printf("Choice: ");

    scanf("%d", &choice);


    if(choice==1)
    {
        system("CLS");


        int n;
        printf("how many number you want to addition:  ");
        scanf("%d",&n);
        int b;
        int sum=0;
        int i;
        for( i=0; i<n; i++)
        {
            //printf("enter %d",i+1);
            scanf("%d",&b);
            sum=sum+b;
        }
        printf("\n Result: %d \n", sum);
    }

    if(choice==2)
    {
        system("CLS");
        printf("Enter X: ");
        scanf("%f", &x);

        printf("\nEnter Y: ");
        scanf("%f", &y);

        result = x - y;
        printf("\nResult: %f\n", result);



    }


    if(choice==3)
    {
        system("CLS");
        printf("Enter X: ");
        scanf("%f", &x);
        printf("\nEnter Y: ");
        scanf("%f", &y);
        result = x * y;
        printf("\nResult: %f\n", result);
    }



    if(choice==4)
    {
        system("CLS");
        printf("Enter X: ");
        scanf("%f", &x);
        printf("\nEnter Y: ");
        scanf("%f", &y);
        result = x / y;
        printf("\n Result: %f \n", result);
    }



    if(choice==5)
    {
        system("CLS");
        printf("Enter X: ");
        scanf("%f", &x);
        result = sqrt(x);
        printf("\nResult: %f\n", result);
    }



    if(choice==6)
    {
        system("CLS");
        printf("Enter X: ");
        scanf("%f", &x);
        printf("\nEnter Y: ");
        scanf("%f", &y);
        result= pow(x, y);
        printf("\nResult: %f\n", result);
    }

    if(choice==7)
    {
        system("CLS");
        printf("Enter X: ");
        scanf("%f", &x);
        result = pow(x, 3);
        printf("\nResult: %f\n", result);
    }


    if(choice==8)
    {
        system("CLS");
        printf("Enter X: ");
        scanf("%f", &x);
        result = pow(x, -1);
        printf("\nResult: %f\n", result);
    }

    if(choice==9)
    {
        system("CLS");
        printf("Enter X: ");
        scanf("%f", &x);
        printf("\nEnter Y: ");
        scanf("%f", &y);
        result = pow(x, (1 / y));
        printf("\nResult: %f\n", result);
    }

    if(choice==10)
    {
        system("CLS");
        printf("Enter X: ");
        scanf("%f", &x);
        result = pow(10, x);
        printf("\nResult: %f\n", result);
    }


    if(choice==11)
    {
        system("CLS");
        printf("Enter X: ");
        scanf("%f", &x);
        result = 1;
        for(i = 1; i <= x; i++)
        {
            result = result * i;
        }
        printf("\nResult: %f\n", result);
    }
    if(choice==12)
    {
        system("CLS");

        printf("Enter X: ");
        scanf("%f", &x);
        printf("\nEnter Y: ");
        scanf("%f", &y);
        result = (x * y) / 100;
        printf("\nResult: %f\n", result);
    }


    if(choice==13)
    {
        system("CLS");
        printf("Enter X: ");
        scanf("%f", &x);
        result = log10(x);
        printf("\nResult: %f\n", result);
    }
    if(choice==14)
    {
        system("CLS");
        printf("\nEnter a: ");
        scanf("%f", &a);
        printf("\nEnter b: ");
        scanf("%f", &b);
        result = a % b;
        printf("\nResult: %f\n", result);
    }
    if(choice==15)
    {
        system("CLS");
        printf("Enter X: ");
        scanf("%f", &x);
        result = sin(x * 3.1416 / 180);
        printf("\nResult: %f\n", result);
    }


    if(choice==16)
    {
        system("CLS");
        printf("Enter X: ");
        scanf("%f", &x);
        result = cos(x * 3.1416 / 180);
        printf("\nResult: %.2f\n", result);
    }


    if(choice==17)
    {
        system("CLS");
        printf("Enter X: ");
        scanf("%f", &x);
        result = tan(x * 3.1416 / 180);
        printf("\nResult: %.2f\n", result);
    }

    if(choice==18)
    {
        system("CLS");
        printf("Enter X: ");
        scanf("%f", &x);
        result = 1 / sin(x * 3.1416 / 180);
        printf("\nResult: %.2f\n", result);
    }


    if(choice==19)
    {
        system("CLS");
        printf("Enter X: ");
        scanf("%f", &x);
        result = 1 / tan(x * 3.1416 / 180);
        printf("\nResult: %.2f\n", result);
    }

    if(choice==20)
    {
        system("CLS");
        printf("Enter X: ");
        scanf("%f", &x);
        result = 1 / cos(x * 3.1416 / 180);
        printf("\nResult: %.2f\n", result);
    }





    return 0;
}

