/*
 * Box.cpp
 * To be used with Programming Project 2
 *
 * Rachel Gilbert
 * Date created: 9/19/15
 * Last date modified: 10/15/15 
 * 
 * SOURCES USED:
 */


#include "box.h"


#include <iostream>

/*Default constructor - sets the default values for the following
 * @param boxNumber, @param boxColor, @param prizeCapacity 
 * @param prizeCount 
 * Initializes the dynamic aray prizes. 
 */
Box::Box() {
	boxNumber = 0;
	boxColor = "NO COLOR";
	prizeCapacity = 5;
	prizeCount = 0;
	prizes = new Prize[prizeCapacity];
}

/* Overloaded constructor - sets parameters for the following
 * @param boxNumber, @param boxColor, @param prizeCapacity 
 * @param prizeCount 
 * Initializes the dynamic aray prizes. 
 */
Box::Box(unsigned int newBoxNumber, string newBoxColor, unsigned int newPrizeCapacity) :
	boxNumber(newBoxNumber), boxColor(newBoxColor), prizeCapacity(newPrizeCapacity){
	prizeCount = 0;
	prizes = new Prize[prizeCapacity];
}

/* Destructor
 * Frees memory associated with prizes. 
 */
Box::~Box() {
	if(prizes != NULL) {
		delete [] prizes;
		prizes = NULL;
	}
}

/* Setter for boxNumber.
 * @param newBoxNumber sets equal to private variable 
 */
void Box::setBoxNumber(unsigned int newBoxNumber) {
	boxNumber = newBoxNumber;
}
/* Getter for boxNumber.
 * @return the boxNumber
 */
unsigned int Box::getBoxNumber() {
	return boxNumber;
}
/* Setter for boxColor.
 * @param newBoxColor sets equal to private variable 
 */
void Box::setBoxColor(string newBoxColor) {
	boxColor = newBoxColor;
}
/* Getter for boxColor.
 * @return the boxColor 
 */
string Box::getBoxColor() {
	return boxColor;
}

/* Getter for prizeCapacity.
 * @return the prizeCapacity
 */
unsigned int Box::getPrizeCapacity() {
	return prizeCapacity;
}

/* Getter for prizeCount.
 * @return the prizeCount. 
 */
unsigned int Box::getPrizeCount() {
	return prizeCount;
}


/* Adds the prize to the array.
 * @param prize 
 * @return true if the prize can be added or false if it can't
 */
bool Box::addPrize(Prize prize) {
	if(prizeCount < prizeCapacity) {
		prizes[prizeCount] = prize;
		prizeCount++;
		return true;
	}
	else
		return false;
}

/* Gets the prize from the array at index.
 * @param index
 * @return scratch if it can't be done or
 * returns the prize at index. 
 */
Prize& Box::getPrize(unsigned int index) {
	if (index >= prizeCount) {
		return scratch;
	}
	else {
		return prizes[index];
	}
}

/* Removes the prize at the index in the array.
 * @param index
 * @returns scratch if the item can't be removed or
 * returns the item that was removed. 
 */
Prize Box::removePrize(unsigned int index) {
	if ( index >= prizeCount ) {
		return scratch;
	}
	else {
		Prize atIndex = prizes[index];
			for(unsigned int i = index; i<prizeCapacity-1; i++) {
				if(i<=prizeCount)
					prizes[index] = prizes[index+1];
			}
		prizeCount--;
		return atIndex;
	}
}
