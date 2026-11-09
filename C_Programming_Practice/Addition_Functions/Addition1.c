/*
    Step 1 : Understand the problem statement.
    Step 2 : Write the algorithm.
    Step 3 : Deside the programming language.
    Step 4 : Write the program.
    Step 5 : Test the program.
*/

//////////////////////////////////////////////
//
// Step 1 : Understand the problem statement
//      User is going to enter any two integers and we have to perform the addition.
//
//////////////////////////////////////////////

//////////////////////////////////////////////
//
// Step 2 : Write the algorithm.
/*
    Start
        Accept first number as NO1.
        Accept second number as NO2.
        Create a variable as Ans to store the result.
        Perform the addition and store into Ans.
        Display the result from Ans.
    End
*/
//
//////////////////////////////////////////////

//////////////////////////////////////////////
//
//Step 3 : Deside the programming language.
//         We select C programming
//
//////////////////////////////////////////////

//////////////////////////////////////////////
//
//    Step 4 : Write the program.
//
//////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int ivalue1;
    int ivalue2;
    int iresult;

    printf("Enter first number: \n");
    scanf("%d",&ivalue1);  
    
    printf("Enter second number: \n");
    scanf("%d",&ivalue2);

    iresult = ivalue1 + ivalue2;              // Business logic

    printf("%d\n",iresult);

    return 0;
}

