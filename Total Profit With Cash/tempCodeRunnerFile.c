#include<stdio.h>
void main()
{
    float profit,backToBkash,amount,dollar,kawsar90,affan10,AnotherProfit;
    printf("Enter Your Total Ammount in BDT = ");
    scanf("%f",&amount);

    
    dollar = amount / 120;
    profit = (dollar * 120) - (dollar * 80);
    backToBkash = (amount - profit);
    kawsar90 = (amount * 90)/100 ;
    affan10 = (amount * 10)/100 ;
    AnotherProfit = (profit - affan10);
    
    printf("\nTotal Dollar = %0.2f Dollar",dollar);
    printf("\nTotal Profit of Md Kawsar with Cash = %0.2f TK",kawsar90) ;
    printf("\nTotal Profit of Affan Chowdhury = %0.2f TK",affan10) ;

    printf("\n\nTotal Profit of Md Kawsar Only Profit = %0.2f TK",AnotherProfit) ;
    printf("\nBack to Another Bkash = %0.2f Tk\n\n",backToBkash);

}