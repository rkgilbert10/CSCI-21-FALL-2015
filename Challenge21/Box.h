/* Header template file for Box
 * Created by Rachel Gilbert
 * Created:11/5/15
 * Modified: 11/5/15
 * Notes: 
 */


#pragma once
#include <iostream>
using namespace std;

template <class T> // generic or unspecified data type
class Box {
    private:
        T contents; // t means any type of data (instead of int)
    public:
        Box (T newContents) : contents(newContents) {}
          
        void setContents (T newContents) {
            contents = newContents;
        }
          
        T getContents(){
            return contents;
        }
          
        friend ostream& operator << (ostream& outs, const Box& b) {
          	outs << b.contents;
          	return outs;
        }

};

//Implementation inside the header because compilers have issues in templates
//do not compile header files! 