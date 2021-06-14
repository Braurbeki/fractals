#include <iostream>
#include"FractalCreator.h"
using namespace std;

void main()
{
	int WIDTH = 800;
	int HEIGHT = 600;
	FractalCreator fractalCreator(WIDTH, HEIGHT);
	fractalCreator.addRange(0.0, RGB(22, 14, 49));
	fractalCreator.addRange(0.3, RGB(132, 132, 11));
	fractalCreator.addRange(0.5, RGB(13, 54, 46));
	fractalCreator.addRange(1.0, RGB(110, 56, 123));

	fractalCreator.addZoom(Zoom(295, 202, 0.1));
	fractalCreator.addZoom(Zoom(312, 304, 0.1));
	fractalCreator.run("test.bmp");
	cout << "Finished";
}