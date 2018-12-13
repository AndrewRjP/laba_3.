#include <stdio.h>
#include <math.h>
#define N 30
#define EPS 0.0001

long int factorial(long int n)
{
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int main()
{   
    printf("X\t\t"); printf("SN\t\t"); printf("SE\t\t"); printf("Y\n");
    
    for (float i = 0.1; i < 1.1; i += 0.1)
    {   
        double y, sN = 0, sE = 0, exp(double x);
        
        y = ((pow(i, 2) / 4) + (i / 2) + 1) * exp(i / 2);
        
        for (int j = 0; j <= N; j++)         
            sN += ((pow(j, 2) + 1) / factorial(j)) * pow(i / 2, j);
            
        int j = 0; 
        double a = 1;
        while ((a > EPS)/* && (j <= N)*/)
        {   
            a = ((pow(j, 2) + 1) / factorial(j)) * pow(i / 2, j);
            if (a >= EPS) sE += a;
            j++;
            
        }
        
        printf("%1.1f\t\t %1.7g\t\t %1.7g\t\t %1.6g\t %d\n", i, sN, sE, y, j);   
    }
}
