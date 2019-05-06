#define _CRT_SECURE_NO_WARNINGS
#include "Ad.h"
#include <iostream>
#include <string.h>

Ad::Ad()
{
}

Ad::Ad(char* name, char* customer)
{
	strcpy(this->name, name);
	strcpy(this->customer, customer);
}

Ad::~Ad()
{
}

void Ad::SetName(char* n)
{
	strcpy(this->name, n);
}

void Ad::SetCustomer(char* c)
{
	strcpy(this->customer, c);
}

const char* Ad::GetName() const
{
	return name;
}

const char* Ad::GetCustomer() const
{
	return customer;
}
