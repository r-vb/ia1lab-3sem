#include<stdio.h>

struct BOOK{
    char title[10];
    int edn, price;
};

void reading(struct BOOK b[], int *pn);
void display(struct BOOK b[], int *pn);
void compute(struct BOOK b[], int *pn);

int main()
{   
        int n;  int *pn;
    printf("Enter number of books: ");
    scanf("%d",&n);

        pn = &n;

    struct BOOK b[n];

    reading(b,pn);
    display(b,pn);
    compute(b,pn);

return 0;
}

void reading(struct BOOK b[], int *pn)
{        int i;
    printf("Enter details of %d books--\n",*pn);
    for (i = 0; i < *pn; i++)
    {
        printf("Book %d details-\n",i+1);
        printf("Title: ");      scanf("%s",b[i].title);
        printf("Edition: ");    scanf("%d",&b[i].edn);
        printf("Price: ");      scanf("%d",&b[i].price);
    }
}

void display(struct BOOK b[], int *pn)
{        int i;
    printf("\n\nDetails of %d books are as follows--\n",*pn);
    for (i = 0; i < *pn; i++)
    {
        printf("Book %d details-\n",i+1);
        printf("Title: ");      printf("%s\n",b[i].title);
        printf("Edition: ");    printf("%d\n",b[i].edn);
        printf("Price: ");      printf("%d\n",b[i].price);
    }
}

void compute(struct BOOK b[], int *pn)
{        int i=0, lar;
    lar = i;
    for (i = 1; i < *pn; i++){
            if (b[lar].price <= b[i].price)
            {
                lar = i;
                    printf("\n\nDetails of Book worth highest price is:\n");
                    printf("Book %d details-\n",lar+1);
                    printf("Title: ");      printf("%s\n",b[lar].title);
                    printf("Edition: ");    printf("%d\n",b[lar].edn);
                    printf("Price: ");      printf("%d\n",b[lar].price);
            }            
    }
}