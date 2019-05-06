#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <string.h>
#include "Ad.h"
#include "AdTV.h"
#include "AdBoard.h"
using namespace std;

int FullSum(Ad** ad, int n);
void SortArray(Ad** ad, int n);

int main()
{
	const int AdNumber = 4;
	Ad **advert = new Ad*[AdNumber];
	advert[0] = new AdTV("1+1", 250, 5000, 2);
	advert[1] = new AdTV("BBC", 150, 10000, 1);
	advert[2] = new AdBoard("Lukasha st.", 30, 5, 4, 4000);
	advert[3] = new AdBoard("Prusheva st.", 50, 3, 3, 2000);

	int fullprice[AdNumber];
	int newfullprice[AdNumber];
	for (int i = 0; i < 4; i++)
	{
		fullprice[i] = advert[i]->FullCost();
		cout << fullprice[i] << endl;
	}
	cout << "FullSum:" << FullSum(advert, AdNumber) << endl;
	SortArray(advert, AdNumber);
	cout << "Fraction array after sorting: " << endl;
	for (int i = 0; i < AdNumber; i++)
	{
		newfullprice[i] = advert[i]->FullCost();
		cout << newfullprice[i] << endl;
	}

	for (int i = 0; i < 4; i++)
	{
		delete advert[i];
	}
	delete[] advert;
	system("pause");
	return 0;
}

int FullSum(Ad** ad, int n)
{
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		k += ad[i]->FullCost();
	}
	return k;
}

void SortArray(Ad** ad, int n)
{
	Ad *temp;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < (n - 1 - i); j++)
		{
			if (ad[j]->FullCost() > ad[j + 1]->FullCost())
			{
				temp = ad[j];
				ad[j] = ad[j + 1];
				ad[j + 1] = temp;
			}
		}
	}
}