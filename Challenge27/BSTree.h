/* Challenge27
 * Created by: Rachel Gilbert
 * Created on: 12/1/15
 * Modified: 12/1/15
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
        void inOrder (void (*f)(int data));
        
        
        /* public remove
         * @returns boolean from private function
         * @param target integer
         */
        bool remove (int target);
        
        void reverseOrder (void (*f)(int data));
        
        
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
        void inOrder (BSTNode*& node, void (*f)(int data));
        
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
        
        void reverseOrder(BSTNode*& node, void (*f)(int data));
};



