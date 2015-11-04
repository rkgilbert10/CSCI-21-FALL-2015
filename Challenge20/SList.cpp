/*
 * Programming Challenge 19
 *
 * Rachel Gilbert
 * 
 * Created: 10/29/15
 * Last Modified: 10/29/15
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
 	if (head != NULL) {
 		SLNode* n = head;
 		head = head->getNextNode();
 		delete n;
 		size--;
 	}
}

void SList::insertTail (int contents){
     
	if(head != NULL) {
		//Finds the tail. 
		SLNode* i = head;
		while (i->getNextNode() != NULL) {
			//Starts at head and moves it over to the last node. 
			i = i->getNextNode();
		}
		SLNode* node = new SLNode(contents);
		//points at the end and inserts the new node that was just created. 
		i->setNextNode(node);
		size++;
	} else {
		//Empty list - make it to insert head as it's the same thing. 
		insertHead(contents);
	}
 
}

void SList::removeTail (){
	if (head == NULL) {
	     //DO NOTHING
		} else if (head->getNextNode() == NULL) {
			removeHead();
		} else {
			SLNode* i = head;
			SLNode* j = NULL;
			while (i->getNextNode() != NULL) {
				//j is i and then i moves over one. j tails the node before i. 
				j = i;
			//Starts at head and moves it over to the last node. 
				i = i->getNextNode();
			}
			//i is the tail.
			delete i;
			
			//need j to tail it and null out the last node. 
			j->setNextNode(NULL);
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

void SList::insert(int contents) {
     if (head != NULL) {
          SLNode* node = new SLNode(contents);
          SLNode* j = NULL;
          SLNode* i = NULL;
          for (i = head; i != NULL && contents > i->getContents(); i=i->getNextNode()) {
            j = i;
          }
          if (i == NULL) {
          	insertTail(contents);
          } else if (i == head) {
          	insertHead(contents);
          } else {
              	j->setNextNode(node);
            	node->setNextNode(i);
            	size++;
            }
     } else {
          insertHead(contents);
     }	
}


bool SList::removeFirst (int contents) {
	//check if the contents are in the list.
	SLNode* j = NULL;
	for (SLNode* i = head; i != NULL; i=i->getNextNode()) {

		if(i->getContents() == contents) {
		
			if (i == head) {
				removeHead();
			} else if (i->getNextNode() == NULL) {
				removeTail();
			} else {
				j->setNextNode(i->getNextNode());
				delete i;
				size--;
			}
			return true;
		}
		j=i;
	}
	return false;
}