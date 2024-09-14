#include <stdio.h>
#include <string.h>
struct questions
{
    int num;
    char name[500];
};

int main()
{

    char a[4];
    for (int i = 0; i < 4; i++)
    {
        a[i];
    }

    int n = 0;
    struct questions q[4];
    q[0].num = 1;
    strcpy(q[0].name, "The sum of 2 and 8 is\na.6\t\tb.8\nc.10\t\td.11");
    q[1].num = 2;
    strcpy(q[1].name, "The multipliction is of 2 and 5 is\na.6              b.8\nc.11             d.10");
    q[2].num = 3;
    strcpy(q[2].name, "Who is the 1st prime minister of Nepal\na.Jang Bahadur Rana\t\tb.Sher Bahadur Dauwa\nc.BP Koirala\t\t\td.KP Oli");
    q[3].num = 4;
    strcpy(q[3].name, "Who is the father of Science \na.Elbert Enstien \t\tb.Sir Issac Newton\nc.BP Koirala\t\t\td.KP Oli");

    // Prints
    printf("%d.", q[0].num);
    printf("%s \n", q[0].name);

    scanf("%c", &a[0]);
    if (a[0] == 'c')
    {
        n = n + 1;
    }
    printf("%d.", q[1].num);
    printf("%s \n", q[1].name);

    scanf("%c", &a[1]);
    scanf("%c", &a[1]);

    if (a[1] == 'd')
    {
        n = n + 1;
    }

    printf("%d.", q[2].num);
    printf("%s \n", q[2].name);

    scanf("%c", &a[2]);
    scanf(" %c", &a[2]);

    if (a[2] == 'c')
    {
        n = n + 1;
    }
    printf("%d.", q[3].num);
    printf("%s \n", q[3].name);

    scanf("%c", &a[3]);
    scanf(" %c", &a[3]);

    if (a[3] == 'a')
    {
        n = n + 1;
    }

    // marking
    printf("The total mark is %d", n);

    return 0;
}