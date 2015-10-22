#pragma once
using namespace std;

struct customer
{
  string name;
  customer *next;
};

void print_customers(customer &head);
