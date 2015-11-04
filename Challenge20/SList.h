/*
 * Programming Challenge 20
 * Header File for SList Class
 * Rachel Gilbert
 * 
 * Created: 11/3/15
 * Last Modified: 11/3/15
 * Notes:
 * Sources used: 
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

     /* Default constructor
      * should set head to node and size to 0
      */
     SList();
     
     /* Destructor
      * Does nothing
      */
     ~SList();
     
     /* insertHead creates a new node
      * and attaches it at the head.
      * @param contents - the contents for the new node. 
      */
     void insertHead (int contents);
     
     /* insertTail creates a new node
      * and attaches it at the tail.
      * @param contents - the contents for the new node.
      */
     void insertTail (int contents);
     
     /* removeTail
      * removes the last tail node.
      */
     void removeTail ();
     
     /* removeHead
      * removes the head node.
      */
     void removeHead ();
     
     /* clear
      * clears the nodes and deletes associated memory.
      */
     void clear ();
     
     /* getSize
      * @returns the size of the list.
      */
     unsigned int getSize () const;
     
     /* toString
      * returns the contents of the nodes in a string
      * @return string list
      */
     string toString () const;
     
     /* inserts a new node in ascending order of the list.
      * @param contents of the new node.
      */
     void insert (int contents); 
	
	/* removeFirst
	 * removes the first appearance of the parameter value
	 * @param contents to look for
	 * @return true if the value can be removed or false if not in the list
	 */
	 bool removeFirst (int contents);
};

/* 	create a new SLNode and insert it in the correct position
	                   in the list so that the values in the nodes are in 
	                   ascending order from head node to tail node
	                   
	bool removeFirst (int), remove the first appearance of the parameter value;
	     return true on success or false if the value is not in the list
	
	
	*/