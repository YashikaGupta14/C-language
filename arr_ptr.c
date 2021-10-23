// #include <stdio.h>
// int main()
// {
//     int marks[5];
//     int *ptr;
//     ptr = &marks[0];
//     for ( int i =0;i<5;i++)
//     {
//         printf("enter the value of marks for student %d\n",i+1);
//         scanf("%d",ptr);
//         ptr++;

//     }
//     for ( int i=0; i<5;i++)
//     {
//         printf("marks of student %d is %u\n",i+1,marks[i]);
//     }
//     return 0;
// }


// #include<stdio.h>

// void printarray(int *ptr, int n)
// {
//     for ( int i=0;i<n;i++)
//     {
//         printf("The value of marks of students %d is %d\n",i+1, *(ptr+i) ) ;}
// }

// int main()
// {
//     int arr[]={2,4,6,7,4};
//     printarray(arr,5);
//     return 0;
// }


#include <stdio.h>
int main()
{
    int nsub=5;
    int nstu=3;
    int marks[3][5];
    for (int i=0;i<nstu;i++)
    {
        for (int j=0;j<nsub;j++)
        {
            printf("enter the marks of student %d in sub %d",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }
    }
    for (int i=0;i<nstu;i++)
    {
        for (int j=0;j<nsub;j++)
        {
            printf(" the marks of student %d in sub %d is %d",i+1,j+1,marks[i][j]);
        
        }
    }

}