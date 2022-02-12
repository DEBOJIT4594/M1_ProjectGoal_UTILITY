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
    int i = 1;
    int res=1;  
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
            printf (" Addition = %.2f", RESULT);  
            break;           
        case 2:                 
            printf ("\n Enter Two Numbers");  
            scanf (" %f", &N1);    
            scanf (" %f", &N2);  
            RESULT = N1 - N2; 
            printf (" Subtraction = %.2f", RESULT);  
            break;             
        case 3:                 
            printf ("\n Enter Two Number");  
            scanf (" %f", &N1);  
              
            scanf (" %f", &N2);  
            RESULT = N1 * N2;   
            printf (" Multiplication = %.2f", RESULT);  
            break;                
        case 4:               
             
            printf ("\n Enter Two Number");  
            scanf (" %f", &N1);      
            scanf (" %f", &N2);  
            if (N2 == 0)  
                {  
                    printf (" \n Second number cannot be zero. Enter correct number ");  
                    scanf ("%f", &N2);        
                }  
            RESULT = N1 / N2;  
            printf (" Division = %.2f", RESULT);  
            break;
        case 5:
            printf ("\n Enter The Number");
            scanf(" %f", &N1);
            RESULT = sin(N1);
            printf (" Sin of %f =  %.2f", N1, RESULT);
            break;  
        case 6:
             printf ("\n Enter The Number");
            scanf(" %f", &N1);
            RESULT = cos(N1);
            printf (" Cos of %f =  %.2f", N1, RESULT);
            break;  
        case 7:                 
            printf ("\n Enter The Number");  
            scanf (" %f", &N1);               
            RESULT = sqrt(N1);   
            printf (" Square Root of %f = %.2f", N1, RESULT);  
            break;    
        case 8:
            printf ("\n Enter Two Numbers");
            scanf(" %d", &n1); 
            scanf(" %d", &n2);
            RESULT = pow(n1,n2);
            printf (" Power of %d = %f", n1, RESULT);
            break;
        case 9:
            printf ("\n Enter a Number");
            scanf(" %d", &n1); 
           
            while (i<=n1)
            {
            res*=i;
            n1++;
            }
            printf("Factorial of %d = %d ",n1,res);
            break;
        case 10:
            printf("\n Enter Two Number");
            scanf(" %f", &N1); 
            scanf(" %f", &N2);
            RESULT =N1*(N2/100);
            printf("The percentage of %f = %f ", N1, RESULT);
            break;
        case 11:                           
            printf ("\n Enter The Number");  
            scanf (" %f", &N1);   
            RESULT = N1 * N1; 
            printf (" Square of %f = %.2f", N1, RESULT);  
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
    } while (option != 12);  
     return 0;        
}