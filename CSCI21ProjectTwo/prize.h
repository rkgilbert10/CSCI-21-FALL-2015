/*
 * Prize.h Header File
 * Header File for class Prize - to be used with Programming Project 2
 *
 * Rachel Gilbert
 * Date created: 9/19/15
 * Last date modified: 10/15/15 
 * 
 * SOURCES USED:
 */
#pragma once

#include <string>
using namespace std;



class Prize
{
     private:
	 	// Private data members: prizeName (string), prizeValue (unsigned int)
		 string prizeName;
		 unsigned int prizeValue;


     public:
	 	//default constructor - default values itemname("NO NAME"), itemValue(0)
		 Prize();
		 //overloaded constructor - parameters for all data members
		 Prize(string newPrizeName, unsigned int newPrizeValue);

          //destructor - empty :: should be a void function - name?
		 ~Prize();
		  //friend overloaded operator ==: retursn true if the prizeName
		  //and prizeValue of the two Prizes being compared are equivalent, else return false
		  //friend overloaded operator?
		 friend bool operator==(const Prize &p1, const Prize &p2);
		  //public accessors/getters and mutators/set for all data members - highlight test code
		 void setPrizeName(string newPrizeName);
		 void setPrizeValue(unsigned int newPrizeValue);
		 string getPrizeName();
		 unsigned int getPrizeValue();


};



