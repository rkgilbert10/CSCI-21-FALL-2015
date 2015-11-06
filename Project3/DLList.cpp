/* Class definitions for DLList
 * Created by Rachel Gilbert
 * Created:10/30/15
 * Modified: 11/5/15
 * Notes: 
 */
 
#include "DLList.h"


DLList::DLList() {
     count = 0;
     head = NULL;
     tail = NULL;
}

DLList::~DLList() {
     clear();
}

void DLList::clear() {
   while (head != NULL) {
 		DLNode* n = head;
 		head = head->getNext();
 		delete n;
 		
 	}   
 	count = 0;
 	head = NULL;
 	tail = NULL;
}

unsigned int DLList::getSize() const {
     return count;
}

void DLList::pushFront (int newContents) {
     DLNode* node = new DLNode(newContents);
     node->setNext(head);
     head = node;
     count++;
}

void DLList::pushBack (int newContents) {
     if(head!=NULL) {
          DLNode* i = head;
          while (i->getNext() != NULL) {
               i=i->getNext();
          }
          DLNode* node = new DLNode(newContents);
          i->setNext(node);
          count++;
     } else {
          pushFront(newContents);
     }

}

int DLList::getFront () const {
     if (head == NULL) {
          throw string ("LIST EMPTY");
     }
     else {
          return head->getContents();
     }
}

int DLList::getBack() const {
	if(head != NULL) {
		//Finds the tail. 
		DLNode* i = head;
		while (i->getNext() != NULL) {
			//Starts at head and moves it over to the last node. 
			i = i->getNext();
		}
		return i->getContents();
	} else {
	     throw string ("LIST EMPTY");
	}
}

void DLList::popFront() {
     if (head == NULL) {
          
     } else if (head->getNext() == NULL) {
        DLNode* n = head;
 		head = head->getNext();
 		delete n;
 		count--;
     } else {
          DLNode* i = head;
          DLNode* j = i->getNext();
          head = j;
          delete i;
          count--;
          
     }
}

void DLList::popBack() {
     if (head == NULL) {
          
     } else if (head->getNext() == NULL) {
          DLNode* n = head;
          head = head->getNext();
          delete n;
          count--;
     } else {
          DLNode* i = head;
          DLNode* j = NULL;
          while (i->getNext() != NULL) {
	          j = i;
			i = i->getNext();
		}
		delete i;
		j->setNext(NULL);
		count--;
     }
}

void DLList::insert (int newContents) {
     if (head != NULL) {
          DLNode* node = new DLNode(newContents);
          DLNode* j = NULL;
          DLNode* i = NULL;
          for (i = head; i != NULL && newContents > i->getContents(); i=i->getNext()) {
            j = i;
          }
          if (i == NULL) {
          	pushBack(newContents);
          } else if (i == head) {
          	pushFront(newContents);
          } else {
              	j->setNext(node);
            	node->setNext(i);
            	count++;
            }
     } else {
          pushFront(newContents);
     }	
}

bool DLList::get (int target) const {
	for (DLNode* i = head; i != NULL; i=i->getNext()) {
		if(i->getContents() == target) {
			return true;
		}
	}
	return false;
}

bool DLList::removeFirst (int newContents) {
	DLNode* j = NULL;
	for (DLNode* i = head; i != NULL; i=i->getNext()) {

		if(i->getContents() == newContents) {
			if (i == head) {
				popFront();
			} else if (i->getNext() == NULL) {
				popBack();
			} else {
				j->setNext(i->getNext());
				delete i;
				count--;
			}
			return true;
		}
		j=i;
	}
	return false;
}

bool DLList::removeAll (int target) {
	bool targetSuccess = false;
	for (DLNode* i = head; i != NULL; i=i->getNext()) {
		if(i->getContents() == target) {
			removeFirst(target);
			targetSuccess = true;
		}
	}
	return targetSuccess;
}

 ostream& operator<< (ostream& out, const DLList& src){
 	DLNode *ptr = src.head;
 	while (ptr != NULL) {
 		if (ptr->getNext() == NULL) {
 			out<< ptr->getContents();
 		} else {
 		out << ptr->getContents() << ",";
 		}
		ptr = ptr->getNext();
 	}
 	return out;

 }

//**FOR TESTING**
string DLList::toString() const {
     stringstream ss;
     for (DLNode* i = head; i != NULL; i=i->getNext()) {
          ss << i-> getContents() << ' ';
     }
     return ss.str();
}