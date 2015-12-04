/* definitions for class Word - for Project4
 * Created by: Rachel Gilbert
 * Created on: 11/15/15
 * Last modified: 12/3/15
 *
 * Sources:
 * Notes: 
 */
 
#include "Word.h"

Word::Word() {
    count = 1;
}
 
Word::Word(string newWord) : word(newWord) {
    count = 1;
} 

Word::~Word() {
    
}

string Word::getWord () const {
    return word;
}

void Word::setWord (string newWord) {
    word = newWord;
}

unsigned int Word::getCount () const {
    return count;
}

void Word::incrementCount () {
    count++;
}

void Word::decrementCount() {
    count--;
}

ostream& operator<< (ostream& outs, const Word& w1){
    
    outs << (Word::upperCase(w1.word)) << " " << w1.count <<  endl;
    
    return outs;
 }

bool operator==(const Word& string1, const Word& string2) {
    
    return (Word::upperCase(string1.word) == Word::upperCase(string2.word));
}

bool operator<(const Word& string1, const Word& string2) {
    
    return (Word::upperCase(string1.word) < Word::upperCase(string2.word));
}

bool operator>(const Word& string1, const Word& string2) {
    
    return (Word::upperCase(string1.word) > Word::upperCase(string2.word));
}

string Word::upperCase (const string& s) {
     string word = s;
     transform(word.begin(), word.end(), word.begin(), ::toupper);
   
     return word;
}

