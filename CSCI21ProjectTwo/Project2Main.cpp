/*
 * Programming Project 2 - Driver/Main File
 * Second programming project for CSCI 21
 * - Due October 16
 *
 * Rachel Gilbert
 * Date created: 9/19/15
 * Last date modified: 10/16/15 Most of the functions are completed.
 *
 * 
 * SOURCES USED: Used CinReader by Boyd Trolinger
 * Notes: Reference Labs 11/12/13/14/15
 * 
 * 
 */


#include "prize.h"
#include "box.h"
#include "CinReader.h"

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main (int argc, char* argv[]) {


    //Local variables
    CinReader reader;
    int newPrizeValue;
    string newPrizeName;
    string newBoxColor;
    string item;
    unsigned int prizes;
    bool finished = false;
    unsigned int newBoxNumber;
    unsigned int newRemovePrize;
  
    Prize* p = NULL;
    Box* b = NULL;
    Box* p1 = NULL;
    Box* p2 = NULL;
    
	if (p != NULL)
        delete p;
    p = new Prize;
    if (b != NULL)
        delete b;
    b = new Box;
    
    
        do {
            cout << "Box info: " << b->getBoxNumber() << " , " << b->getBoxColor() << endl;
    		cout << "1. Add prize \n"
    				"2. Get prizes \n"
    				"3. Remove prize \n"
    				"4. Change Box number \n"
    				"5. Change Box Color \n"
    				"6. View prize capacity \n"
    				"7. View prize count \n"
    				"8. Compare prizes \n"
    				"0. Quit" << endl;
    		int boxChoice = reader.readInt(0,8);
    	        
    	    switch(boxChoice) {
    			case 1:
    				//1. Add prize	
    			    cout << "Prize name (current = " << p->getPrizeName() << "):" <<endl;
    				newPrizeName = reader.readString("");
    				p->setPrizeName(newPrizeName);
    					
    				cout << "Prize value (current = " << p->getPrizeValue() << "):" << endl;
    				newPrizeValue = reader.readInt(1,100000);
    				p->setPrizeValue(newPrizeValue);
    				
    				b->addPrize(Prize(newPrizeName, newPrizeValue));
    				
    				cout << "New prize added." << endl;
    				break;
    			case 2:
    			    //2. Get prizes
    			    prizes = b->getPrizeCount();
    			    if(prizes == 0) {
    			        cout << "There are no prizes." << endl;
    			    } else {
    			        //Display prize list. 
    			       cout << "\n -----------Prizes----------- \n";
    				   for(unsigned int i = 0; i<prizes; i++){
    				      cout << i+1 << ". " << b->getPrize(i).getPrizeName() << endl;
    				   }
    				   cout << endl << endl;
    			    }
    				break;
    			case 3:
    			    //3. Remove prize 
    			    prizes = b->getPrizeCount();
    			    if(prizes == 0) {
    			        cout << "There are no prizes." << endl;
    			    } else {
    			        //Display prize list. 
    			       cout << "\n -----------Prizes----------- \n";
    				   for(unsigned int i = 0; i<prizes; i++){
    				      cout << i+1 << ". " << b->getPrize(i).getPrizeName() << endl;
    				   }
    				   cout << endl << endl;
    			    }
    			    cout << "Which prize would you like to remove?" << endl;
    			    newRemovePrize = reader.readInt(1,10000);
    			    if (newRemovePrize > prizes) {
    			        cout << "There is no prize there." << endl;
    			    } else {
    			        b->removePrize(newRemovePrize-1);
    			    }
    			    break;
    			    
    			case 4: 
    			    //4. Box number
    			    cout << "What whould you like to change it to?" << endl;
    			    newBoxNumber = reader.readInt(1,100000);
    			    b->setBoxNumber(newBoxNumber);
    			    break;
    			    
    			case 5:
    			    //5. Box color
    			    cout << "What whould you like to change it to?" << endl;
    			    newBoxColor = reader.readString("");
    			    b->setBoxColor(newBoxColor);
    			    break;
    			    
    			case 6:
    			    //6. View prize capacity
    			    cout << "Max number of prizes: " << b->getPrizeCapacity() << endl;
    			    break;
    			    
    			case 7:
    			    //7. View prize count
    			    cout << "Current number of prizes: " << b->getPrizeCount() << endl;
    			    break;
    			    
    			case 8:
    			
    			    p1 = new Box;
    			    p1->getPrize(0);
    			    p2 = new Box;
    			    p2->getPrize(1);
    			    //8. Compare prizes
    			    if (p1 == p2) {
    			        cout << "Prizes match." << endl;
    			    }
    			    else 
    			        cout << "Prizes are different." << endl;
    			    break;
    			    
    			case 0:
    			    finished = true;
    			    break;
    		    default: 
    		        finished = true;
    			    break;
            }
        } while (finished == false);
    
        if(p1 != NULL)
            delete p1;
        if(p2 != NULL)
            delete p2;
        if (b != NULL)
            delete b;
        if (p != NULL)
            delete p;



    return 0;
}

