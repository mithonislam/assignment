#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int count = 0;
int total;
int array[999999];



void View_all_elements();//1
void Insert_new_element();//2
void Search_an_element();//3
void Delete_an_element();//4
void Sort_elements_in_ascending_order();//5
void Sort_elements_in_descending_order();//6
void Find_memory_location_of_an_element();//7

int main()
{
    char a[2];
F:
    printf("0....Exit\n");
    printf("1....View all elements\n");
    printf("2....Insert new element\n");
    printf("3....Search an element\n");
    printf("4....Delete an element\n");
    printf("5....Sort elements in ascending order\n");
    printf("6....Sort elements in descending order\n");
    printf("7....Find memory location of an element\n");


A:
    printf("\nEnter Your Option: ");

    gets(a);

    if((count==0) && (a[0]=='1' || a[0]=='3' || a[0]=='4' || a[0]=='5' || a[0]=='6' || a[0]=='7'))
    {
        printf("No element found... Enter element first.\n");
        goto A;
    }

    switch (a[0])
    {
    case '1':
        View_all_elements();
        break;

    case '2':
        Insert_new_element();
        break;

    case '3':
        Search_an_element();
        break;

    case '4':
        Delete_an_element();
        break;

    case '5':
        Sort_elements_in_ascending_order();
        break;

    case '6':
        Sort_elements_in_descending_order();
        break;

    case '7':
        Find_memory_location_of_an_element();
        break;

    case '0':
        return 0;
        break;

    default:
        {
        printf("Wrong Input. Please Read Those Lines Given Above\n");
        goto A;
        }
    }

    system("cls");
    goto F;
}
void View_all_elements()
{
    int c;
    printf("View all elements\n\n");

    for(c=0; c<total; c++)
    {
        printf("%d ", array[c]);
    }
    printf("\nPress enter to continue...");
    getchar();
}
void Insert_new_element()
{
    int c;
    printf("Enter total elements number\n");
    scanf("%d", &total);
    printf("Input elements:\n");

    for(c=0; c<total; c++)
    {
        scanf("%d", &array[c]);
    }
    count = total;
    getchar();
}
void Search_an_element()
{
    int c, t=0, ele;
    printf("Enter searching element: ");
    scanf("%d", &ele);
    for(c=0; c<total; c++)
    {
        if(array[c]==ele)
        {
            printf("Index[%d]=%d\n", c, array[c]);
            t=t+1;
        }
    }
    if(t==0)
    {
        printf("No result found.\n");
    }
    else
    {
        printf("%d results found.\n", t);
    }
    printf("\nPress enter to continue...");
    getchar();
    getchar();
}
void Delete_an_element()
{
    int c, d, temp, t=0, ele;
    printf("Enter the element: ");
    scanf("%d", &ele);
    for(c=0; c<total; c++)
    {
        if(array[c]==ele)
        {
            t=t+1;
            for(d=c; d<total-t; d++)
            {
                array[d]=array[d+1];
            }
        }
    }
    total=total-t;
    count=total;
    if(t==0)
    {
        printf("No result found.\n");
    }
    else
    {
        printf("%d elements are deleted.\n", t);
    }
    printf("\nPress enter to continue...");
    getchar();
    getchar();

}
void Sort_elements_in_ascending_order()
{
    int c, d, t;
    printf("\n\nSort elements in ascending order: \n");
    d=total-1;
 A:
    for(c=0; c<d; c++)
    {
        if(array[c]>array[c+1])
        {
            t=array[c+1];
            array[c+1]=array[c];
            array[c]=t;
        }
    }
    for(c=0; c<d; c++)
    {
        if(array[c]>array[c+1])
            goto A;
    }
    for(c=0; c<total; c++)
        printf("%d\n", array[c]);

    printf("\nPress enter to continue...");
    getchar();
}
void Sort_elements_in_descending_order()
{
    int c, d, t;
    printf("\n\nSort elements in descending order: \n");
 A:
    for(c=0; c<total; c++)
    {
        if(array[c]<array[c+1])
        {
            t=array[c];
            array[c]=array[c+1];
            array[c+1]=t;
        }
    }
    for(c=0; c<total; c++)
    {
        if(array[c]<array[c+1])
            goto A;
    }
    for(c=0; c<total; c++)
        printf("%d\n", array[c]);

    printf("\nPress enter to continue...");
    getchar();
}
void Find_memory_location_of_an_element()
{
    int c;
    printf("Enter index number of the element: ");
    scanf("%d", &c);

    printf("Memory location of element (Index[%d]): %d\n", c, &array[c]);

    printf("\nPress enter to continue...");
    getchar();
    getchar();
}
