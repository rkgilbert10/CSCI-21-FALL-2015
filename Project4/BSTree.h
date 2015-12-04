/* Templated class BSTree - for Project4
 * Created by: Rachel Gilbert
 * Created on: 11/15/15
 * Last modified: 12/3/15
 *
 * Sources:
 * Notes: 
 */
 
#pragma once

#include "BSTNode.h"
#include <iostream>
using namespace std;

template <class T> 
class BSTree {
	
	private:
		unsigned int size;
		BSTNode<T>* root;
		
        /* private insert
         * @param int contents
         * @param newNode
         * @returns true if insert or false if not
         */
        bool insert (BSTNode<T>*& node, T newContents) {
        	if (node == NULL) {
          		node = new BSTNode<T>(newContents);
          		size++;
          		return true; 
     		} else if (newContents < node->getData()) {
          		return insert(node->getLeftChild(), newContents);
     		} else if (newContents > node->getData()) {
        		return insert(node->getRightChild(), newContents);
     		} else { 
          		return false;
    		}
		}
         
        /* private inOrder
         * @param node
         * @param ostream&;
         * inserts the data from th enode into a output stream in order.
         */
        void inOrder (ostream& outs, BSTNode<T>* node) {
            if (node != NULL) {
                inOrder(outs, node->getLeftChild());
                outs << node->getData();
                inOrder(outs, node->getRightChild());
            }            
        }
        
        /* private reversOrder
         * @param node
         * @param ostream&
         * outputs the data in descending order
         */
        void reverseOrder (ostream& outs, BSTNode<T>* node) {
            if (node != NULL) {
                reverseOrder(outs, node->getRightChild());
                outs << node->getData();
                reverseOrder(outs, node->getLeftChild());
            }     
        }
        
        /* private clear
         * @param node
         * clears the entire contents of the tree and freeing all memory
         */
        void clear (BSTNode<T>*& node) {
             if (node != NULL) {
                  clear(node->getLeftChild());
                  clear(node->getRightChild());
                  delete node;
                  node = NULL;
                  size--;
             }
        }
        
        /* Private remove
         * @param node and targetData to remove
         * @returns true if remove successful else return false
         */
        bool remove (BSTNode<T>*& node, T targetData) {
            if (node == NULL) {
                return false;
            } else if (targetData < node->getData()) {
                //start over to the left
                return remove(node->getLeftChild(), targetData);
            } else if (targetData > node->getData()) {
                //go to the right
                return remove(node->getRightChild(), targetData);
            } else {
                //target is equal to the contents
                 if (node->getLeftChild() == NULL) {
                   //has no left child
                   BSTNode<T>* oldNode = node;
                   node = node->getRightChild();
                   delete oldNode;
                } else {
                    //has a left child
                    removeMax(node->getLeftChild(), node->getData());
                }
            size--;
            return true;
            }
        }
        
        /* Private removeMax
         * helper function to remove target data in remove()
         */
        void removeMax(BSTNode<T>*& node, T targetData) {
            if (node->getRightChild() == NULL) {
                targetData = node->getData();
                BSTNode<T>* tempNode = node;
                //attaches the other nodes
                node = node->getLeftChild();
                delete tempNode;
            } else {
                removeMax(node->getRightChild(), targetData);
            }
        }
        
        /* Private find
         * @param node and targetData to find
         * @returns true if able to locate data or false if not
         */
        bool find (BSTNode<T>*& node, T targetData) {
            if (node == NULL) {
                return false;
            } else if (targetData < node->getData()) {
                //start over to the left
                return find(node->getLeftChild(), targetData);
            } else if (targetData > node->getData()) {
                //go to the right
                return find(node->getRightChild(), targetData);
            } else {
                //target is equal to the contents
                return true;
            }
        }
        
        /* private Get
         * @param node and targetData to get
         * @returns a pointer to the data if found - NULL if not
         */
        T* get (BSTNode<T>*& node, T targetData) {
            T* ptr;
            if (node == NULL) {
                ptr = NULL;
                return ptr;
            } else if (targetData < node->getData()) {
                //start over to the left
                return get (node->getLeftChild(), targetData);
            } else if (targetData > node->getData()) {
                //go to the right
                return get (node->getRightChild(), targetData);
            } else {
                //target is equal to the contents
                //return pointer to contents
                ptr = &(node->getData());
                return ptr;
            }
        }
     
    public: 
    	
    	/* Default constructor
    	 * sets size to 0 and root to NULL
    	 */
    	BSTree() {
    		size = 0;
    		root = NULL;
    	}
    	
    	/* Destructor
    	 * Calls the clear function
    	 */
    	~BSTree() {
    		clear();
    	}
    	
    	/* Get size
    	 * @returns size
    	 */
    	unsigned int getSize () const {
    	    return size;
    	}
    	
    	/* Public insert
    	 * Calls private function and returns true if contents in true
    	 * else it returns false if does not insert. 
    	 */
    	bool insert (T newContents) {
    		return insert (root, newContents);
    	}
    	
    	/* Public clear
    	 * Calls the private clear function
    	 */
    	void clear () {
    		clear(root);
    	}
    	
    	/* Public inOrder
    	 * Outputs the tree contents
    	 */
        void inOrder (ostream& outs) {
            inOrder (outs, root);
        }
        
        /* Public reverseOrder
         * Outputs the trees contents in descending order
         */
         void reverseOrder (ostream& outs) {
             reverseOrder (outs, root);
         }
        
        /* Public remove - calls private function
         * @param target Data to be removed
         * @returns true if able to remove else return false
         */
        bool remove (T targetData) {
            return remove(root, targetData);
        }
        
        /* Public find - calls private function
         * @param targetData to be found
         * @returns true if data is found, else false
         */
        bool find (T targetData) {
            return find (root, targetData);
        }
        
        /* Public get - calls private function
         * @param targetData to be returned
         * @returns pointer to target Data on success, or NULL on failure
         */
        T* get (T targetData) {
            return get (root, targetData);
        }

        
        
};