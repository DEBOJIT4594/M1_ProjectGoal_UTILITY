#include <stdio.h>  
#include <math.h>  
#include <stdlib.h>  
  
int main()  
{   
    int option;
    float N1;
    float N2; 
    int n1;
    int n2; 
    float RESULT;  
    do  
    {  
        printf ("Select Operation");  
        printf ("\n1 Addition  \n2 Subtraction  \n3 Multiplication  \n4 Division  \n5 Sin \n6 Cos  \n7 Square Root  \n8 Power  \n9 Factorial  \n10 Percentage   \n11 Square  \n12 Please, Make a choice ");              
        scanf ("%d", &option);  
    switch (option)  
    {  
        case 1:             
            printf ("\n Enter Two Numbers");  
            scanf (" %f", &N1);   
            scanf (" %f", &N2);  
            RESULT = N1 + N2; 
            printf (" Addition of two numbers is: %.2f", RESULT);  
            break;           
        case 2:                 
            printf ("\n Enter Two Numbers");  
            scanf (" %f", &N1);    
            scanf (" %f", &N2);  
            RESULT = N1 - N2; 
            printf (" Subtraction of two numbers is: %.2f", RESULT);  
            break;             
        case 3:                 
            printf ("\n Enter Two Number");  
            scanf (" %f", &N1);  
              
            scanf (" %f", &N2);  
            RESULT = N1 * N2;   
            printf (" Multiplication of two numbers is: %.2f", RESULT);  
            break;                
        case 4:               
             
            printf ("\n Enter Two Number");  
            scanf (" %f", &N1);      
            scanf (" %f", &N2);  
            if (N2 == 0)  
                {  
                    printf (" \n Divisor cannot be zero. Please enter another value ");  
                    scanf ("%f", &N2);        
                }  
            RESULT = N1 / N2;  
            printf (" Division of two numbers is: %.2f", RESULT);  
            break;
        case 5:
            printf ("\n Enter The Number");
            scanf(" %f", &N1);
            RESULT = sin(N1);
            printf (" Sin of %f is : %.2f", N1, RESULT);
            break;  
        case 6:
             printf ("\n Enter The Number");
            scanf(" %f", &N1);
            RESULT = cos(N1);
            printf (" Cos of %f is : %.2f", N1, RESULT);
            break;  
        case 7:                 
            printf ("\n Enter The Number");  
            scanf (" %f", &N1);               
            RESULT = sqrt(N1);   
            printf (" Square Root of %f  is: %.2f", N1, RESULT);  
            break;    
        case 8:
            printf ("\n Enter Two Numbers");
            scanf(" %d", &n1); 
            scanf(" %d", &n2);
            RESULT = pow(n1,n2);
            printf (" Power of %d is: %d", n1, RESULT);
            break;
        case 9:
            printf ("\n Enter Two Numbers");
            scanf(" %f", &N1); 
            scanf(" %f", &N2);
            while (N2>0)
            {
            RESULT = N1*N2;
            N2--;
            }
            printf("Factorial of %f is: %f ",N1,RESULT);
            break;
        case 10:
            printf("\n Enter Two Number");
            scanf(" %f", &N1); 
            scanf(" %f", &N2);
            RESULT =N1*(N2/100);
            printf("The percentage of %f is: %f ", N1, RESULT);
            break;
        case 11:                           
            printf ("\n Enter The Number");  
            scanf (" %f", &N1);   
            RESULT = N1 * N1; 
            printf (" Square of %f is: %.2f", N1, RESULT);  
            break;                                    
        case 12:  
            printf (" You chose: Exit");  
            exit(0);   
            break;            
        default:  
            printf(" ERROR ");  
            break;                        
    }  
    printf (" \n \n*END* \n \n ");  
    } while (option != 7);  
     return 0;        
}