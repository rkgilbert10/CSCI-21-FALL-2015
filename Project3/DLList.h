/* Header file for DLList
 * Created by Rachel Gilbert
 * Created:10/30/15
 * Modified: 11/3/15
 * Notes: 
 */
 
#pragma once

#include "DLNode.h"

#include <iostream>
#include <sstream>
using namespace std;

class DLList {

     private:
          int count;
          DLNode* head;
          DLNode* tail;
          
     public:
     
        /* Default constructor.
         * Sets count to 0, head and tail to NULL. 
    	 */
        DLList ();
          
        /* Destructor.
         * Calls the clear function.
         */
        ~DLList ();
          
        /* Clear function
         * Clears the lists and frees up the associated memory.
         */
        void clear ();
          
        /* Get Size function. 
         * @return count
         */
        unsigned int getSize() const;
          
        /* pushFront creates new DLNode with newContents
         * and attaches it at head. 
         * @param newContents to be used inside the node
         */
        void pushFront (int newContents);
           
        /* pushBack creates new DLNode with newContents
         * and attaches it at the tail. 
         * @param newContents to be used inside the node
         */
        void pushBack (int newContents);
            
        /* getFront retuns the value of the contents
         * in the node at the head node
         * @return contents
         */
        int getFront () const;
  
        /* getBack returns the value of the contents
         * in the node at the tail node
         * @return contents
         */
        int getBack () const;
         
        /* popFront removes the current head node and 
         * adjusts head over to the next node
         */
        void popFront();
         
        /* popBack removes the current tail node and
         * adjusts tail over to the previous node
         */
        void popBack();
        
        /* inserts a node with newContents into the 
       	 * list in ascending order.
         * @param newContents contains the contents
         */
        void insert (int newContents);
        
        /* removeFirst
	 	 * removes the first appearance of the parameter value
	 	 * @param contents to look for
	 	 * @return true if the value can be removed or false if not in the list
	 	 */
	 	bool removeFirst (int contents);
	 	
	 	/* get
	 	 * looks for the target in the list
	 	 * and returns true if it's able to locate it, or false if not
	 	 * @param target
	 	 * @return true if target is found. 
	 	 */
	 	 bool get (int target) const;
			 	 
		/* removeALL
		 * removes all instances of the target.
		 * @param target int to be removed
		 * @return true if able to remove the or false if fails
		 */
		 bool removeAll (int target);
        
        /* operator << function
         * display the contents of each node in the list.
         * @param ostream& out
         * @param DLList& src
         */
         friend ostream& operator<< (ostream& out, const DLList& src);
         
        /* toString **For TESTING purposes**
         * outputs the list contents for testing
         */
        string toString() const;
        
        
};