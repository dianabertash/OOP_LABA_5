#pragma once
#include "Ad.h"
class AdBoard :	public Ad
{
private:
	int height;
	int width;
	char place[20];
	int numberofdays;
	int priceboard;
public:
	AdBoard();
	AdBoard(const char* place, int numberofdays,  int height, int width, int priceboard);
	~AdBoard();
	void SetHeight(int h);
	void SetPlace(char* place);
	void SetNumberOfDays(int n);
	void SetWidth(int w);
	void SetPrice(int c);
	int GetHeight() const;
	int GetWidth() const;
	int GetPrice() const;
	const char* GetPlace() const;
	int GetNumberOfDays() const;
	int Square();
	int FullCost() override;
};

