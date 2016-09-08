
#include "circle.h"
#include <cmath>  
#define PI (4*(atan(1)))

template<typename type>
circle<type>::circle(type px1, type py1, type px2, type py2) {
x = px1;
x2 = px2;
y = py1;
y2 = py2;
}

template<typename type>
double circle<type>::distance() {
    return  sqrt(pow(x-x2,2) + pow(y-y2,2));
}

template<typename type>
double circle<type>::radius() {
 return circle<type>::distance();
}

template<typename type>
double circle<type>::circumference() {
    return 2*PI*circle<type>::radius();
}

template<typename type>
double circle<type>::area() {
    return PI * pow(circle<type>::radius(),2);
}

template<typename type>
void circle<type>::populate_classobj(type px1, type py1, type px2, type py2) {
    x = px1;
    x2 = px2;
    y = py1;
    y2 = py2;
}
