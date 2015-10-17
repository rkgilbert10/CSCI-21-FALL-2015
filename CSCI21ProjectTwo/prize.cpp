/*
 * Prize.cpp
 * To be used with Programming Project 2
 *
 * Rachel Gilbert
 * Date created: 9/19/15
 * Last date modified: 10/15/15 
 * 
 * SOURCES USED:
 */



#include "prize.h"


/* Default constructor - sets the defaul values for
 * @param prizeName
 * @param prizevalue
 */
Prize::Prize() {
	prizeName = "NO NAME";
	prizeValue = 0;
}
/* Overloaded constructor sets parameters for the following
 * @param newPrizeName 
 * @param newPrizeValue
 */
Prize::Prize(string newPrizeName, unsigned int newPrizeValue) : 
prizeName(newPrizeName), prizeValue(newPrizeValue)
{}

/* Destructor
 * Empty
 */
Prize::~Prize() {

}
/* Setter for prizeName.
 * @param newPrizeName sets equal to private variable 
 */
void Prize::setPrizeName(string newPrizeName){
    prizeName = newPrizeName;
}

/* Setter for prizeValue.
 * @param newPrizeValue sets equal to private variable 
 */
void Prize::setPrizeValue(unsigned int newPrizeValue) {
    prizeValue = newPrizeValue;
}

/* Getter for prizeName.
 * @return the prizeName. 
 */
string Prize::getPrizeName() {
	return prizeName;
}

/* Getter for prizeValue.
 * @return the prizeValue. 
 */
unsigned int Prize::getPrizeValue() {
	return prizeValue;
}

/* Friend overloaded operator
 * @param p1 - references the prize on the left to be compared
 * @param p2 - references the prize on the right to be compared
 * @return true or false if the names and values are the same.
 */
bool operator==(const Prize &p1, const Prize &p2){
	return (p1.prizeName == p2.prizeName &&
			p1.prizeValue == p2.prizeValue);
}



