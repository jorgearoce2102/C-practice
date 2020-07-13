// #include "classes.h"
#include <iostream>
#include "classes.h"
#include <chrono> // for std::chrono functions


int main()
{
	Timer time;
	Point3d p(1.0, 2.0, 3.0);
	Vector3d v(2.0, 2.0, -3.0);

	p.print();
	p.moveByVector(v);
	p.print();

 std::cout << "Time elapsed: " << time.elapsed() << " seconds\n";
	return 0;
}
