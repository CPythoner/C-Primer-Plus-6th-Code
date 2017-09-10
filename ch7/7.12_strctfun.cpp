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

void show_polar(polar dapos);
polar rect_to_polar(rect xypos);

int main()
{
	using namespace std;

	rect rplace;
	polar pplace;

	cout << "Enter th x and y values: ";
	while (cin >> rplace.x >> rplace.y)
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Next two numbers (q to quit): ";
	}

	cout << "Done.\n";	
	return 0;
}

// show polar coordinates, converting angle to degrees
void show_polar(polar dapos)
{
	using namespace std;

	const double Rad_to_deg = 57.29577951;

	cout << "distance = " << dapos.distance;
	cout << ", angel = " << dapos.angle * Rad_to_deg;
	cout << " degrees\n";
}

// convert rectangular to polar coordinates
polar rect_to_polar(rect xypos)
{
	polar answer;
	answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
	answer.angle = atan2(xypos.y, xypos.x);
	return answer;
}