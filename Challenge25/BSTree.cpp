/* Challenge25
 * Created by: Rachel Gilbert
 * Created on: 11/16/15
 * Modified: 11/19/15
 * Sources:
 *
 */


#include "BSTree.h"

#include <iostream>
using namespace std;

BSTree::BSTree () {
     root = NULL;
     size = 0;
}

BSTree::~BSTree ()  {
     clear();
}

bool BSTree::insert (int newContents) {
     return insert (root, newContents);
}

void BSTree::clear () {
     clear (root);
}

unsigned int BSTree::getSize () const {
     return size;
}

void BSTree::inOrder (ostream& outs) {
     inOrder (outs, root);
}


//Private functions

bool BSTree::insert (BSTNode*& node, int newContents) {
     if (node == NULL) {
          node = new BSTNode(newContents);
          size++;
          return true; 
     } else if (newContents < node->getContents()) {
          return insert(node->getLeftChild(), newContents);
     } else if (newContents > node->getContents()) {
          return insert(node->getRightChild(), newContents);
     } else { 
          return false;
     }
}

void BSTree::clear (BSTNode*& node) {
     if (node != NULL) {
          clear(node->getLeftChild());
          clear(node->getRightChild());
          delete node;
          node = NULL;
          size--;
     }
}

void BSTree::inOrder (ostream& outs, BSTNode* node) {
     if (node != NULL) {
          inOrder(outs, node->getLeftChild());
          outs << node->getContents() << " ";
          inOrder(outs, node->getRightChild());
     }
}