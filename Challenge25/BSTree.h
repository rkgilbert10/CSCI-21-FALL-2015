/* Challenge25
 * Created by: Rachel Gilbert
 * Created on: 11/16/15
 * Modified: 11/19/15
 * Sources:
 *
 */
 
#pragma once

#include "BSTNode.h"
 
#include <iostream>
using namespace std;

class BSTree {

    public:
        /* default constructor
         * sets root to NULL and size to 0
         */
        BSTree ();
        
        /* desctructor
         * Calls the clear function
         */
         ~BSTree ();
         
        /* insert
         * calls the private insert with params for ontents and root
         * @param newContents
         */
        bool insert (int newContents);
        
        /* clear
         * calls the private clear with param for root
         */
        void clear();
        
        /* getSize
         * @return the size
         */
        unsigned int getSize () const;
        
        /* inOrder
         * @param ostream&
         * calls the private inOrder with param for root, ostream&
         */
        void inOrder (ostream& outs);
        
    private:
        BSTNode* root;
        unsigned int size;
        
        /* private insert
         * @param int contents
         * @param newNode
         * @returns true if insert or false if not
         */
        bool insert (BSTNode*& root, int newContents);
        
        /* private clear
         * @param node
         * clears the entire contents of the tree and freeing all memory
         */
        void clear (BSTNode*& node);
         
        /* private inOrder
         * @param node
         * @param ostream&;
         * inserts the data from th enode into a output stream in order.
         */
        void inOrder (ostream& outs, BSTNode* node);
};




/*

class name: BSTree

private data members:

	root, BSTNode* that points to the root node of a binary search tree
	size, unsigned int the number of nodes in the tree

public function interface:

	default constructor, sets values root(NULL) and size(0)
	
	destructor, calls the clear function
	
	bool insert (int), calls private function insert(int, root)
	
	void clear (), call private function clear(root)
	
	unsigned int getSize () const
	
	void inOrder (ostream&), call private function inOrder(root, ostream&)
	
private function interface:

	bool insert (int, BSTNode*&), create a new BSTNode and insert it into the tree, returns 
	               true; if integer is already in the true, does not insert, returns false
	
	void clear (BSTNode*&), clear the entire contents of the tree, freeing all memory
	               associated with all nodes
	
	void inOrder (BSTNode*, ostream&), insert onto an output stream the data in all nodes in 
					the tree, in ascending order, separated by spaces (there should be a space 
					after the last output value)
	
*/