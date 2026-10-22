#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iNo)
{
    if(iNo >= 21)
    {
        printf("Eligible for Voting\n");
    }
    else if (iNo < 21 && iNo > 0)
    {
        printf("Not Eligible for Voting\n");
    }
    else
    {
        printf("Invalid Age \n");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter yout Age : \n");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}
