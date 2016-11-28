//
//  main.cpp
//  8d
//
//  Created by Jeff on 10/5/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//



//__________________________________________
// catch all ...
//
#include <iostream>
#include <stdexcept>   // for runtime_error
#include <string>
using namespace std;

int main() {
    string s("Worse");
    try {
        throw runtime_error("Catastrophe");
        throw 20;
        throw "Bad";
        throw s;
    }
    catch (int e) {
        cout << e << '\n';}
    catch (const char *e) {
        cout << e << '\n'; }
    catch (string e) {
        cout << e << '\n'; }
    // catch ( runtime_error &e ) {
    //     cout << e.what () << '\n'; }
    catch (...) {
        cout << "some unknown exception.\n";
    }
    return 0;
}

// // 16.1
// // This program demonstrates an exception being thrown and caught.
// #include <iostream>
// #include <string>
// using namespace std;

// double divide(int numerator, int denominator) {
//     if (denominator == 0) {
//         string exceptionString = "ERROR: Cannot divide by zero.\n";
//         throw exceptionString;
//     }
//     return static_cast<double>(numerator) / denominator;
// }

// int main()
// {
//     int num1, num2;  // To hold two numbers
//     double quotient; // To hold the quotient of the numbers

//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;

//     try { // Divide num1 by num2 and catch any potential exceptions.
//         quotient = divide(num1, num2);
//         cout << "The quotient is " << quotient << endl;
//     } catch (string exceptionString) {
//         cout << exceptionString;
//     }
// }
//
//
// //__________________________________________
// // 16.2
//
// #include <iostream>
// using namespace std;
//
// class Rectangle {
//   private:
//         double width, length;
//   public:
//     class NegativeSize { };    // Exception class
//     Rectangle() { width = 0.0; length = 0.0; }
//     void setWidth(double w) {
//         if (w >= 0) width = w;
//         else throw NegativeSize();
//     };
//     void setLength(double len) {
//         if (len >= 0)  length = len;
//         else  throw NegativeSize();
//     };
//     double getWidth() const { return width; };
//     double getLength() const { return length; };
//     double getArea() const { return width * length; };
// };
//
// int main()
// {
//     int width, length;
//     Rectangle myRectangle; // Create a Rectangle object.

//     cout << "Enter the rectangle's width: ";
//     cin >> width;
//     cout << "Enter the rectangle's length: ";
//     cin >> length;

//     try { // Store these values in the Rectangle object.
//         myRectangle.setWidth(width);
//         myRectangle.setLength(length);
//         cout << "The area of the rectangle is "
//               << myRectangle.getArea() << endl;
//     } catch (Rectangle::NegativeSize) {
//         cout << "Error: A negative value was entered.\n";
//     }
//     cout << "End of the program.\n";
// }

// //__________________________________________
// // 16.3

// #include <iostream>
// using namespace std;

// class Rectangle {
//   private:
//     double width, length;
//   public:
//     class NegativeWidth { }; // Exception class for each element
//     class NegativeLength { };
//     Rectangle() { width = 0.0; length = 0.0; }
//     void setWidth(double w) {
//         if (w >= 0) width = w;
//         else throw NegativeWidth();
//     };
//     void setLength(double len){
//         if (len >= 0) length = len;
//         else throw NegativeLength();
//     };
//     double getWidth() const { return width; };
//     double getLength() const { return length; };
//     double getArea() const { return width * length; };
// };

// int main()
// {
//     int width, length;

//     // Create a Rectangle object.
//     Rectangle myRectangle;

//     // Get the width and length.
//     cout << "Enter the rectangle's width: ";
//     cin >> width;
//     cout << "Enter the rectangle's length: ";
//     cin >> length;

//     try {
//         myRectangle.setWidth(width);
//         myRectangle.setLength(length);
//         cout << "The area of the rectangle is "
//               << myRectangle.getArea() << endl;
//     } catch (Rectangle::NegativeWidth) {
//         cout << "Error: A negative value was given "
//               << "for the rectangle's width.\n";
//     } catch (Rectangle::NegativeLength) {
//         cout << "Error: A negative value was given "
//               << "for the rectangle's length.\n";
//     }
// }

