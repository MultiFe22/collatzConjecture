#include <stdio.h>
int check = 0;
int point = 0;

long long problem(long long number)
{
    if (number % 2 == 0)
    {
        number /= 2;
    }
    else 
    {
        number = 3*number + 1;
    }
    if (number == 4 || number < point)
    {
        check++;
        return 1;
    }
    else return problem(number);
}

int main(int argc, char const *argv[])
{
    int i;
    int min = 5;
    int max = 1000000000;
    for(i = min; i < max; i++)
    {
        point = i;
        problem(i);
    }
    if((max-min) == check)printf("Correct!\n");
    return 0;
}
