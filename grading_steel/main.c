/*
Author: Aijaz Ahmad Wani
email: aijazahmad9864@gmail.com
Date: 15-8-2019
*/
//grading of steel
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float hardness,carbon_content,tensile_strength;
    printf("Enter Hardness: ");
    scanf("%f",&hardness);

    printf("\nEnter Carbon content: ");
    scanf("%f",&carbon_content);

    printf("\nEnter Tensile strength: ");
    scanf("%f",&tensile_strength);

    if(hardness>50&&carbon_content<0.7&&tensile_strength>5600)
    {
        printf("\nGrade 10");
    }
    else if(hardness>50&&carbon_content<0.7&&tensile_strength<=5600)
    {
        printf("\n Grade 9");
    }
    else if(hardness<=50&&carbon_content<0.7&&tensile_strength>5600)
    {
        printf("\n Grade 8");
    }
    else if(hardness>50&&carbon_content>=0.7&&tensile_strength>5600)
    {
        printf("\n Grade 7");
    }
    else if(hardness>50||carbon_content<0.7||tensile_strength>5600)
    {
        printf("\nGrade 6");
    }
    else
        printf("Grade 5");
}