// //__________________________________________
// // 16.4

// #include <iostream>
// using namespace std;

// class Rectangle {
//   private:
//     double width, length;

//   public:
//     class NegativeWidth { }; // Exception class for each element
//     class NegativeLength { };

//     Rectangle() { width = 0.0; length = 0.0; }
//     void setWidth(double w) {
//         if (w >= 0) width = w;
//         else throw NegativeWidth();
//     };
//     void setLength(double len){
//         if (len >= 0) length = len;
//         else throw NegativeLength();
//     };
//     double getWidth() const { return width; };
//     double getLength() const { return length; };
//     double getArea() const { return width * length; };
// };

// int main()
// {
//     int width, length;
//     bool tryAgain = true; // Flag to re-read input

//     Rectangle myRectangle;
//     cout << "Enter the rectangle's width: ";
//     cin >> width;

//     // Store the width in the myRectangle object.
//     while (tryAgain) {
//         try {
//             myRectangle.setWidth(width);
//             // If no exception was thrown, then the
//             // next statement will execute.
//             tryAgain = false;
//         } catch (Rectangle::NegativeWidth) {
//             cout << "Please enter a non-negative value: ";
//             cin >> width;
//         }
//     }

//     cout << "Enter the rectangle's length: ";
//     cin >> length;

//     // Store the length in the myRectangle object.
//     tryAgain = true;
//     while (tryAgain) {
//         try {
//             myRectangle.setLength(length);
//             // If no exception was thrown, then the
//             // next statement will execute.
//             tryAgain = false;
//         } catch (Rectangle::NegativeLength) {
//             cout << "Please enter a non-negative value: ";
//             cin >> length;
//         }
//     }

//     cout << "The rectangle's area is "
//           << myRectangle.getArea() << endl;
// }


// //__________________________________________
// // 16.5

// #include <iostream>
// using namespace std;

// class Rectangle {
//   private:
//     double width, length;
//   public:
//     class NegativeWidth { // Exception Class
//       private:
//          int value;
//       public:
//           NegativeWidth(int val) { value = val; }
//           int getValue() const { return value; }
//       };

//     class NegativeLength { // Exception class
//       private:
//         int value;
//       public:
//         NegativeLength(int val) { value = val; }
//         int getValue() const { return value; }
//     };

//     // Basic Methods
//     Rectangle() { width = 0.0; length = 0.0; }
//     void setWidth(double w) {
//         if (w >= 0) width = w;
//         else throw NegativeWidth(w);
//     };
//     void setLength(double len) {
//         if (len >= 0) length = len;
//         else throw NegativeLength(len);
//     };
//     double getWidth() const { return width; };
//     double getLength() const { return length; };
//     double getArea() const { return width * length; };
// };

// int main() {
//     int width, length;

//     Rectangle myRectangle;
//     cout << "Enter the rectangle's width: ";
//     cin >> width;
//     cout << "Enter the rectangle's length: ";
//     cin >> length;

//     try {
//         myRectangle.setWidth(width);
//         myRectangle.setLength(length);
//         cout << "The area of the rectangle is "
//               << myRectangle.getArea() << endl;
//     } catch (Rectangle::NegativeWidth e) {
//         cout << "Error: " << e.getValue()
//               << " is an invalid value for the"
//               << " rectangle's width.\n";
//     } catch (Rectangle::NegativeLength e) {
//         cout << "Error: " << e.getValue()
//               << " is an invalid value for the"
//               << " rectangle's length.\n";
//     }
//     cout << "\nExit program!";
// }

// //__________________________________________
// // 16.6
// // This program demonstrates the bad_alloc exception.
// #include <iostream>
// #include <new>         // Needed for bad_alloc
// using namespace std;

// int main() {
//     double *ptr;    // Pointer to double

//     try {
//         ptr = new double [10000];
//     }
//     catch (bad_alloc) {
//         cout << "Insufficient memory.\n";
//     }
// }

