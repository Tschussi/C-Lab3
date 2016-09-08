// Kevin Hames
// Ece 2602 27/9/15

#include <iostream>
#include "circle.cc"

int main()
{
    // creating variables and circle objects
    double px1 = -1.5;
    double px2 = -0.5;
    double py1 = -6.65;
    double py2 = 10.0;
	int ix1 = 1;
	int iy1 = 3;
	int ix2;
	int iy2;
    int menu;
	
	circle<int> my_obj1(ix1, ix1);
	circle<double> my_obj2(px1, py1, px2, py2);

    // menu option, allowing a user to select which function to call and calculates values of a user defined circle
    std:: cout << "(1) Compute Radius" << std::endl << "(2) Compute Circumference" << std::endl << "(3) Compute Area" << std::endl << "(4) Change Obj1 Cordinates" << std::endl << "(5) Change Obj2 Cordinates" << std::endl << "(6) Exit" << std::endl;
    while(menu != 6) {
    std::cin >> menu;
    switch (menu) {
        case 1 : // Radius
            std::cout << "The Radius of Circle one is " << my_obj1.radius() << std::endl;
			std::cout << "The Radius of Circle two is " << my_obj2.radius() << std::endl;
            break;
        case 2 : // Circumference
            std::cout << "The Circumference of Circle one is " << my_obj1.circumference() << std::endl;
			std::cout << "The Circumference of Circle two is " << my_obj2.circumference() << std::endl;
            break;
        case 3 : // Area
			std::cout << "The Area of Circle one " << my_obj1.area() << std::endl;
			std::cout << "The Area of Circle two " << my_obj2.area() << std::endl;
            break;
        case 4: // Change circle 1 int values
			std::cout << "Please enter the cordinates of the circle's center (x followed by y)" << std::endl;
			std::cin >> ix1;
			std::cin >> iy1;
			std::cout << "Please enter the cordinates of a point on the circle (x followed by y)" << std::endl;
			std::cin >> ix2;
			std::cin >> iy2;
			my_obj1.populate_classobj(ix1, iy1, ix2, iy2);
            break;
		case 5: // change circle 2 double values
			std::cout << "Please enter the cordinates of the circle's center (x followed by y)" << std::endl;
			std::cin >> px1;
			std::cin >> py1;
			std::cout << "Please enter the cordinates of a point on the circle (x followed by y)" << std::endl;
			std::cin >> px2;
			std::cin >> py2;
			my_obj2.populate_classobj(px1, py1, px2, py2);
			break;
		case 6:
			break;
        default:
            std::cout << "Invalid option " << std::endl;
    }
    }
    return 0;
}
