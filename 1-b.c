#include<stdio.h>

struct STUDENT
{
    char name[30];
    int rollno, ia1, ia2, ia3, cta;
};

void read(struct STUDENT *s);
void display(struct STUDENT *s);
void compute(struct STUDENT *s);

int main()
{
        struct STUDENT s;
    read(&s);
    display(&s);
    compute(&s);
return 0;
}

void read(struct STUDENT *s)
{
    printf("\nEnter the name of the student: ");
        scanf("%s",s->name);
    printf("Enter--\n");
    printf("IA-1 marks: ");
        scanf("%d",&s->ia1);
    printf("IA-2 marks: ");
        scanf("%d",&s->ia2);
    printf("IA-3 marks: ");
        scanf("%d",&s->ia3);
    printf("CTA marks: ");
        scanf("%d",&s->cta);
}

void display(struct STUDENT *s)
{
    printf("\nName of the student: %s\n",s->name);
    printf("IA-1 marks: %d\n",s->ia1);
    printf("IA-2 marks: %d\n",s->ia2);
    printf("IA-3 marks: %d\n",s->ia3);
    printf("CTA marks: %d\n",s->cta);
}

void compute(struct STUDENT *s)
{
        int small, cie;
    small = s->ia1;
    if (small > s->ia2)
        small = s->ia2;
    if (small > s->ia3)
        small = s->ia3;
    cie = s->ia1 + s->ia2 + s->ia3 + s->cta - small;
    printf("\nCIE is: %d\n\n",cie);
}