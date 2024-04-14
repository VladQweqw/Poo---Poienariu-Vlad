// headers must be here in order to use the house.h file
#ifndef MYLIBRARY_H
#define MYLIBRARY_H

#include <cmath> // cmath is uded for sqrt, max, pow, floor
#include <iostream> // iostream library for using cout, cin

// using namespace std  helps us to write cout<< instead of std::cout
using namespace std;


// House class
class House {
    // private members
    private:
        int size ;
        string border;
        string fill;

    // public because we want to be able to change these variables
    public:
        // here we set the default values for border and fill parameters
        House(int new_size, string new_border = "X", string new_fill = "*") {
            // keeping the size in the interval [3, 30], if the size is greater than 30, the size will be 30, if the size is lower than 3, the size will be 3
            size = max(3, min(30, new_size));
            border = new_border;
            fill = new_fill;
        };
        
        // House base size
        void GetSize() {
            cout<<"House base: "<< size;
        };

        // function for the Perimeter
        int Perimeter() {
            int triangle_perimeter = 3 * (size + 2); // math formula
            int squre_perimeter = 4 * size; // math formula

            // return the perimeter
            return triangle_perimeter + squre_perimeter;
        };

        // function for the Area
        float Area() {
            int triangle_area = (sqrt(3) / 4) * pow((size + 2), 2); // math formula
            int squre_area = pow(size, 2); // math formula
            
            // return the area
            return triangle_area + squre_area;
        };

        // function for changing the border ASCII 
        void SetBorder(char new_border) {
            border = new_border;
        };

        // function for changing the fill ASCII 
        void SetFill(char new_fill) {
            fill = new_fill;
        };

        // function for printing the House
        void Draw() {
            // getting the triangle side size, ( based on documentation it's the size + 2)
            int triangle_side = size + 2;

            // roof printing, the triangle
            for(int i = 1; i <= triangle_side; i++) {

                // functioned used to add white space ( creating the symmetrical shape )
                for(int x = 0; x < triangle_side - i; x++) {
                    cout<<" ";
                }

                for(int j = 0; j < i; j++) {
                    // the white space after fill is used as well for symmetrical shape
                    cout<<fill<<" ";
                }

                // new line
                cout<<"\n";
            }

            // square printing, the house ( a square matrix )
            for(int i = 0; i < size; i++) {
                // 2 white spaces, for the house to be in the middle
                cout<<"  ";
                
                // the for loop for printing the house
                for(int j = 0; j < size; j++) {
                    // white space is used to give a gap between point 
                    cout<<border<<" ";
                }

                // white space
                cout<<"\n"; 
            }
            
        };

        // house summary
        void Summary() {
            cout<<"House details"<<'\n';
            cout<<"Size: "<<size<<"\n";
            cout<<"Perimeter: "<< Perimeter()<<"\n";
            cout<<"Area: "<< Area()<<"\n";

            // draw the house
            Draw();
        };
        
        // grow the house size by 1
        void Grow() {
            size = max(3, min(30, ++size));
            
            Summary();
        }

        // shrink the house size by 1
        void Shrink() {
            size = max(3, min(30, --size));

            Summary();
        }
};


// used to end the .h files
#endif