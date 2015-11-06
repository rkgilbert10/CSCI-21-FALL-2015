/* Header file for DLNode
 * Created by Rachel Gilbert
 * Created:10/30/15
 * Modified: 10/31/15
 * Notes: 
 */

#pragma once

#include <iostream>
#include <sstream>
using namespace std;

class DLNode {
     private:
          int contents;
          DLNode* nextNode;
          DLNode* previousNode;
     
     public: 
     
          /* Default constructor.
           * Sets contents to 0, next and previous nodes to NULL.
           */
          DLNode();
          
          /* Overloaded constructor.
           * Sets newContents to contents. 
           * Sets next and previous nodes to NULL. 
           * @param newContents 
           */
          DLNode(int newContents);
          
          /* Destructor. 
           * Does nothing. 
           */
          virtual ~DLNode();
          
          /* setContents
           * @param newContents sets to contents. 
           */
          void setContents(int newContents);
          
          /* Gets contents
           * @returns contents
           */
          int getContents() const;
          
          /* Sets next node
           * @param newNext - sets nextNode to newNext
           */
          void setNext(DLNode* newNext);
          
          /* Gets next node
           * @return the next node. 
           */
          DLNode* getNext() const;
          
          /* Sets previous node. 
           * @param newPrevious - sets previous node to newPrevious
           */
          void setPrevious(DLNode* newPrevious);
          
          /* Get previous node. 
           * @return previousNode. 
           */
          DLNode* getPrevious() const;
     
};