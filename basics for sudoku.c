#include <stdio.h>
int main()
{
    //pragram for sudoku game basics
    int s[3][3]={{8,3,0},{9,0,0},{1,5,6}};
    int num,pos;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        printf("%d ",s[i][j]);
        }
        printf("\n");
    }
    start: printf("\nEnter the position you want to enter the number");
    printf("\n1 or 2 or 3");
    printf("\n");
    scanf("%d",&pos);
    if(pos==1)
    {
        printf("\nEnter the number to be updated:");
        scanf("%d",&num);
        if(num==2)
        {
            s[0][2]=num;
            printf("\nCorrect");
            goto start;
        }
        else
        {
            printf("\nTry again");
            goto start;
        }
    }
    else if(pos==2)
    {
        printf("\nEnter the number to be updated:");
        scanf("%d",&num);
        if(num==4)
        {
            s[1][1]=num;
            printf("\nCorrect");
            goto start;
        }
        else
        {
            printf("\nTry again");
            goto start;
        }
    }
    else if(pos==3)
    {
        printf("\nEnter the number to be updated:");
        scanf("%d",&num);
        if(num==7)
        {
            s[1][2]=num;
            printf("\nCorrect\n");
        }
        else
        {
            printf("\nTry again");
            goto start;
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        printf("%d ",s[i][j]);
        }
        printf("\n");
    }
    return 0;
}