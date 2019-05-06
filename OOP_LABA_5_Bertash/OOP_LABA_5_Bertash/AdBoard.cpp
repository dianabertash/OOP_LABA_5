#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <string.h>
#include "AdBoard.h"
#include "Ad.h"
AdBoard::AdBoard()
{
}

AdBoard::AdBoard(const char* place, int numberofdays, int height, int width, int priceboard)
{
	strcpy(this->place, place);
	this->numberofdays= numberofdays;
	this->priceboard = priceboard;
	this->height = height;
	this->width=width;
}

AdBoard::~AdBoard()
{
}

void AdBoard::SetHeight(int h)
{
	this->height = h;
}

int AdBoard::GetHeight() const
{
	return height;
}

void AdBoard::SetWidth(int w)
{
	this->width = w;
}

int AdBoard::GetWidth() const
{
	return width;
}

const char* AdBoard::GetPlace() const
{
	return place;
}

int AdBoard::GetNumberOfDays() const
{
	return numberofdays;
}

int AdBoard::GetPrice() const
{
	return priceboard;
}

void AdBoard::SetPlace(char* place)
{
	strcpy(this->place, place);
}

void AdBoard::SetNumberOfDays(int n)
{
	this->numberofdays = n;
}

void AdBoard::SetPrice(int c)
{
	this->priceboard = c;
}

int AdBoard::Square()
{
	return GetHeight()*GetWidth();
}

int AdBoard::FullCost()
{
	return this->numberofdays*this->priceboard*Square();
}