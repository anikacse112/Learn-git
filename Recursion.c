1) 1 to 5
#include<stdio.h>
///print 1 to 5
void hello(int n)
{
   if(n==6)
   {
       return;
   }
   printf("%d\n", n);
   ///hello(n+1);
}
int main()
{
    hello(1);


    return 0;
}

2) factorial
#include<stdio.h>
int fact(int n)
{
        if(n == 1)
    {
        return 1;
    }
    return n * fact(n-1);
}
int main()
{
    int n;
    scanf("%d", &n);

    int result = fact(n);
    printf("%d\n", result);
}


3) fibonacci
#include<stdio.h>
int fibo(int n)
{
    if(n == 1)
    {
        return 0;
    }
    if(n == 2)
    {
        return 1;
    }
    return fibo(n-1) + fibo(n-2);

}
int main()
{
    int n;
    scanf("%d", &n);

    int result = fibo(n);
    printf("%d'th fibonacci number is %d\n", n, result);
}


4) count digit using recursion
#include<stdio.h>
int digit(int N) {
    if (N == 0) {
        return 0;  // Base case: N has 0 digits
    } else {
        return 1 + digit(N / 10);  // Recursive case: count 1 digit and recurse with N/10
    }
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d has %d digit(s)\n", n, digit(n));

    return 0;
}

5) Summation of digits using recursion
#include<stdio.h>
int digit_sum(int N)
{
    int rem;
    if (N == 0) {
        return 0;
    }
    rem = N % 10;
    int sum = rem + digit_sum(N / 10);
    return sum;

}
int main() {
    int n;
    scanf("%d", &n);
    printf("Sum %d\n", digit_sum(n));

    return 0;
}

6) 1 to N print
#include<stdio.h>
void print(int start, int N)
{
    if(start>N)
    {
        return;
    }
    printf("%d\n", start);
    print(start + 1, N);
}
int main()
{
    int n;
    scanf("%d", &n);
    print(1, n);
}

7) 1 to N print
#include<stdio.h>
void print(int N)
{
    if(N==0)
    {
        return;
    }
    printf("%d\n", N);
    print(N - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    print(n);
}



///
#include<stdio.h>
int summ = 0;
int count(int N)
{
    if(N == 0)
    {
        return summ;
    }

    summ++;

    return count(N/10) ;
}

int summation_of_digits = 0;
int sum(int num)
{
    if(num == 0)
    {
        return summation_of_digits;
    }

    int rem = num%10;

    summation_of_digits = summation_of_digits + rem;

    return sum(num/10);

}
int reve = 0;

int digit(int nm)
{
    if (nm == 0)
    {
        return reve;
    }

    int re = nm % 10;
    reve = reve * 10 + re;

    return digit(nm / 10);
}


int main()
{
    int n;
    scanf("%d", &n);
    printf("\n\n");

    printf("%d\n\n", count(n));
    printf("%d\n\n", sum(n));
    printf("%d\n\n", digit(n));



}





