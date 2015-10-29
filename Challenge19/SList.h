/*
 * Programming Challenge 19
 * Header File for SList Class
 * Rachel Gilbert
 * 
 * Created: 10/29/15
 * Last Modified: 10/29/15
 * Notes:
 * Sources used: http://www.cprogramming.com/tutorial/lesson15.html
 * 
 */
#pragma once

#include "SLNode.h"

#include <iostream>
#include <sstream> 
using namespace std;

class SList {

private:
     SLNode* head;
     unsigned int size;

public:
     SList();
     ~SList();
     void insertHead (int contents);
     void insertTail (int contents);
     void removeTail ();
     void removeHead ();
     void clear ();
     unsigned int getSize () const;
     string toString () const;
	
};

/* 	void insertTail (int), create a new SLNode and attach at the end of list
	void removeTail (), remove the tail node from the list
	
	*/