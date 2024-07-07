#include<stdio.h>
#include <conio.h>
#include <string.h>
#include<time.h>

void loading();
void mainmenu();
void cfood();
void ifood();
void mfood();
void payment();
float total=0,sum=0;
int ch;

int q[5]={0},q1[5]={0};

struct food
{
    char name[20];
    float price1;
    float price2;
    int no;
    int qty;
    int qty1;
};struct food a[5];

int main()
{
    mainmenu();

    return 0;
}

void loading()
{
    system("color 0F");

    char a = 177, b = 219;
    printf("\n");
    printf("\n\t\t\t\t\t\t"
            "    Loading...\n\n");
    printf("\t\t\t\t\t\t");

     for (int i = 0; i <= 16; i++)
        printf("%c", a);

    printf("\r");
    printf("\t\t\t\t\t\t");

    for (int i = 0; i < 17; i++)
    {
        printf("%c", b);
        Sleep(33);
    }
}

void mainmenu()
{

    printf("\n");
    printf("\n\t\t\t  ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
    printf("\n\t\t\t  +                                                            +");
    printf("\n\t\t\t  +      ++++++++++++++++++++++++++++++++++++++++++++++++      +");
    printf("\n\t\t\t  +      +                                              +      +");
    printf("\n\t\t\t  +      +       WELCOME TO FOOD DELIVERY SYSTEM        +      +");
    printf("\n\t\t\t  +      +                                              +      +");
    printf("\n\t\t\t  +      ++++++++++++++++++++++++++++++++++++++++++++++++      +");
    printf("\n\t\t\t  +                                                            +");
    printf("\n\t\t\t  ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("\n");

    printf("\n\t\t\t\t    _________________________________________");
    printf("\n\t\t\t\t   |       [1] CHINESE FOOD RESTAURANT       |");
    printf("\n\t\t\t\t   |_________________________________________|");
    printf("\n\t\t\t\t   |       [2] INDIAN FOOD RESTAURANT        |");
    printf("\n\t\t\t\t   |_________________________________________|");
    printf("\n\t\t\t\t   |       [3] MALAY FOOD RESTAURANT         |");
    printf("\n\t\t\t\t   |_________________________________________|");
    printf("\n\t\t\t\t   |       [4] EXIT                          |");
    printf("\n\t\t\t\t   |_________________________________________|\n\t\t\t\t\t\t\t\t");

    printf("\n\n                                   PLEASE SELECT YOUR CHOICE IN THE ABOVE BOX: ");
    scanf("%d", &ch);

    if(ch==1)
    {
        loading();
        cfood();
    }
    else if(ch==2)
    {
        loading();
        ifood();
    }
    else if(ch==3)
    {
        loading();
        mfood();
    }
    else if(ch==4)
    {
        system("cls");
    }
    else
    {
        printf("                                   Error");
        system("cls");
        mainmenu();
    }
}

void cfood()
{
    int i,ch2,add;
    char size;

    strcpy(a[0].name,"Nasi Goreng");
    a[0].price1=3.00; a[0].price2=3.50; a[0].no=1; a[0].qty=0; a[0].qty1=0;
    strcpy(a[1].name,"Wan Tan Mee");
    a[1].price1=3.00; a[1].price2=3.50; a[1].no=2; a[1].qty=0; a[1].qty1=0;
    strcpy(a[2].name,"Nasi Ayam");
    a[2].price1=5.00; a[2].price2=5.50; a[2].no=3; a[2].qty=0; a[2].qty1=0;
    strcpy(a[3].name,"Bak Kut Teh");
    a[3].price1=8.00;a[3].price2=9.00; a[3].no=4; a[3].qty=0; a[3].qty1=0;
    strcpy(a[4].name,"Mee Goreng");
    a[4].price1=3.50; a[4].price2=4.5; a[4].no=5; a[4].qty=0; a[4].qty1=0;

    do
    {
        printf("\n\n\t\t\t------------------------------------------------------------------\n");
        printf("\t\t\t\t\t   List of Chinese Food Menu\n");
        printf("\t\t\t------------------------------------------------------------------\n");

        printf("\t\t\t\t\t  Input Number For Selected Menu\n");
        printf("\t\t\t------------------------------------------------------------------\n");
        printf("\t\t\tNo\t   Name\t\t\t\t\t      Price(RM)\n");
        printf("\t\t\t\t\t\t\t\t\tSmall\t\tLarge\n");

        for(i=0;i<5;i++)
        {
            printf("\t\t\t%d\t%-20s\t\t\t%.2f\t\t%.2f\n",a[i].no,a[i].name,a[i].price1,a[i].price2);
        }

        printf("\n\t\t\t***************** Discount 20 percent if above RM30 ****************");
        printf("\n\n\t\t\tEnter your choice:  ");
        scanf(" %d",&ch2);

        if(ch2==1)
        {
            printf("\n\t\t\tSmall or large? Small -'S', Large - 'L' : ");
            scanf(" %c",&size);
            if(size=='s' || size=='S')
            {
                printf("\t\t\tQuantity : ");
                scanf("%d",&a[0].qty);
                total=a[0].qty*a[0].price1;
                printf("\n\t\t\tFood: %s",a[0].name);
                printf("\n\t\t\tPer price: %.2f",a[0].price1);
            }
            else if(size=='l' || size=='L')
            {
                printf("\t\t\tQuantity : ");
                scanf("%d",&a[0].qty1);
                total=a[0].qty1*a[0].price2;
                printf("\n\t\t\tFood: %s",a[0].name);
                printf("\n\t\t\tPer price: %.2f",a[0].price2);
            }
            else
            {
                printf("\t\t\tInvalid!!!");
                total=0;
            }
        }

        if(ch2==2)
        {
            printf("\n\t\t\tSmall or large? Small -'S', Large - 'L' : ");
            scanf(" %c",&size);
            if(size=='s' || size=='S')
            {
                printf("\t\t\tQuantity : ");
                scanf("%d",&a[1].qty);
                total=a[1].qty*a[1].price1;
                printf("\n\t\t\tFood: %s",a[1].name);
                printf("\n\t\t\tPer price: %.2f",a[1].price1);
            }
            else if(size=='l' || size=='L')
            {
                printf("\t\t\tQuantity : ");
                scanf("%d",&a[1].qty1);
                total=a[1].qty1*a[1].price2;
                printf("\n\t\t\tFood: %s",a[1].name);
                printf("\n\t\t\tPer price: %.2f",a[1].price2);
            }
            else
            {
                printf("\t\t\tInvalid!!!");
                total=0;
            }
        }

        if(ch2==3)
        {
            printf("\n\t\t\tSmall or large? Small -'S', Large - 'L' : ");
            scanf(" %c",&size);
            if(size=='s' || size=='S')
            {
                printf("\t\t\tQuantity : ");
                scanf("%d",&a[2].qty);
                total=a[2].qty*a[2].price1;
                printf("\n\t\t\tFood: %s",a[2].name);
                printf("\n\t\t\tPer price: %.2f",a[2].price1);
            }
            else if(size=='l' || size=='L')
            {
                printf("\t\t\tQuantity : ");
                scanf("%d",&a[2].qty1);
                total=a[2].qty1*a[2].price2;
                printf("\n\t\t\tFood: %s",a[2].name);
                printf("\n\t\t\tPer price: %.2f",a[2].price2);
            }
            else
            {
                printf("\t\t\tInvalid!!!");
                total=0;
            }
        }

        if(ch2==4)
        {
            printf("\n\t\t\tSmall or large? Small -'S', Large - 'L' : ");
            scanf(" %c",&size);
            if(size=='s' || size=='S')
            {
                printf("\t\t\tQuantity : ");
                scanf("%d",&a[3].qty);
                total=a[3].qty*a[3].price1;
                printf("\n\t\t\tFood: %s",a[3].name);
                printf("\n\t\t\tPer price: %.2f",a[3].price1);
            }
            else if(size=='l' || size=='L')
            {
                printf("\t\t\tQuantity : ");
                scanf("%d",&a[3].qty1);
                total=a[3].qty1*a[3].price2;
                printf("\n\t\t\tFood: %s",a[3].name);
                printf("\n\t\t\tPer price: %.2f",a[3].price2);
            }
            else
            {
                printf("\t\t\tInvalid!!!");
                total=0;
            }
        }

        if(ch2==5)
        {
            printf("\n\t\t\tSmall or large? Small -'S', Large - 'L' : ");
            scanf(" %c",&size);
            if(size=='s' || size=='S')
            {
                printf("\t\t\tQuantity : ");
                scanf("%d",&a[4].qty);
                total=a[4].qty*a[4].price1;
                printf("\n\t\t\tFood: %s",a[4].name);
                printf("\n\t\t\tPer price: %.2f",a[4].price1);
            }
            else if(size=='l' || size=='L')
            {
                printf("\t\t\tQuantity : ");
                scanf("%d",&a[4].qty1);
                total=a[4].qty1*a[4].price2;
                printf("\n\t\t\tFood: %s",a[4].name);
                printf("\n\t\t\tPer price: %.2f",a[4].price2);
            }
            else
            {
                printf("\n\t\t\tInvalid!!!");
                total=0;
            }
        }

        sum=sum+total;
        printf("\n\n\t\t\tTotal Amount : RM%.2f\n",total);
        printf("\n\t\t\tPress 1 To Add on-->\n\t\t\tPress 2 To Pay-->\n\n\t\t\tEnter Your Choice--> ");
        scanf("%d",&add);

    }while(add==1);

    if(add==2)
    {
        payment();
    }
}

void ifood()
{
    int i,ch2,add;
    char size;

    strcpy(a[0].name,"Butter Chicken");
    a[0].price1=9.90; a[0].price2=12.50; a[0].no=1; a[0].qty=0; a[0].qty1=0;
    strcpy(a[1].name,"Curry Fish");
    a[1].price1=8.00; a[1].price2=9.50; a[1].no=2; a[1].qty=0; a[1].qty1=0;
    strcpy(a[2].name,"Briyani");
    a[2].price1=9.00; a[2].price2=10.50; a[2].no=3; a[2].qty=0; a[2].qty1=0;
    strcpy(a[3].name,"Vindaloo");
    a[3].price1=8.00;a[3].price2=9.00; a[3].no=4; a[3].qty=0; a[3].qty1=0;
    strcpy(a[4].name,"Masala Chai");
    a[4].price1=9.90; a[4].price2=12.90; a[4].no=5; a[4].qty=0; a[4].qty1=0;

    do
    {
        printf("\n\n\t\t\t------------------------------------------------------------------\n");
        printf("\t\t\t\t\t     List of Indian Food Menu\n");
        printf("\t\t\t------------------------------------------------------------------\n");

        printf("\t\t\t\t\t  Input Number For Selected Menu\n");
        printf("\t\t\t------------------------------------------------------------------\n");
        printf("\t\t\tNo\t   Name\t\t\t\t\t      Price(RM)\n");
        printf("\t\t\t\t\t\t\t\t\tSmall\t\tLarge\n");

        for(i=0;i<5;i++)
        {
            printf("\t\t\t%d\t%-20s\t\t\t%.2f\t\t%.2f\n",a[i].no,a[i].name,a[i].price1,a[i].price2);
        }

        printf("\n\t\t\t***************** Discount 20 percent if above RM30 ****************");
        printf("\n\n\t\t\tEnter your choice:  ");
        scanf(" %d",&ch2);

        if(ch2==1)
        {
            printf("\n\t\t\tSmall or large? Small -'S', Large - 'L' : ");
            scanf(" %c",&size);
            if(size=='s' || size=='S')
            {
                printf("\t\t\tQuantity : ");
                scanf("%d",&a[0].qty);
                total=a[0].qty*a[0].price1;
                printf("\n\t\t\tFood: %s",a[0].name);
                printf("\n\t\t\tPer price: %.2f",a[0].price1);

            }
            else if(size=='l' || size=='L')
            {
                printf("\t\t\tQuantity : ");
                scanf("%d",&a[0].qty1);
                total=a[0].qty1*a[0].price2;
                printf("\n\t\t\tFood: %s",a[0].name);
                printf("\n\t\t\tPer price: %.2f",a[0].price2);
            }
            else
            {
                printf("\t\t\tInvalid!!!");
                total=0;
            }
        }

        if(ch2==2)
        {
            printf("\n\t\t\tSmall or large? Small -'S', Large - 'L' : ");
            scanf(" %c",&size);
            if(size=='s' || size=='S')
            {
                printf("\t\t\tQuantity : ");
                scanf("%d",&a[1].qty);
                total=a[1].qty*a[1].price1;
                printf("\n\t\t\tFood: %s",a[1].name);
                printf("\n\t\t\tPer price: %.2f",a[1].price1);
            }
            else if(size=='l' || size=='L')
            {
                printf("\t\t\tQuantity : ");
                scanf("%d",&a[1].qty1);
                total=a[1].qty1*a[1].price2;
                printf("\n\t\t\tFood: %s",a[1].name);
                printf("\n\t\t\tPer price: %.2f",a[1].price2);
            }
            else
            {
                printf("\t\t\tInvalid!!!");
                total=0;
            }
        }

        if(ch2==3)
        {
            printf("\n\t\t\tSmall or large? Small -'S', Large - 'L' : ");
            scanf(" %c",&size);
            if(size=='s' || size=='S')
            {
                printf("\t\t\tQuantity : ");
                scanf("%d",&a[2].qty);
                total=a[2].qty*a[2].price1;
                printf("\n\t\t\tFood: %s",a[2].name);
                printf("\n\t\t\tPer price: %.2f",a[2].price1);
            }
            else if(size=='l' || size=='L')
            {
                printf("\t\t\tQuantity : ");
                scanf("%d",&a[2].qty1);
                total=a[2].qty1*a[2].price2;
                printf("\n\t\t\tFood: %s",a[2].name);
                printf("\n\t\t\tPer price: %.2f",a[2].price2);
            }
            else
            {
                printf("\t\t\tInvalid!!!");
                total=0;
            }
        }

        if(ch2==4)
        {
            printf("\n\t\t\tSmall or large? Small -'S', Large - 'L' : ");
            scanf(" %c",&size);
            if(size=='s' || size=='S')
            {
                printf("\t\t\tQuantity : ");
                scanf("%d",&a[3].qty);
                total=a[3].qty*a[3].price1;
                printf("\n\t\t\tFood: %s",a[3].name);
                printf("\n\t\t\tPer price: %.2f",a[3].price1);
            }
            else if(size=='l' || size=='L')
            {
                printf("\t\t\tQuantity : ");
                scanf("%d",&a[3].qty1);
                total=a[3].qty1*a[3].price2;
                printf("\n\t\t\tFood: %s",a[3].name);
                printf("\n\t\t\tPer price: %.2f",a[3].price2);
            }
            else
            {
                printf("\t\t\tInvalid!!!");
                total=0;
            }
        }

        if(ch2==5)
        {
            printf("\n\t\t\tSmall or large? Small -'S', Large - 'L' : ");
            scanf(" %c",&size);
            if(size=='s' || size=='S')
            {
                printf("\t\t\tQuantity : ");
                scanf("%d",&a[4].qty);
                total=a[4].qty*a[4].price1;
                printf("\n\t\t\tFood: %s",a[4].name);
                printf("\n\t\t\tPer price: %.2f",a[4].price1);
            }
            else if(size=='l' || size=='L')
            {
                printf("\t\t\tQuantity : ");
                scanf("%d",&a[4].qty1);
                total=a[4].qty1*a[4].price2;
                printf("\n\t\t\tFood: %s",a[4].name);
                printf("\n\t\t\tPer price: %.2f",a[4].price2);
            }
            else
            {
                printf("\n\t\t\tInvalid!!!");
                total=0;
            }
        }

        sum=sum+total;
        printf("\n\n\t\t\tTotal Amount : RM%.2f\n",total);
        printf("\n\t\t\tPress 1 To Add on-->\n\t\t\tPress 2 To Pay-->\n\n\t\t\tEnter Your Choice--> ");
        scanf("%d",&add);

    }while(add==1);

    if(add==2)
    {
        payment();
    }
}

void mfood()
{
    int i,ch2,add;
    char size;

    strcpy(a[0].name,"Nasi Goreng");
    a[0].price1=3.00; a[0].price2=3.50; a[0].no=1; a[0].qty=0; a[0].qty1=0;
    strcpy(a[1].name,"Satay");
    a[1].price1=6.00; a[1].price2=7.50; a[1].no=2; a[1].qty=0; a[1].qty1=0;
    strcpy(a[2].name,"Nasi Lemak");
    a[2].price1=1.50; a[2].price2=2.50; a[2].no=3; a[2].qty=0; a[2].qty1=0;
    strcpy(a[3].name,"Nasi Kandar");
    a[3].price1=5.00;a[3].price2=6.00; a[3].no=4; a[3].qty=0; a[3].qty1=0;
    strcpy(a[4].name,"Mee Goreng");
    a[4].price1=3.50; a[4].price2=4.5; a[4].no=5; a[4].qty=0; a[4].qty1=0;

    do
    {
        printf("\n\n\t\t\t------------------------------------------------------------------\n");
        printf("\t\t\t\t\t     List of Malay Food Menu\n");
        printf("\t\t\t------------------------------------------------------------------\n");

        printf("\t\t\t\t\t  Input Number For Selected Menu\n");
        printf("\t\t\t------------------------------------------------------------------\n");
        printf("\t\t\tNo\t   Name\t\t\t\t\t      Price(RM)\n");
        printf("\t\t\t\t\t\t\t\t\tSmall\t\tLarge\n");

        for(i=0;i<5;i++)
        {
            printf("\t\t\t%d\t%-20s\t\t\t%.2f\t\t%.2f\n",a[i].no,a[i].name,a[i].price1,a[i].price2);
        }

        printf("\n\t\t\t***************** Discount 20 percent if above RM30 ****************");
        printf("\n\n\t\t\tEnter your choice:  ");
        scanf(" %d",&ch2);

        if(ch2==1)
        {
            printf("\n\t\t\tSmall or large? Small -'S', Large - 'L' : ");
            scanf(" %c",&size);
            if(size=='s' || size=='S')
            {
                printf("\t\t\tQuantity : ");
                scanf("%d",&a[0].qty);
                total=a[0].qty*a[0].price1;
                printf("\n\t\t\tFood: %s",a[0].name);
                printf("\n\t\t\tPer price: %.2f",a[0].price1);

            }
            else if(size=='l' || size=='L')
            {
                printf("\t\t\tQuantity : ");
                scanf("%d",&a[0].qty1);
                total=a[0].qty1*a[0].price2;
                printf("\n\t\t\tFood: %s",a[0].name);
                printf("\n\t\t\tPer price: %.2f",a[0].price2);
            }
            else
            {
                printf("\t\t\tInvalid!!!");
                total=0;
            }
        }

        if(ch2==2)
        {
            printf("\n\t\t\tSmall or large? Small -'S', Large - 'L' : ");
            scanf(" %c",&size);
            if(size=='s' || size=='S')
            {
                printf("\t\t\tQuantity : ");
                scanf("%d",&a[1].qty);
                total=a[1].qty*a[1].price1;
                printf("\n\t\t\tFood: %s",a[1].name);
                printf("\n\t\t\tPer price: %.2f",a[1].price1);
            }
            else if(size=='l' || size=='L')
            {
                printf("\t\t\tQuantity : ");
                scanf("%d",&a[1].qty1);
                total=a[1].qty1*a[1].price2;
                printf("\n\t\t\tFood: %s",a[1].name);
                printf("\n\t\t\tPer price: %.2f",a[1].price2);
            }
            else
            {
                printf("\t\t\tInvalid!!!");
                total=0;
            }
        }

        if(ch2==3)
        {
            printf("\n\t\t\tSmall or large? Small -'S', Large - 'L' : ");
            scanf(" %c",&size);
            if(size=='s' || size=='S')
            {
                printf("\t\t\tQuantity : ");
                scanf("%d",&a[2].qty);
                total=a[2].qty*a[2].price1;
                printf("\n\t\t\tFood: %s",a[2].name);
                printf("\n\t\t\tPer price: %.2f",a[2].price1);
            }
            else if(size=='l' || size=='L')
            {
                printf("\t\t\tQuantity : ");
                scanf("%d",&a[2].qty1);
                total=a[2].qty1*a[2].price2;
                printf("\n\t\t\tFood: %s",a[2].name);
                printf("\n\t\t\tPer price: %.2f",a[2].price2);
            }
            else
            {
                printf("\t\t\tInvalid!!!");
                total=0;
            }
        }

        if(ch2==4)
        {
            printf("\n\t\t\tSmall or large? Small -'S', Large - 'L' : ");
            scanf(" %c",&size);
            if(size=='s' || size=='S')
            {
                printf("\t\t\tQuantity : ");
                scanf("%d",&a[3].qty);
                total=a[3].qty*a[3].price1;
                printf("\n\t\t\tFood: %s",a[3].name);
                printf("\n\t\t\tPer price: %.2f",a[3].price1);
            }
            else if(size=='l' || size=='L')
            {
                printf("\t\t\tQuantity : ");
                scanf("%d",&a[3].qty1);
                total=a[3].qty1*a[3].price2;
                printf("\n\t\t\tFood: %s",a[3].name);
                printf("\n\t\t\tPer price: %.2f",a[3].price2);
            }
            else
            {
                printf("\t\t\tInvalid!!!");
                total=0;
            }
        }

        if(ch2==5)
        {
            printf("\n\t\t\tSmall or large? Small -'S', Large - 'L' : ");
            scanf(" %c",&size);
            if(size=='s' || size=='S')
            {
                printf("\t\t\tQuantity : ");
                scanf("%d",&a[4].qty);
                total=a[4].qty*a[4].price1;
                printf("\n\t\t\tFood: %s",a[4].name);
                printf("\n\t\t\tPer price: %.2f",a[4].price1);
            }
            else if(size=='l' || size=='L')
            {
                printf("\t\t\tQuantity : ");
                scanf("%d",&a[4].qty1);
                total=a[4].qty1*a[4].price2;
                printf("\n\t\t\tFood: %s",a[4].name);
                printf("\n\t\t\tPer price: %.2f",a[4].price2);
            }
            else
            {
                printf("\n\t\t\tInvalid!!!");
                total=0;
            }
        }
        sum=sum+total;
        printf("\n\n\t\t\tTotal Amount : RM%.2f\n",total);
        printf("\n\t\t\tPress 1 To Add on-->\n\t\t\tPress 2 To Pay-->\n\n\t\t\tEnter Your Choice--> ");
        scanf("%d",&add);

    }while(add==1);

    if(add==2)
    {
        payment();
    }
}

void payment()
{
    char name[20],phone[15],address[50];
    unsigned char order[107]="#abc123";
    order[6]+1;
    int method,load,i,ch4,ch5;
    float tax,discount;
    time_t t;
    time(&t);

    tax=sum*0.1;
    discount=sum*0.2;

    printf("\n\t\t\tName: ");
    gets(name);
    printf("\n\t\t\tPhone no: ");
    gets(phone);
    printf("\t\t\tAddress: ");
    scanf(" %[^\n]s",address);

    q[0]=q[0]+a[0].qty; q1[0]=q1[0]+a[0].qty1;
    q[1]=q[1]+a[1].qty; q1[1]=q1[1]+a[1].qty1;
    q[2]=q[2]+a[2].qty; q1[2]=q1[2]+a[2].qty1;
    q[3]=q[3]+a[3].qty; q1[3]=q1[3]+a[3].qty1;
    q[4]=q[4]+a[4].qty; q1[4]=q1[4]+a[4].qty1;

    printf("\n\n\t\t\t--------------------------------------------------------------------\n");
        printf("\t\t\t\t\t\t   List of Cart\n");
        printf("\t\t\t--------------------------------------------------------------------\n");
    printf("\t\t\t  Name\t\t\t\t\t\t       Quantity\t\t\n");
        printf("\t\t\t\t\t\t\t\t\tSmall\t\tLarge\n");

    for(i=0;i<15;i++)
    {
        if(a[i].qty>0||a[i].qty1>0)
        {
            printf("\t\t\t%-40s \t  %d\t\t  %d\n",a[i].name,a[i].qty,a[i].qty1);
        }
    }
    if(sum<30)
    {
        printf("\n\n\t\t\tSubtotal :\t RM %.2f\n",sum);
        printf("\t\t\tTax :\t\t RM  %.2f\n",tax);
        printf("\t\t\tDelivery Fee:\t RM  3.99\n");
        printf("\n\t\t\t--------------------------");
        printf("\n\t\t\tTotal:\t\t RM %.2f\n",sum+tax+3.99);
        printf("\t\t\t--------------------------");
    }
    if(sum>=30)
    {
        printf("\n\n\t\t\tSubtotal :\t RM %.2f\n",sum);
        printf("\t\t\tTax :\t\t RM  %.2f\n",tax);
        printf("\t\t\tDelivery Fee:\t RM  3.99\n");
        printf("\t\t\tDiscount:\t RM  %.2f\n",discount);
        printf("\n\t\t\t--------------------------");
        printf("\n\t\t\tTotal:\t\t RM %.2f\n",sum+tax+3.99-discount);
        printf("\t\t\t--------------------------");
    }

    printf("\n\n\t\t\tPress 1 pay by Cash On Delivery, Press 2 pay by Online Banking: ");
    scanf("%d",&method);

    printf("\n\t\t\tPress 1 to edit your name,phone no and address-->\n\t\t\tPress 2 to confirm your order-->\n\n\t\t\tEnter Your Choice--> ");
    scanf(" %d",&ch5);

    while(ch5==1)
    {
        printf("\n\t\t\tName: ");
        scanf(" %[^\n]s",name);
        printf("\t\t\tPhone no: ");
        scanf(" %[^\n]s",&phone);
        printf("\t\t\tAddress: ");
        scanf(" %[^\n]s",address);
        printf("\n\t\t\tPress 1 to edit your name,phone no and address-->\n\t\t\tPress 2 to confirm your order-->\n\n\t\t\tEnter Your Choice--> ");
        scanf(" %d",&ch5);
    }

    loading();

    printf("\n\n\t\t\t                     Your food is preparing!!!                  \n");
    printf("\n\t\t\t  ***************************************************************");
    printf("\n\t\t\t  | Order No          | %s                                       ",order);
    printf("\n\t\t\t  ***************************************************************");
    printf("\n\t\t\t  | Date & Time       | %s                                       ",ctime(&t));
    printf("\n\t\t\t  ***************************************************************");
    printf("\n\t\t\t  | Name              | %s                                       ",puts(name));
    printf("\n\t\t\t  ***************************************************************");
    printf("\n\t\t\t  | Phone no          | %s                                       ",puts(phone));
    printf("\n\t\t\t  ***************************************************************");
    if(ch==1)
    {
        printf("\n\t\t\t  | Order From        | Chinese Food Restaurant                 ");
    }
    if(ch==2)
    {
        printf("\n\t\t\t  | Order From        | Indian Food Restaurant                  ");
    }
    if(ch==3)
    {
        printf("\n\t\t\t  | Order From        | Malay Food Restaurant                   ");
    }

    printf("\n\t\t\t  ***************************************************************");
    printf("\n\t\t\t  | Delivery Address  | %s                                       ",address);
    printf("\n\t\t\t  ***************************************************************\n");

    printf("\n\n\t\t\t-------------------------------------------------------------------\n");
        printf("\t\t\t\t\t\t   List of Cart\n");
        printf("\t\t\t-------------------------------------------------------------------\n");
    printf("\t\t\t Name\t\t\t\t\t\t       Quantity\t\t\n");
        printf("\t\t\t\t\t\t\t\t\tSmall\t\tLarge\n");

    for(i=0;i<15;i++)
    {
        if(a[i].qty>0||a[i].qty1>0)
        {
            printf("\t\t\t%-40s \t  %d\t\t  %d\n",a[i].name,a[i].qty,a[i].qty1);
        }
    }
    if(sum<30)
    {
        printf("\n\n\t\t\tSubtotal :\t RM %.2f\n",sum);
        printf("\t\t\tTax :\t\t RM  %.2f\n",tax);
        printf("\t\t\tDelivery Fee:\t RM  3.99\n");
        printf("\n\t\t\t--------------------------");
        printf("\n\t\t\tTotal:\t\t RM  %.2f\n",sum+tax+3.99);
        printf("\t\t\t--------------------------");
    }
    if(sum>=30)
    {
        printf("\n\n\t\t\tSubtotal :\t RM %.2f\n",sum);
        printf("\t\t\tTax :\t\t RM  %.2f\n",tax);
        printf("\t\t\tDelivery Fee:\t RM  3.99\n");
        printf("\t\t\tDiscount:\t RM  %.2f\n",discount);
        printf("\n\t\t\t--------------------------");
        printf("\n\t\t\tTotal:\t\t RM %.2f\n",sum+tax+3.99-discount);
        printf("\t\t\t--------------------------");
    }
    if(method==1)
    {
        printf("\n\t\t\tPayment: Cash On Delivery");
    }
    else if(method==2)
    {
        printf("\n\t\t\tPayment: Online Banking");
    }
    printf("\n\n\t\t\tPress 1 To Continue Shopping-->\n\t\t\tPress 2 To exit-->\n\n\t\t\tEnter Your Choice--> ");
    scanf("%d",&ch4);

    if(ch4==1)
    {
        system("cls");
        sum=0;
        mainmenu();
    }
    else if(ch4==2)
    {
        system("cls");
    }
}
