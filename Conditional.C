#include<stdio.h>
int main()
{
	int marks;
	printf("Enter the marks to convert into Grade: \n"); // your marks should be within 100
	scanf("%d", &marks);
	if(marks<=100 && marks>=85)
	{
		printf("Your Grade is 'A' \n ");
	}
	else
    {
        if(marks<=84 && marks>=70)
        {
            printf("Your Grade is 'B' \n");
        }
    }
    if(marks<=69 && marks>=55)
    {
        printf("Your Grade is 'C' \n ");

    }
    else
    {
        if(marks<=54 && marks>=40)
        {
            printf("Your Grade is 'D' \n");
        }
    }
    if(marks<=40)
        printf("Your Grade is 'F' which is Fail: \n");
    else
        printf("This is how you convert marks to grade using if-else-if...!");
    return 0;
}
