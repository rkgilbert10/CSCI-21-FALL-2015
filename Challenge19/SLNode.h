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

	SLNode();
	SLNode(int newContents);
	~SLNode();
	void setContents(int newContents);
	int getContents() const;
	void setNextNode(SLNode* nextNode);
	SLNode* getNextNode () const;
	
};