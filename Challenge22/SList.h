/* 4th project requires templates */
/* In class code - no CPP file - all in the header file for templates */
/* nodes can only be connected if they are the same type */

#pragma once

#include "SLNode.h"

#include <iostream>
#include <sstream>
using namespace std;
template <class T> 
class SList {

     private:
          int size;
          SLNode<T>* head;
          SLNode<T>* tail;
          
     public:
               
          /* Default constructor.
         * Sets head and tail to NULL. 
    	     */
          SList() {
               size = 0;
               head = NULL;
               tail = NULL;
          }   
          
          /* Destructor.
          * Calls the clear function.
          */          
          ~SList() {
               clear();
          }
          
          /* Clear function
          * Clears the lists and frees up the associated memory.
          */          
          void clear() {
             while (head != NULL) {
           		SLNode<T>* n = head;
           		head = head->getNext();
           		delete n;
           		
           	}   
           	size = 0;
           	head = NULL;
           	tail = NULL;
          }
          
          /* Get Size function. 
          * @return  
          */          
          int getSize() const {
               return size;
          }
          
          /* insertHead creates new SLNode<T> with newContents
         * and attaches it at head. 
         * @param newContents to be used inside the node
         */          
          void insertHead (T newContents) {
               SLNode<T>* node = new SLNode<T>(newContents);
               node->setNext(head);
               head = node;
               size++;
               
          }
          
          /* insertTail creates new SLNode<T> with newContents
         * and attaches it at the tail. 
         * @param newContents to be used inside the node
         */          
          void insertTail (T newContents) {
               if(head!=NULL) {
                    SLNode<T>* i = head;
                    while (i->getNext() != NULL) {
                         i=i->getNext();
                    }
                    SLNode<T>* node = new SLNode<T>(newContents);
                    i->setNext(node);
                    size++;
               } else {
                    insertHead(newContents);
               }
          
          }

          /* removeHead removes the current head node and 
          * adjusts head over to the next node
          */          
          void removeHead () {
               if (head == NULL) {
                    
               } else if (head->getNext() == NULL) {
                  SLNode<T>* n = head;
           		head = head->getNext();
           		delete n;
           		 size--;
               } else {
                    SLNode<T>* i = head;
                    SLNode<T>* j = i->getNext();
                    head = j;
                    delete i;
                    size--;
                    
               }
          }
          
          /* removeTail removes the current tail node and
         * adjusts tail over to the previous node
         */          
          void removeTail () {
               if (head == NULL) {
                    
               } else if (head->getNext() == NULL) {
                    SLNode<T>* n = head;
                    head = head->getNext();
                    delete n;
                    size--;
               } else {
                    SLNode<T>* i = head;
                    SLNode<T>* j = NULL;
                    while (i->getNext() != NULL) {
          	          j = i;
          			i = i->getNext();
          		}
          		delete i;
          		j->setNext(NULL);
          		size--; 
               }
          }
          
          
          /* inserts a node with newContents into the 
       	* list in ascending order.
          * @param newContents contains the contents
          */          
          void insert (T newContents) {
               if (head != NULL) {
                    SLNode<T>* node = new SLNode<T>(newContents);
                    SLNode<T>* j = NULL;
                    SLNode<T>* i = NULL;
                    for (i = head; i != NULL && newContents > i->getContents(); i=i->getNext()) {
                      j = i;
                    }
                    if (i == NULL) {
                    	insertTail(newContents);
                    } else if (i == head) {
                    	insertHead(newContents);
                    } else {
                        	j->setNext(node);
                      	node->setNext(i);
                      	size++;
                      }
               } else {
                    insertHead(newContents);
               }	
          }
          
          /* removeFirst
	 	* removes the first appearance of the parameter value
	 	* @param contents to look for
	 	* @return true if the value can be removed or false if not in the list
	 	*/          
          bool removeFirst (T newContents) {
          	SLNode<T>* j = NULL;
          	for (SLNode<T>* i = head; i != NULL; i=i->getNext()) {
          
          		if(i->getContents() == newContents) {
          			if (i == head) {
          				removeHead();
          			} else if (i->getNext() == NULL) {
          				removeTail();
          			} else {
          				j->setNext(i->getNext());
          				delete i;
          				size--;
          			}
          			return true;
          		}
          		j=i;
          	}
          	return false;
          }
          
		/* removeALL
		 * removes all instances of the target.
		 * @param target int to be removed
		 * @return true if able to remove the or false if fails
		 */          
          bool removeAll (T target) {
          	bool targetSuccess = false;
          		while (removeFirst(target) == true) {
          			targetSuccess = true;
          		}
          	return targetSuccess;
          }
          
          /* toString 
         * outputs the list contents for testing
         */
        string toString() const{
          stringstream ss;
          for (SLNode<T>* i = head; i != NULL; i=i->getNext()) {
               if (i-> getNext()== NULL) {
                    ss << i-> getContents();
               } else {
                    ss << i->getContents() << ",";
               }
          }
          return ss.str();
        }
        
        
};