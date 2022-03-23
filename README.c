//DOCUMENTATION SECTION
/*FarisZ
DATE :10/01/2022
DESCPRIPTION : MINI_PROJECT
*/
//GLOBAL VARIABLE SECTION

//PRE-PROCESSOR SECTION
#include<stdio.h>

//MAIN FUNCTION SECTION
int main()
{
  int qty, number, total, selection;
 
  printf("\n\tMENU CARD");
  printf("\n****************************************");
  printf("\n1.TEA           RM:5");
  printf("\n2.COLD COFFEE   RM:10");
  printf("\n3.COFFEE        RM:8");
  printf("\n4.MILK SHAKE    RM15");
  printf("\n****************************************");
  printf("\nEnter Your Selection : ");
  scanf(" %d",&number);

 

  if ( number == 1 )
  {
    printf("\nYou have selected Tea");
    printf("\nEnter your Quantity : ");
    scanf(" %d",&qty);
    total = (qty*5);
    printf("\nTotal amount : %d",total);
  }

  else if ( number == 2)
  {
    printf("\nYou have selected Cold coffee");
    printf("\nEnter your Quantity : ");
    scanf(" %d",&qty);
    total = (qty*10);
    printf("\nTotal amount : %d",total);
  }

  else if ( number == 3)
  {
    printf("\nYou have selected Coffee");
    printf("\nEnter your Quantity : ");
    scanf(" %d",&qty);
    total = (qty*8);
    printf("\nTotal amount : %d",total);
  }

  else if ( number == 4)
  {
    printf("\nYou have selected Milk Shake");
    printf("\nEnter your Quantity : ");
    scanf(" %d",&qty);
    total = (qty*15);
    printf("\nTotal amount : %d",total);
  }

  else
  {
    printf("\nINVELID SELECTION");
  }

 
  return 0;
}

//USER-DEFINED SECTION
