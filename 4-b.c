#include<stdio.h>

struct COMPLEX
{
    float real, img;
};

void read(struct COMPLEX *c1, struct COMPLEX *c2);
void display(struct COMPLEX *c1, struct COMPLEX *c2);
void Add(struct COMPLEX *c1, struct COMPLEX *c2, struct COMPLEX *c3);
void Diff(struct COMPLEX *c1, struct COMPLEX *c2, struct COMPLEX *c3);

int main()
{
        struct COMPLEX c1, c2, c3;
    read(&c1,&c2);
    display(&c1,&c2);
    Add(&c1,&c2,&c3);
    Diff(&c1,&c2,&c3);
return 0;
}

void read(struct COMPLEX *c1, struct COMPLEX *c2)
{
    printf("Enter real part of complex-1: ");
    scanf("%f",&c1->real);
    printf("Enter imaginary part of complex-1: ");
    scanf("%f",&c1->img);
    printf("Enter real part of complex-2: ");
    scanf("%f",&c2->real);
    printf("Enter imaginary part of complex-2: ");
    scanf("%f",&c2->img);
}

void display(struct COMPLEX *c1, struct COMPLEX *c2)
{
    printf("\nCOMPLEX-1: [%f]+i[%f]\n",c1->real,c1->img);
    printf("COMPLEX-2: [%f]+i[%f]\n",c2->real,c2->img);
}

void Add(struct COMPLEX *c1, struct COMPLEX *c2, struct COMPLEX *c3)
{
    c3->real = c1->real + c2->real;
    c3->img =  c1->img + c2->img;
        printf("\nAddition of the two complex gives: [%f]+i[%f]\n",c3->real,c3->img); 
}

void Diff(struct COMPLEX *c1, struct COMPLEX *c2, struct COMPLEX *c3)
{
    c3->real = c1->real - c2->real;
    c3->img =  c1->img - c2->img;
        printf("\nAddition of the two complex gives: [%lf]+i[%lf]\n\n",c3->real,c3->img);
}