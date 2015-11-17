/* Challenge24 header file - BSTNode.h
 * Created by: Rachel Gilbert
 * Created on: 11/16/15
 * Modified: 11/16/15
 * Sources:
 *
 */
 
#pragma once
 
#include <iostream>
using namespace std;

class BSTNode {
    private:
        BSTNode* leftChild;
        BSTNode* rightChild;
        int contents;
    public:
        /* Default constructor
         * sets values of leftChild and rightChild to NULL
         * sets contents to 0
         */
        BSTNode ();
        
        /* Overloaded constructor
         * sets values of leftChild and rightChild to NULL
         * sets contents to newContents
         */
        BSTNode (int newContents);
        
        /* Destructor
         * sets leftChild and rightChild to NULL
         */
         ~BSTNode ();
         
        /* setContents
         * sets contents to newContents
         */
        void setContents (int newContents);
        
        /* getContents
         * @return contents
         */
        int getContents () const;
        
        /* getContents
         * @return reference to contents
         */
        int& getContents ();
        
        /* setLeftChild
         * sets the contents for new node leftChild
         * @param newLeftChild
         */
        void setLeftChild (BSTNode* newLeftChild);
        
        /* setRightChild
         * sets the contents for new node rightChild
         * @param newRightChild
         */
        void setRightChild (BSTNode* newRightChild);
        
        /* getLeftChild
         * @returns the contents of the left child
         */
        BSTNode* getLeftChild () const;
        
        /* getLeftChild
         * @returns the reference to the left child
         */
        BSTNode*& getLeftChild ();
         
        /* getRightChild
         * @returns the contents of the rightChild
         */
        BSTNode* getRightChild () const;
        
        /* getRightChild
         * @returns the reference to the right child
         */
        BSTNode*& getRightChild (); 
        
};




/*
class name: BSTNode

private data members:

	leftChild, BSTNode*
	rightChild, BSTNode*
	contents, int used to store the data contents of this BSTNode

public function interface:

	default constructor, sets values leftChild(NULL), rightChild(NULL), and contents(0)
	overloaded constructor, int parameter assigned to contents
	
	destructor, sets leftChild and rightChild to NULL
	
	void setContents (int)
	
	int getContents () const
	int& getContents ()
	
	void setLeftChild (BSTNode*)
	void setRightChild (BSTNode*)
	
	BSTNode* getLeftChild () const
	BSTNode*& getLeftChild ()
	
	BSTNode* getRightChild () const
	BSTNode*& getRightChild ()
	
*/