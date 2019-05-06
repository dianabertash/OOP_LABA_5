#define _CRT_SECURE_NO_WARNINGS
#include "AdTV.h"
#include <iostream>
#include <string.h>
#include "Ad.h"

AdTV::AdTV()
{
}

AdTV::AdTV(const char* channel, int viewnumber, int costoftv, int time)
{
	strcpy(this->channel, channel);
	this->viewnumber = viewnumber;
	this->costoftv = costoftv;
	this->time = time;
}

AdTV::~AdTV()
{
}

void AdTV::SetTime(int time)
{
	this->time = time;
}

int AdTV::GetTime() const
{
	return time;
}

void AdTV::SetCost(int c)
{
	this->costoftv = c;
}

int AdTV::GetCost() const
{
	return costoftv;
}

void AdTV::SetView(int w)
{
	this->viewnumber = w;
}

int AdTV::GetView() const
{
	return viewnumber;
}

const char* AdTV::GetChannel() const
{
	return channel;
}

void AdTV::SetChannel(char* channel)
{
	strcpy(this->channel, channel);
}

int AdTV::FullCost()
{
	return this->costoftv*this->viewnumber*this->time;
}