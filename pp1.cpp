/*
 * Programming Project 1
 * First programming project for CSCI 21
 * - Due Sept. 18
 *
 * Rachel Gilbert
 * Date created: 8/26/15
 * Last date modified: 8/30/15 **Completed** Check comments
 *
 * SOURCES USED: 
 * http://www.cplusplus.com/reference/cctype/isdigit/
 * http://www.cplusplus.com/reference/cctype/isalpha/
 */

#include <cassert>
#include <climits>
#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

void countCharacters (string theString, int& alpha, int& num);
string upAndDown (string theString);
int countWords (string theString);
int computeAverage (int values [], int arraySize);
int findMinValue (int values [], int arraySize);
int findMaxValue (int values [], int arraySize);

/* for unit testing -- do not alter */
template <typename X, typename A>
void btassert(A assertion);
void unittest ();

int main (int argc, char* argv[]) {
	unittest();
	
	return 0;
}



/* Counts the number of alphabetic characters, and numeric characters
 * in a given string. 
 * @param theString is a string given by the user/input
 * @param num counts how many numbers there are. 
 * @param alpha counts how many alphabetic characters there are. 
 * 
 */
void countCharacters (string theString, int& alpha, int& num) {

alpha =0;
num =0;

for (int i =0; i < theString.length(); i++){

	if (isdigit(theString[i])) 
		num++;
	
	if (isalpha(theString[i]))
		alpha++;
	}
	return;
}


/* Function will alternate capatilize/lowercase letters in a string;
 * beginning with the first leter being capital. 
 * @param theString is a string given by the user/input
 * @return the string with alternate capital/lowercase letters. 
 */
string upAndDown (string theString){
	for (int i = 0; i< theString.length(); i++) {
		if (i % 2)
			theString[i] = tolower(theString[i]);
		else
			theString[i] = toupper(theString[i]);
	}	
	
	return theString;
}



/* Counts how manu words are in the string - counts spaces after the first
 * alpha character in the string. 
 * @param theString is a string given by the user/input
 * @param value counts how many words are in the string
 * @return the number of words
 */


int countWords (string theString){
	int value = 0;
	for (int i=0; i < theString.length(); i++) {
		if (theString[i] == ' ')
			value++;
	}
	if (isalpha(theString[0]))
		value++;
		
	return value;
}


/* Takes the sum of all the numbers in the given array, and then divides
 * by the number of items; thus providing the average of the array. 
 * @param values is an array holding a list of numbers
 * @param arraySize is the size of the array. 
 * @param sum gets the total of all the elements in the array added together
 * @param avg calculates the sum divided by the total number of elements
 * @return the average of the values in the array
 */
 
int computeAverage (int values [], int arraySize){
	
	int sum = 0;
	for (int i = 0; i<arraySize; i++) {
		sum+= values[i];
	}
	int avg = sum/arraySize;
	
	return avg;
}



/* Identifies the smallest value in the array. 
 * @param lowestValue assigns the lowest value in the array
 * @param values is an array holding a list of numbers
 * @param arraySize is the size of the array. 
 * @return the smallest value in the array
 */
 
int findMinValue (int values [], int arraySize){
	
	int lowestValue = values[0];
	for (int i = 0; i<arraySize; i++) {
		if (values[i] < lowestValue)
			lowestValue = values[i];
	}
	return lowestValue;
}

/* Identifies the largest value in the array.
 * @param highestValue assigns the highest value in the array
 * @param values is an array holding a list of numbers
 * @param arraySize is the size of the array. 
 * @return the highest value in the array
 */
 
int findMaxValue (int values [], int arraySize){
	int highestValue = values[0];
	for (int i = 0; i<arraySize; i++) {
		if (values[i] > highestValue)
			highestValue = values[i];
	}
	return highestValue;
}

/*
 * Unit testing functions. Do not alter.
 */
