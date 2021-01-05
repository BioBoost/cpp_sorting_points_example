// Compile using:
// make
// or
// g++ main.cpp string_comparator.cpp -o sort

#include <iostream>
#include <vector>
#include <algorithm>    // std::sort

using namespace std;

class Point {

  public:
    Point(int x, int y) {
      this->_x = x;
      this->_y = y;
    }

  public:
    int x() { return _x; }
    int y() { return _y; }

  private:
    int _x = 0;
    int _y = 0;

};

// Comparator class provides static method that
// allows sorting of objects

class PointComparator {

  public:
    // Method is made static and so is called on class not on object
    static bool by_y(Point first, Point second) {
      return first.y() < second.y();
    }

    static bool by_y_x(Point first, Point second) {
      return (first.y() == second.y()) ? first.x() < second.x() : first.y() < second.y();
    }

};

int main() {

  cout << "Demo custom sorting of std::vector" << endl;

  std::vector<Point> points;

  points.push_back(Point(3, 4));
  points.push_back(Point(2, 1));
  points.push_back(Point(5, 8));
  points.push_back(Point(3, 2));
  points.push_back(Point(3, 6));
  points.push_back(Point(3, 8));
  points.push_back(Point(5, 2));
  points.push_back(Point(6, 1));
  points.push_back(Point(1, 2));
  points.push_back(Point(4, 2));
  points.push_back(Point(0, 2));
  points.push_back(Point(0, 1));

  cout << "Unsorted:" << endl;
  for (auto point : points) {
    cout << "\t" << point.x() << ", " << point.y() << endl;
  }

  // Sort method requires begin and end iterator for the section to sort
  // As a third argument it can take a static comparator method
  sort(points.begin(), points.end(), PointComparator::by_y);

  cout << endl << "Nicely sorted by y:" << endl;
  for (auto point : points) {
    cout << "\t" << point.x() << ", " << point.y() << endl;
  }

  // Sort method requires begin and end iterator for the section to sort
  // As a third argument it can take a static comparator method
  sort(points.begin(), points.end(), PointComparator::by_y_x);

  cout << endl << "Nicely sorted by y and then x:" << endl;
  for (auto point : points) {
    cout << "\t" << point.x() << ", " << point.y() << endl;
  }

  return 0;
}