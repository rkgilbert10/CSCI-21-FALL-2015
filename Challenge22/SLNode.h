/* Class definitions for SLNode
 * Created by Rachel Gilbert
 * Created:11/10/15
 * Modified: 11/10/15
 * Notes: 
 */

#pragma once
#include <iostream>
using namespace std;

template <class T> 
class SLNode {
    private:
    	T contents;
		SLNode* nextNode;
 
    public:
    
    	/* Default constructor
    	 * sets nextNode to NULL and contents to 0
    	 */
        SLNode () {
        	nextNode = NULL;
        	 //Problem with contents to 0 because you typically don't know the data type
        }
         
        /* Overloaded constructor
    	 * @param newContents set to contents
    	 */
    	SLNode(T newContents) : contents(newContents), nextNode(NULL) {}
    	
    	/* Destructor
    	 * Sets nextNode to NULL
    	 */
    	 ~SLNode () {
    	 	nextNode = NULL;
    	 }

		/* setContents
		 * @param newContents set to contents
		 */
		 void setContents (T newContents) {
		 	contents = newContents;
		 }
		 
		 /* getContents
		  * returns the current contents
		  */
		 T getContents () const {
		 	return contents;
		 }
		 
		 /* setNextNode
		  * @param newNextNode sets the next node
		  */
		 void setNext (SLNode* newNextNode) {
		 	nextNode = newNextNode;
		 }
		 
		 /* Comments...
		  *
		  */
		  SLNode* getNext () {
		  	return nextNode;
		  }
};

