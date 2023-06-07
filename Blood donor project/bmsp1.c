#include<stdio.h>
#include<windows.h>
#include<string.h>
struct dinfo
{
char name[50];
int num;
int loc;
int bg;
};
struct s
{
    char name [50];
    int number ;
    int loc;
    int bg;

};

int donor();
file_open(struct s *a);
int welcome();
struct dinfo input_data();
int start_up();
int rec();
int emer();
int data_rec();
int main()
{
    int x;
    start_up();
    welcome();
    struct dinfo c;
    c=input_data();


    printf("\t\t\t\t1.Donor\n\t\t\t\t2.Recipient\n\t\t\t\t3.Emergency \n");
    printf("\tEnter your choice:  ");
    scanf("%d",&x);
    if(x==1)
    {
        donor ();
    }
    else if(x==2)
    {
     rec();

    }
    else if(x==3)
    {
      emer();

    }
    else
    {
        printf("Error");
    }


}

struct dinfo input_data()
{
    struct dinfo a;
    printf("\n\nEnter Your Name: ");
    gets(a.name);
    printf("Enter Your Number: ");
    scanf("%d",&a.num);
    printf("Select Your Location\n1.Banani\n2.Gulshan\n3.Uttara\n4.Mirpur\n5.Khilgaon\n ");
    printf("Enter Your Location: ");
    scanf("%d",&a.loc);
    printf("Select Blood Group \n1.A+\n2.A-\n3.B+\n4.B-\n5.AB+\n6.AB-\n7.O+\n8.O-\nEnter Your Blood Group:");
    scanf("%d",&a.bg);


       return a;
}

int start_up()
{
    float time;
    int n,i;
    for(i=1; i<41; i++)
    {
        printf(". ");
        Sleep(50);
    }
    {
       printf("\n");
        Sleep(200);
        printf("     *     *   * * * *   *       * * * *   * * * *   *      *   * * * *\n");
        Sleep(200);
        printf("     *     *   *         *       *     *   *     *   * *  * *   *\n");
        Sleep(200);
        printf("     *  *  *   * * *     *       *   * *   *     *   *  *   *   * * *\n");
        Sleep(200);
        printf("     * * * *   *         *       *         *     *   *      *   *\n");
        Sleep(200);
        printf("     *     *   * * * *   * * *   * * * *   * * * *   *      *   * * * *\n");
        Sleep(200);
        printf("\n");
        Sleep(200);
        printf("                         * * * * *   * * * *\n");
        Sleep(200);
        printf("                             *       *     *\n");
        Sleep(200);
        printf("                             *       *     *\n");
        Sleep(200);
        printf("                             *       *     *\n");
        Sleep(200);
        printf("                             *       * * * *\n\n");
        Sleep(200);
         printf("                * * * *   *        * * * *   * * * *   * * * *   \n");
        Sleep(200);
        printf("                *      *  *        *     *   *     *   *      *   \n");
        Sleep(200);
        printf("                * * * *   *        *     *   *     *   *      *   \n");
        Sleep(200);
        printf("                *      *  *        *     *   *     *   *      *  \n");
        Sleep(200);
        printf("                * * * *   * * * *  * * * *   * * * *   * * * *\n");
        Sleep(200);
        printf("\n\n");
        Sleep(200);
        printf("  *     *     *      *      *      *      * * * *   * * * *   * * * * \n");
        Sleep(200);
        printf("  * * * *    * *     * *    *     * *     *         *         *     *\n");
        Sleep(200);
        printf("  *  *  *   * * *    *   *  *    * * *    *   * *   * * * *   * * * * \n");
        Sleep(200);
        printf("  *     *  *     *   *    * *   *     *   *     *   *         *  *   \n");
        Sleep(200);
        printf("  *     * *       *  *      *  *       *  * * * *   * * * *   *    *  \n");
        Sleep(200);
        printf("\n");
        for(i=1; i<41; i++)
        {
            printf(". ");
            Sleep(50);
        }
    }
}

int welcome()


{
    printf("\n\t\t\tSpare only some minutes\n");
    printf("\n\t\t\t\tsave a life\n,");
    printf("\n\t\t\tDonate your blood for a reason\n");
    printf("\n\t\t\t\tlet the reason to be alive..\n");
}

int options()
{
    int x;
    printf("\t\t\t\t1.Donor\n\t\t\t\t2.Recipient\n\t\t\t\t3.Emergency \n");
    printf("\tEnter your choice:  ");
    scanf("%d",&x);
    if(x==1)
    {
        printf("Donor");
    }
    else if(x==2)
    {
        printf("Recipient");

    }
    else if(x==3)
    {
        printf("Emergency");

    }
    else
    {
        printf("Error");
    }

}
int emer()
{   int b,l,n, xL, xb;
    printf("\nEnter The Blood Group you are seeking for :");
     scanf("%d",&xb);
    printf("\nLocation: ");
    scanf("%d",&xL);
    printf("\nNumber: ");
    scanf("%d",&n);

}
int rec()
{
   int c,z,n2, zl, zb;
    printf("\nEnter The Blood Group you are seeking for :");
     scanf("%d",&zb);
    printf("\nLocation: ");
    scanf("%d",&zl);
    printf("\nNumber: ");
    scanf("%d",&n2);



}
int donor()
{


int x; int x1; int e;
printf("\nHave you ever donated blood before?");
printf("\n1.Yes\n2.NO\n");
scanf("%d",&x);

if(x==1)
{
    printf("Have you donated blood within last 112 days (around 3 months)");
    printf("\n1.Yes\n2.NO\n");
    scanf("%d",&x1);
    if(x1==1)
    {


        printf("Thank you For Your Information but You're not Eligible For donation right now,Come Again Whenever you're ready");
        printf("\n\n(You must wait a minimum of 56 days between whole blood donations. You must wait at least 7 days after donating blood before you can donate platelets. After an automated double red cell collection, you must wait 112 days before donating again.)");
    }
   else if(x1==2)
    printf("You're Almost ready\n");
   printf("One last question?\n\nWill you be able to donate blood during the Emergency situation? ");
      printf("\nPress 1 if Yes \nPress 2 if No");
   scanf("%d",&e);
}
else if(x==2)
{
   printf("You're Almost ready\n");
   printf("One last question?\n\nWill you be able to donate blood during the Emergency situation ");
   printf("\nPress 1 if Yes\nPress 2 if No\n");
   scanf("%d",&e);
}
else
    {

    printf("Error");
    }

}

