/* Class definitions for DLNode
 * Created by Rachel Gilbert
 * Created:10/30/15
 * Modified: 10/30/15
 * Notes: 
 */
 
#include "DLNode.h"

DLNode::DLNode() {
     contents = 0;
     nextNode = NULL;
     previousNode = NULL;
}

DLNode::DLNode(int newContents) : contents(newContents) {
     nextNode = NULL;
     previousNode = NULL;
}

DLNode::~DLNode() {
     
}

void DLNode::setContents(int newContents) {
     contents = newContents;
}

int DLNode::getContents() const {
     return contents;
}

void DLNode::setNext(DLNode* newNext){
     nextNode = newNext;
}

DLNode* DLNode::getNext() const {
     return nextNode;
}

void DLNode::setPrevious(DLNode* newPrevious) {
     previousNode = newPrevious;
}

DLNode* DLNode::getPrevious() const {
     return previousNode;
}