/* Kevan Wiegand
   Copyright 2015

 Part One of this program is designed for the user to enter a value of money
  and then get back the least amount of bills in change.

 Part Two of this program asks the user to enter two dates 
  in which the dates will be compared to tell which date comes first.



*/


# include<stdio.h>

// START PART ONE


int main(void){                             // Main Method

  int twenty, ten, five, one, amount;          // Declare Variables
  printf("PART ONE\n\n");
  printf("Please enter the amount. " );
  scanf("%d",  &amount);                    // Asks the user to enter the money value

  twenty = amount/20;                     // This divides the user amount by twenty and then takes the remainder for division
  amount = amount%20;
  ten = amount/10;
  amount = amount%10;
  five = amount/5;
  one = amount%5;


                                                        // This series of code prints which bills should be printed based on the user input
  printf("Number of Twenty Dollar Bills:\t %d\n",twenty);
  printf("Number of Ten Dollar Bills: \t%d\n", ten);
  printf("Number of Five Dollar Bills: \t%d\n",five);
  printf("Number of One Dollar Bills: \t%d\n", one);


  printf("\n\n\n\n");




  printf("PART TWO\n\n");                          // Start Part TWO

  int m1, m2, d1, d2, y1, y2;                         // Declaring our variables

    printf("Please enter the first date as such: (mm/dd/yy). ");
    scanf("%d/%d/%d", &m1, &d1, &y1);                                // Scan in first date

    printf("Please enter the second date as such: (mm/dd/yy).");       // Scan in second date
    scanf("%d/%d/%d", &m2, &d2, &y2);

    if (y1<y2)                                                                  // Must compare Year first
 printf("%d/%d/%d is earlier than %d/%d/%d\n",m1, d1, y1, m2, d2, y2);
    else 
 printf("%d/%d/%d is earlier than %d/%d/%d\n",m2, d2, y2, m1, d1, y1);



if (y1==y2)
  {if (m1<m2)                                                                 // Compare Year and then month
printf("%d/%d/%d is earlier than %d/%d/%d\n",m1, d1, y1, m2, d2, y2);
    else if (m2<m1)
printf("%d/%d/%d is earlier than %d/%d/%d\n",m2, d2, y2, m1, d1, y1);}


 if (y1==y2 && m1==m2)                                                       //Compare month and day
    {if (d1<d2)
printf("%d/%d/%d is earlier than %d/%d/%d\n",m1, d1, y1, m2, d2, y2);
    else 
 printf("%d/%d/%d is earlier than %d/%d/%d\n",m2, d2, y2, m1, d1, y1);}

 return 0;}// END MAIN
