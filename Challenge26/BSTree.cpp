/* Challenge26
 * Created by: Rachel Gilbert
 * Created on: 11/24/15
 * Modified: 11/24/15
 * Sources:
 *
 */


#include "BSTree.h"


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

//New fucntions

bool BSTree::remove (int target) {
     return remove (root, target);
}

bool BSTree::remove (BSTNode*& node, int target) {
     if (node == NULL) {
          return false;
     } else if (target < node->getContents()) {
          //start over to the left
          return remove(node->getLeftChild(), target);
     } else if (target > node->getContents()) {
          //go to the right
          return remove(node->getRightChild(), target);
     } else {
          //target is equal to the contents
          if (node->getLeftChild() == NULL) {
               //has no left child
               BSTNode* oldNode = node;
               node = node->getRightChild();
               delete oldNode;
          } else {
               //has a left child
               removeMax(node->getLeftChild(), node->getContents());
               
          }
          size--;
          return true;
     }
}

void BSTree::removeMax (BSTNode*& node, int& target) {
     if (node->getRightChild() == NULL) {
          target = node->getContents();
          BSTNode* tempNode = node;
          //attaches the other nodes
          node = node->getLeftChild();
          delete tempNode;
     } else {
          removeMax(node->getRightChild(), target);
     }
}