// atrctfun.cpp -- functions with a structure argument
#include <iostream>
#include <cmath>

struct polar
{
	double distance;
	double angle;	
};

struct rect
{
	double x;	// horizontal distance from origin
	double y;	// vertical distance from origin
};

void show_polar(const polar *pda);
void rect_to_polar(const rect *pxy, polar *pda);

int main()
{
	using namespace std;

	rect rplace;
	polar pplace;

	cout << "Enter th x and y values: ";
	while (cin >> rplace.x >> rplace.y)
	{
		rect_to_polar(&rplace, &pplace);
		show_polar(&pplace);
		cout << "Next two numbers (q to quit): ";
	}

	cout << "Done.\n";	
	return 0;
}

// show polar coordinates, converting angle to degrees
void show_polar(const polar *pda)
{
	using namespace std;

	const double Rad_to_deg = 57.29577951;

	cout << "distance = " << pda->distance;
	cout << ", angel = " << pda->angle * Rad_to_deg;
	cout << " degrees\n";
}

// convert rectangular to polar coordinates
void rect_to_polar(const rect *pxy, polar *pda)
{
	pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
	pda->angle = atan2(pxy->y, pxy->x);
}