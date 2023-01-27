/*
    Input Format

    The first and only line of input contains two space separated integers denoting the width and height of the rectangle.

    Constraints
    1 <= width, height <= 100

    Output Format

    The output should consist of exactly two lines:
    In the first line, print the width and height of the rectangle separated by space.
    In the second line, print the area of the rectangle.
*/

#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle
{
public:
    int width, height;
    void display()
    {
        cout << width << " " << height << endl;
    }
};
class RectangleArea : public Rectangle
{
public:
    void read_input()
    {
        cin >> width >> height;
    }
    void display()
    {
        cout << width * height << endl;
    }
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;

    /*
     * Read the width and height
     */
    r_area.read_input();

    /*
     * Print the width and height
     */
    r_area.Rectangle::display();

    /*
     * Print the area
     */
    r_area.display();

    return 0;
}