/*
 * Programming Challenge 19
 * Header File for SLNode Class
 * Rachel Gilbert
 * 
 * Created: 10/29/15
 * Last Modified: 10/29/15
 * Notes:
 * Sources used: 
 */
#pragma once
#include <iostream>
using namespace std;

class SLNode {

private:

	SLNode* nextNode;
	int contents;

public:

	/*Default constructor
	 *sets next node to NULL and contents to 0
	 */
	SLNode();
	
	/*Overloaded constructor
	 * sets newContents to contents and next node to Null
	 */
	SLNode(int newContents);
	
	/*Destructor
	*/
	~SLNode();
	
	/*setContents
	 * sets newContents to contents
	 *@param newContents
	 */
	void setContents(int newContents);
	
	/*getContents 
	 *@returns contents
	 */
	int getContents() const;
	
 	/* setNextNode
	 * @param newNode sets new node to nextNode by reference
  	*/
	void setNextNode(SLNode* nextNode);
	
	/* getNextNode
	 * @return nextNode
	 */
	SLNode* getNextNode () const;
	
};