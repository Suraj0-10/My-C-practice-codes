/*an electricity board charges  the following rates of use of electricity
for the first 200 units 80 paise unit;for next 100 units 90 paise per unit;
beyond 300 units rs 1 per unit, all users are charged a minimum of rs.100
as meter charge. if the total amount is charged more than rs.400 then an 
additional surcharge of 15% of total amount is charged, write a program to read 
the name of user,number of units consumed and print out the charges.*/

#include<stdio.h>
void main()
{
    char name[10];
    int unit,mincharge;
    float billcharge;
    printf("Enter your name and units consumed\n");
    scanf("%s %d",name,&unit);
    mincharge = 100;
    if(unit<=200)
    {
        billcharge = unit*0.8 + mincharge;
    }
    else if(unit<=300)
    {
        billcharge = 200*0.8 + (unit-200)*0.90 + mincharge;
    }
    else if(unit>300)
    {
        billcharge = 200*0.8 + 100*0.9 + (unit-300)*1 + mincharge;
    }
    if(billcharge>400)
    {
        billcharge = billcharge + billcharge*0.15;
    }
    printf("Name : %s\nbill amount = %f",name,billcharge);

}