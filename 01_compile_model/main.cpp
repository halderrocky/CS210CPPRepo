#include <iostream> //existing libraries that I want; input and output
#include "shape_utility.h"

#define GREETING "Welcome to CS 210" // define that as a greeting, define the keyword

int main() {

    double area1 = circle_area(4.0);
    double area2 = rectangle_area(4.0, 4.0);

    std::cout << "Area 1 Circle Area: " << area1 << std::endl;
    std::cout << "Area 2 Rectangle Area " << area2;

    return 0; //not returning anything
}

//red circle = break point

//NEVER INCLUDE CPP FILES IN MAIN!!! ONLY HEADER FILES!
//main, cpp, .h