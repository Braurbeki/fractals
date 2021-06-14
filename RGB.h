#pragma once
struct RGB
{
	double r, g, b;
public:
	RGB(double r, double g, double b);
	friend RGB operator-(const RGB& first, const RGB& second);
};

