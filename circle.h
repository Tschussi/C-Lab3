template <typename type>
class circle
{
public:
	circle(type px1 = 0, type py1 = 0, type px2 = 0, type py2 = 0);
    double radius(); // returns the radius of the circle
    double circumference(); // returns the circumference of the circle
    double area() ; // returns the area of the circle
    void populate_classobj(type px1, type py1, type px2, type py2); // declares the variables for other functions
protected:
    double distance(); // returns the radius for use in class functions
private: // variables for use in class functions
    type x;
    type x2;
    type y;
    type y2;
};

