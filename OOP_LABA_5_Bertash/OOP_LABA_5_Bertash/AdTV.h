#pragma once
#include "Ad.h"
class AdTV : public Ad
{
private:
	char channel[20];
	int time;
	int viewnumber;
	int costoftv;
public:
	AdTV();
	AdTV(const char* channel, int viewnumber, int costoftv, int time);
	~AdTV();
	void SetTime(int time);
	int GetTime() const;
	void SetCost(int c);
	int GetCost() const;
	void SetView(int w);
	int GetView() const;
	const char* GetChannel() const;
	void SetChannel(char* channel);
	int FullCost() override;
};

