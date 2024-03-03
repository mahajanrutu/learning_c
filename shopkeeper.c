/*A  buys a TV set for Rs. 3500 and sells it at a profit of 27%. Apart from this a VAT of 12.7% and Service Charge is 3.87% is charged. 

Write a C program to Display total selling price, profit along with vat and service charge.
To calculate the selling price, profit, VAT, and service charge, follow these steps:
1) Calculate the selling price:
  Selling Price = Cost Price + Profit
  Selling Price = Rs. 3500 + (27% of Rs. 3500)
2) Calculate the profit:
  Profit = Selling Price - Cost Price
3) Calculate VAT:
  VAT = 12.7% of Selling Price
4) Calculate Service Charge:
  Service Charge = 3.87% of Selling Price*/

  #include<stdio.h>
int main() {
    
    int profit,cost_price,selling_price,VAT,service_charge;
    cost_price=3500;
    profit=3500*27/100;
    printf("Selling price is=%d\n", cost_price+profit);
    selling_price=cost_price+profit;
    profit= selling_price-cost_price;
    printf("profit=%d\n", profit);
    VAT = selling_price * 12.7/100;
    printf("Vat=%d\n", VAT);
    service_charge = selling_price * 3.87/100;
    printf("Service charge=%d\n", service_charge);
    
return 0;    
}