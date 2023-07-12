#include "calc.h"

// Develpoer A

// Develpoer C

// Develpoer K

// Develpoer J

bool valid(int a)
{
  bool result = false;
  if (a > 0)
  {
    result = true;
  }
  return result;
}

int multiply(int a, int b){
  return a * b;
}

int add(int a, int b){
  return a + b;
}

int minus_mine(int a, int b)
{
  return a - b;
}

int sum(int arr[], int len)
{
  int ret = 0;
  for (int i = 0; i < len; ++i)
    ret += arr[i];
  return ret;
}

int shopping(int money, int price){
  return money - price;
}

// Dev B
// git is very fun? Right?