void unittest () {

	unsigned short utCount = 30;
	unsigned short utPassed = 0;

	cout << "\nSTARTING UNIT TEST\n\n";

	int n1=0, n2=0;

	try {
		countCharacters("", n1, n2);
		btassert<bool>((n1 == 0) && (n2 == 0));
		cout << "Passed TEST 1: countCharacters(empty string)\n";
		++utPassed;
	} catch (bool b) {
		cout << "# FAILED TEST 1 #\n";
	}

	try {
		countCharacters("hello", n1, n2);
		btassert<bool>((n1 == 5) && (n2 == 0));
		cout << "Passed TEST 2: countCharacters(\"hello\")\n";
		++utPassed;
	} catch (bool b) {
		cout << "# FAILED TEST 2 #\n";
	}

	try {
		countCharacters("12345", n1, n2);
		btassert<bool>((n1 == 0) && (n2 == 5));
		cout << "Passed TEST 3: countCharacters(\"12345\")\n";
		++utPassed;
	} catch (bool b) {
		cout << "# FAILED TEST 3 #\n";
	}

	try {
		countCharacters("hello 12345", n1, n2);
		btassert<bool>((n1 == 5) && (n2 == 5));
		cout << "Passed TEST 4: countCharacters(\"hello 12345\")\n";
		++utPassed;
	} catch (bool b) {
		cout << "# FAILED TEST 4 #\n";
	}

	try {
		countCharacters("&,.", n1, n2);
		btassert<bool>((n1 == 0) && (n2 == 0));
		cout << "Passed TEST 5: countCharacters(\"&,.\")\n";
		++utPassed;
	} catch (bool b) {
		cout << "# FAILED TEST 5 #\n";
	}

	string s;

	try {
		s = upAndDown("hello");
		btassert<bool>(s == "HeLlO");
		cout << "Passed TEST 6: upAndDown(\"hello\")\n";
		++utPassed;
	} catch (bool b) {
		cout << "# FAILED TEST 6 #\n";
	}

	try {
		s = upAndDown("HeLlO");
		btassert<bool>(s == "HeLlO");
		cout << "Passed TEST 7: upAndDown(\"HeLlO\")\n";
		++utPassed;
	} catch (bool b) {
		cout << "# FAILED TEST 7 #\n";
	}

	try {
		s = upAndDown("hElLo");
		btassert<bool>(s == "HeLlO");
		cout << "Passed TEST 8: upAndDown(\"hElLo\")\n";
		++utPassed;
	} catch (bool b) {
		cout << "# FAILED TEST 8 #\n";
	}

	try {
		s = upAndDown("");
		btassert<bool>(s == "");
		cout << "Passed TEST 9: upAndDown(empty string)\n";
		++utPassed;
	} catch (bool b) {
		cout << "# FAILED TEST 9 #\n";
	}

	try {
		s = upAndDown("a");
		btassert<bool>(s == "A");
		cout << "Passed TEST 10: upAndDown(\"a\")\n";
		++utPassed;
	} catch (bool b) {
		cout << "# FAILED TEST 10 #\n";
	}

	try {
		btassert<bool>(countWords("") == 0);
		cout << "Passed TEST 11: countWords(empty string)\n";
		++utPassed;
	} catch (bool b) {
		cout << "# FAILED TEST 11 #\n";
	}

	try {
		btassert<bool>(countWords("hello") == 1);
		cout << "Passed TEST 12: countWords(\"hello\")\n";
		++utPassed;
	} catch (bool b) {
		cout << "# FAILED TEST 12 #\n";
	}

	try {
		btassert<bool>(countWords("hello,world") == 1);
		cout << "Passed TEST 13: countWords(\"hello world\")\n";
		++utPassed;
	} catch (bool b) {
		cout << "# FAILED TEST 13 #\n";
	}

	try {
		btassert<bool>(countWords("hello world") == 2);
		cout << "Passed TEST 14: countWords(\"hello world\")\n";
		++utPassed;
	} catch (bool b) {
		cout << "# FAILED TEST 14 #\n";
	}

	try {
		btassert<bool>(countWords("hello, world") == 2);
		cout << "Passed TEST 15: countWords(\"hello, world\")\n";
		++utPassed;
	} catch (bool b) {
		cout << "# FAILED TEST 15 #\n";
	}

	int values [] = {10, 20, 30};
	try {
		btassert<bool>(computeAverage(values, 3) == 20);
		cout << "Passed TEST 16: computeAverage([10,20,30])\n";
		++utPassed;
	} catch (bool b) {
		cout << "# FAILED TEST 16 #\n";
	}

	values[0] = 0, values[1] = 0, values[2] = 0;
	try {
		btassert<bool>(computeAverage(values, 3) == 0);
		cout << "Passed TEST 17: computeAverage([0,0,0])\n";
		++utPassed;
	} catch (bool b) {
		cout << "# FAILED TEST 17 #\n";
	}

	values[0] = 5, values[1] = 7, values[2] = 11;
	try {
		btassert<bool>(computeAverage(values, 3) == 7);
		cout << "Passed TEST 18: computeAverages([5,7,11])\n";
		++utPassed;
	} catch (bool b) {
		cout << "# FAILED TEST 18 #\n";
	}

	values[0] = -10, values[1] = -20, values[2] = -30;
	try {
		btassert<bool>(computeAverage(values, 3) == -20);
		cout << "Passed TEST 19: computeAverages([-10,-20,-30])\n";
		++utPassed;
	} catch (bool b) {
		cout << "# FAILED TEST 19 #\n";
	}

	values[0] = -5, values[1] = 0, values[2] = 5;
	try {
		btassert<bool>(computeAverage(values, 3) == 0);
		cout << "Passed TEST 20: computeAverages([-5,0,5])\n";
		++utPassed;
	} catch (bool b) {
		cout << "# FAILED TEST 20 #\n";
	}

	values[0] = -1, values[1] = 0, values[2] = 1;
	try {
		btassert<bool>(findMinValue(values, 3) == -1);
		cout << "Passed TEST 21: findMinValue([-1,0,1])\n";
		++utPassed;
	} catch (bool b) {
		cout << "# FAILED TEST 21 #\n";
	}

	values[0] = -3, values[1] = -2, values[2] = -1;
	try {
		btassert<bool>(findMinValue(values, 3) == -3);
		cout << "Passed TEST 22: findMinValue([-3,-2,-1])\n";
		++utPassed;
	} catch (bool b) {
		cout << "# FAILED TEST 22 #\n";
	}

	values[0] = 0, values[1] = 1, values[2] = 2;
	try {
		btassert<bool>(findMinValue(values, 3) == 0);
		cout << "Passed TEST 23: findMinValue([0,1,2])\n";
		++utPassed;
	} catch (bool b) {
		cout << "# FAILED TEST 23 #\n";
	}

	values[0] = 1, values[1] = 1, values[2] = 1;
	try {
		btassert<bool>(findMinValue(values, 3) == 1);
		cout << "Passed TEST 24: findMinValue([1,1,1])\n";
		++utPassed;
	} catch (bool b) {
		cout << "# FAILED TEST 24 #\n";
	}

	values[0] = INT_MAX, values[1] = INT_MAX, values[2] = INT_MAX;
	try {
		btassert<bool>(findMinValue(values, 3) == INT_MAX);
		cout << "Passed TEST 25: findMinValue([INT_MAX,INT_MAX,INT_MAX])\n";
		++utPassed;
	} catch (bool b) {
		cout << "# FAILED TEST 25 #\n";
	}

	values[0] = -1, values[1] = 0, values[2] = 1;
	try {
		btassert<bool>(findMaxValue(values, 3) == 1);
		cout << "Passed TEST 26: findMaxValue([-1,0,1])\n";
		++utPassed;
	} catch (bool b) {
		cout << "# FAILED TEST 26 #\n";
	}

	values[0] = -3, values[1] = -2, values[2] = -1;
	try {
		btassert<bool>(findMaxValue(values, 3) == -1);
		cout << "Passed TEST 27: findMaxValue([-3,-2,-1])\n";
		++utPassed;
	} catch (bool b) {
		cout << "# FAILED TEST 27 #\n";
	}

	values[0] = 0, values[1] = 1, values[2] = 2;
	try {
		btassert<bool>(findMaxValue(values, 3) == 2);
		cout << "Passed TEST 28: findMaxValue([0,1,2])\n";
		++utPassed;
	} catch (bool b) {
		cout << "# FAILED TEST 28 #\n";
	}

	values[0] = 1, values[1] = 1, values[2] = 1;
	try {
		btassert<bool>(findMaxValue(values, 3) == 1);
		cout << "Passed TEST 29: findMaxValue([1,1,1])\n";
		++utPassed;
	} catch (bool b) {
		cout << "# FAILED TEST 29 #\n";
	}

	values[0] = INT_MIN, values[1] = INT_MIN, values[2] = INT_MIN;
	try {
		btassert<bool>(findMaxValue(values, 3) == INT_MIN);
		cout << "Passed TEST 30: findMaxValue([INT_MIN,INT_MIN,INT_MIN])\n";
		++utPassed;
	} catch (bool b) {
		cout << "# FAILED TEST 30 #\n";
	}

	cout << "\nUNIT TEST COMPLETE\n\n";

	cout << "PASSED " << utPassed << " OF " << utCount << " UNIT TEST";
	if (utCount > 1) {
		cout << "S";
	}
	cout << "\n\n";
}

template <typename X, typename A>
void btassert (A assertion) {
	if (!assertion)
		throw X();
}