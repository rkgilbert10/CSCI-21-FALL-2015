/* class Word - for Project4
 * Created by: Rachel Gilbert
 * Created on: 11/15/15
 * Last modified: 12/3/15
 *
 * Sources:
 * Notes: 
 */
 
#pragma once
 
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

class Word {
     private:
        string word;
        unsigned int count;
     
     public:
        
        /* Default constructor
         * sets count to 1
         */
        Word ();
        
        /* Overloaded constructor
         * sets word to newWord and count to 1
         */
        Word (string newWord);
        
        /* Destructor
         * Does nothing.
         */
        virtual ~Word();
        
        /* getWord
         * @returns the word
         */
        string getWord () const;
        
        /* setWord
         * @param newWord sets to word
         */
        void setWord (string newWord);
        
        /* getCount
         * @returns the current count
         */
        unsigned int getCount () const;
        
        /*incrementCount
         * adds 1 to count
         */
        void incrementCount ();
        
        /* decrementCount
         * decreases count by 1
         */
         void decrementCount();
         
        /* operator << function
         * display the contents of each node in the list.
         * @param ostream& out
         * @param DLList& src
         */
        friend ostream& operator<< (ostream& outs, const Word& w1);
     
        /* operator == function
         * @param string1 and string2
         * Compares the strings - not case sensitive
         * @return true or false if they are the same
         */
        friend bool operator==(const Word& string1, const Word& string2);
        
        /* operator < function
         * @param string1 and string2
         * Compares the strings - not case sensitive
         * @return true or false if one is less than the other
         */
        friend bool operator<(const Word& string1, const Word& string2);
        
        /* operator > function
         * @param string1 and string2
         * Compares the strings - not case sensitive
         * @return true or false if one is greater than the other
         */
        friend bool operator>(const Word& string1, const Word& string2);
        
        /* upperCase function
         * @param string s
         * @returns the string with all uppercase characters
         */
        static string upperCase (const string& s);
        

};