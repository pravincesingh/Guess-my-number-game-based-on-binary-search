#include<stdio.h>
#include<conio.h>
int main()
{
    printf("Choose a number between 1 to 100000 in your mind and write it on the page \n");
    printf("We will guess it by asking less than 20 questions\n\n");

    unsigned long long int arr[100000],i,MID,LB,UB;
    char symbol;
    int count =0;
    for(i=1;i<=100000;i++)
    {
        arr[i]=i;
    }
    LB=1;
    UB=100000;

    while(LB<=UB)
    {
    count++;
        MID=(LB+UB)/2;
        printf("Question %d : Is your number = , < or > than %d ? ",count,arr[MID]);

        scanf("%c",&symbol);
        fflush(stdin);
        if(symbol=='=')
        {
            printf("\n\nGreat we found your number in just %d steps \n",count);
            printf("Your number is %llu \n\n\n\n",arr[MID]);
            break;
        }
        else if(symbol=='<')
        {
            UB=MID-1;
        }
        else if(symbol=='>')
        {
            LB=MID+1;
        }
        else
        {
                printf("Wrong symbol \n");
        }
    }


getch();
        return 0;
}
