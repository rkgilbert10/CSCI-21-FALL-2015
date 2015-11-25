/* Challenge26
 * Created by: Rachel Gilbert
 * Created on: 11/2/15
 * Modified: 11/24/15
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
        
        /* public remove
         * @returns boolean from private function
         * @param target integer
         */
        bool remove (int target);
        
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
        
        /* private remove
         * traverse the tree and remove the node containing the taget int
         * @returns true if found or false if not in tree
         */
        bool remove (BSTNode*& node, int target);
        
        /* removeMax
         * helper function for private remove
         * @params contents to find and node
         */
        void removeMax (BSTNode*& node, int& target);
};




/*
public

[NEW] bool remove (int), return value returned by private function remove(int, root)

private

[NEW] bool remove (int, BSTNode*&), traverse the tree and remove the node containing the target 
	               integer if present, return true; return false if target integer is not in tree
	
	[NEW] void removeMax (int&, BSTNode*&), helper function for private remove
	
*/