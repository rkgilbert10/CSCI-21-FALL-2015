/*
 * Programming Challenge 17
 *
 * Rachel Gilbert
 * 
 * Created: 10/21/15
 * Last Modified: 10/21/15
 * Notes:
 * Sources used: 
 */
 
 #include "SLNode.h"
 

 
 /* Default constructor
  * Sets values nextNode(NULL) and contents(0)
  */
SLNode::SLNode() {
    nextNode = NULL;
    contents = 0;
}

/* Overloaded constructor
 * @parameter newContents set to contents
 * Sets nextNode to NULL;
 */
 SLNode::SLNode(int newContents) {
     contents = newContents;
     nextNode = NULL;
 }
 
/* Destructor 
 * sets nextNode to NULL
 *
 */
 SLNode::~SLNode() {
     nextNode = NULL;
 }
 
 /* setContents
  * @param newContents sets the new contents to contents
  */
 void SLNode::setContents (int newContents) {
   contents = newContents;
 }
 
 /* getContents
  * @returns contents
  */
 
 int SLNode::getContents() const {
  return contents;
 }
 
 /* setNextNode
  * @param newNode sets new node to nextNode by reference
  */
 void SLNode::setNextNode(SLNode* newNode) {
   nextNode = newNode;
 }
 
 /* getNextNode
  * @return nextNode
  */
 SLNode* SLNode::getNextNode () const {
  return nextNode;
 }