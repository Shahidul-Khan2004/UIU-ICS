/*Let’s make a program that calculates the price of a gold ornament to be purchased by the
customer. It takes input of purchased amount of gold, today’s rate/bhori and discount rate. Then,
Vat (15%) and the entered discount to be given to the customer. Final price should also be “floored”
to the nearest hundredth value. Also, one tk per purchase to be donated.*/

#include <stdio.h>
#define VAT 15.0

int main (void) {

    float rate, ammount, discount,disc_price, raw_price, price;
    printf("                            ##UIU GOLD SHOP##\n");
    printf("                              Checkout Menu\n");
    printf("Today's price per bhori: ");
    scanf("%f", &rate);
    printf("Today's special discount rate:   %%\b\b\b");
    scanf("%f", &discount);
    printf("Enter the weight of gold bought by customer (in bhori): ");
    scanf("%f", &ammount);
    printf("\n");
    raw_price = rate * ammount;
    disc_price = raw_price - (raw_price * discount / 100);
    price = disc_price + (disc_price * VAT / 100) + 1;
    printf("Price: %f\n", price);
    int int_price = (int) price;
    printf("       ***5%% discount given, 15%% VAT added and 1tk donated!***\n");
    printf("\n");
    int rounded_price = (int_price - (int_price % 100));
    printf("Price for the customer: %d", rounded_price);
}