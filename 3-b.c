#include<stdio.h>

struct PLAYERS
{
    char name[30];
    int score1, score2, score3;
};

void read(struct PLAYERS p[], int *n);
void display(struct PLAYERS p[], int *n);
void compute(struct PLAYERS p[], int *n);

int main()
{
        int n, *pn;
    printf("\nEnter number of players: ");
    scanf("%d",&n);
    pn = &n;
        struct PLAYERS p[n];
    read(p,pn);
    display(p,pn);
    compute(p,pn);
return 0;
}

void read(struct PLAYERS p[], int *n)
{
        int i;
    printf("\nEnter details of %d players--\n",*n);
    for ( i = 0; i < *n; i++)
    {
        printf("Enter the name of PLAYER %d: ",i+1);
        scanf("%s",p[i].name);
        printf("Enter score 1: ");
        scanf("%d",&p[i].score1);
        printf("Enter score 2: ");
        scanf("%d",&p[i].score2);
        printf("Enter score 3: ");
        scanf("%d",&p[i].score3);
    }    
}

void display(struct PLAYERS p[], int *n)
{
        int i;
    printf("\nDetails of %d players--\n",*n);
    for ( i = 0; i < *n; i++)
    {
        printf("Name of PLAYER %d: %s\n",i+1,p[i].name);
        printf("Score 1: %d\n",p[i].score1);
        printf("Score 2: %d\n",p[i].score2);
        printf("Score 3: %d\n",p[i].score3);
    }    
}

void compute(struct PLAYERS p[], int *n)
{
        int i, avg=0;
    printf("\nAveerage scores of each player--\n");
    for(i=0; i < *n; i++)
    {
            avg = p[i].score1 + p[i].score2 + p[i].score3;
        printf("Player [%d] name: %s\n",i+1,p[i].name);
        printf("Average score is: %d\n",avg);
    }
}