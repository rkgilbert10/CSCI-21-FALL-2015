/*
 * Programming Challenge 18
 *
 * Rachel Gilbert
 * 
 * Created: 10/22/15
 * Last Modified: 10/27/15
 * Notes:
 * Sources used: 
 */
 
 #include "SList.h"
 
SList::SList(){
  head = NULL;
  size = 0;
}

SList::~SList(){
  clear();
}

void SList::insertHead (int contents){
	//Creates a new node that contains the contents
	SLNode* node = new SLNode(contents);
	//Chain to the old one, move it over. 
	node->setNextNode(head);
	//Sentinel marks that spot. 
	head = node;
	size++;
	  
}

void SList::removeHead (){
  if(head != NULL) {
    head = head->getNextNode();
    size--;
  }
}

void SList::clear (){
 	while (head != NULL) {
   		removeHead();
  }
}

unsigned int SList::getSize () const {
 	return size;
}

string SList::toString () const {
   //Need to include sstream for this. 
   stringstream ss;
   //Fetch the contents. 
   for (SLNode* i = head; i != NULL; i=i->getNextNode()) {
    	 ss << i->getContents();
    	 if(i->getNextNode() != NULL)
     		ss << ',';
   }
   return ss.str();
}