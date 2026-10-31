#include<stdio.h>
#include<stdlib.h>

double RectArea(float fWidth, float fHeight)
{
    double Area = 0.0;

    if(fWidth < 0)
    {
        fWidth = -fWidth;
    }

    if(fHeight < 0)
    {
        fHeight = -fHeight;
    }
    
    Area = fWidth * fHeight;

    return Area;
} 

int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter Width : \n");
    scanf("%f",&fValue1);
    
    printf("Enter Height : \n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of Rectangle is %.3lf",dRet);
    
    return EXIT_SUCCESS;
}
