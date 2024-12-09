/*Write a program that calculates the price of Oil to be purchased by the customer. It takes input
of purchased amount of oil, today’s rate/liter and discount rate. Then, Vat (20%) and the
entered discount to be given to the customer. Final price should also be “floored” to the nearest
hundredth value. Also, two tk per purchase to be donated.*/

#include <stdio.h>
#include <math.h>

#define VAT 20.0

int main (void) {

    float rate, amount, discount,disc_price, raw_price, price;
    printf("\t\t\t##UIU OIL SHOP##\n");
    printf("\t\t\t Checkout Menu\n");
    printf("Enter the amount of oil purchased by the customer (in liters): ");
    scanf("%f", &amount);
    printf("Today's rate/liter: ");
    scanf("%f", &rate);
    printf("Today's discount rate:   %%\b\b\b");
    scanf("%f", &discount);
    printf("\n");
    raw_price = rate * amount;
    disc_price = raw_price - (raw_price * discount / 100);
    price = disc_price + (disc_price * VAT / 100) + 2;
    printf("Price: %f\n", raw_price);
    printf("\t***%.2f%% discount given, 20%% VAT added and 2tk donated!***\n", discount);
    printf("\n");
    int finalPrice = floor(price / 100) * 100;
    printf("Total: %f\n", price);
    printf("Final price for the customer: %d", finalPrice);
}