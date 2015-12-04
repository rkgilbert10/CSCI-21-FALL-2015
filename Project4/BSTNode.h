/* Templated class BSTNode - for Project 4**
 * Created by: Rachel Gilbert
 * Created on: 11/15/15
 * Last modified: 11/27/15
 *
 * Sources:
 * Notes: Makefile works/ tested creating a node/ 
 */
 
 
#pragma once
 
#include <iostream>
using namespace std;

template <class T> 
class BSTNode {
    private:
        BSTNode<T>* leftChild;
        BSTNode<T>* rightChild;
        T data;
    public:
        /* Overloaded constructor
         * sets values of leftChild and rightChild to NULL
         * sets data to newData
         */
        BSTNode (T newData) {
             leftChild = NULL;
             rightChild = NULL;
             data = newData;
        }
        
        /* Destructor
         */
        virtual ~BSTNode () {
              
        }
         
        /* setData
         * sets data to newData
         */
        void setData (T newData) {
            data = newData;
        }
        
        /* getData
         * @return data
         */
        T getData () const {
            return data;
        }
        
        /* getData
         * @return reference to data
         */
        T& getData () {
            return data;
        }
        
        /* setLeftChild
         * sets the contents for new node leftChild
         * @param newLeftChild
         */
        void setLeftChild (BSTNode* newLeftChild) {
            leftChild = newLeftChild;
        }
        
        /* setRightChild
         * sets the contents for new node rightChild
         * @param newRightChild
         */
        void setRightChild (BSTNode* newRightChild) {
            rightChild = newRightChild;
        }
        
        /* getLeftChild
         * @returns the contents of the left child
         */
        BSTNode* getLeftChild () const {
            return leftChild;
        }
        
        /* getLeftChild
         * @returns the reference to the left child
         */
        BSTNode*& getLeftChild () {
            return leftChild;
        }
         
        /* getRightChild
         * @returns the contents of the rightChild
         */
        BSTNode* getRightChild () const {
            return rightChild;
        }
        
        /* getRightChild
         * @returns the reference to the right child
         */
        BSTNode*& getRightChild () {
            return rightChild;
        }
        
};
