/* Driver for Project4
 * Created by: Rachel Gilbert
 * Created on: 11/15/15
 * Last modified: 12/3/15
 *
 * Sources:
 * Notes: 
 */


#include "BSTNode.h"
#include "BSTree.h"
#include "Word.h"
 
#include <cassert>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

void processFile(string filename);


int main (int argc, char** argv) {

    if (argc != 2) {
		cout << "Usage: " << argv[0] << " INPUT_FILE" << endl;
	} else {
		string fileName = argv[1];
		processFile(fileName);
	}
	
    return 0;
     
}


void processFile(string filename) {

	ifstream inputstream;
	BSTree<Word> *tree = NULL;
	
	inputstream.open(filename.c_str());
	
	if (inputstream.fail()) {
		cout << "Unable to open " << filename << " for processing." << endl;
	} else {
		string nextline;
		while (! inputstream.eof()) {
			
			stringstream ss;
			string input;
			
			
			getline(inputstream, nextline);
			char firstCharacter = nextline[0];
			
			switch (toupper(firstCharacter)) {
				case 'C':
				    //Create tree - if one exists, delete it
					if (tree != NULL) {
					 	delete tree;
					 }
					tree = new BSTree<Word>;
					cout << "TREE CREATED" << endl;
					break;

				case 'I':
				    //Insert into tree
					if (tree == NULL) {
						cout << "MUST CREATE TREE INSTANCE" << endl;
					} else {
						ss.str(nextline.substr(2));
						ss >> input;
                        Word word1(input);
						if (tree->insert(word1.getWord()) == true) {
						    cout << "WORD " << Word::upperCase(word1.getWord()) << " INSERTED" << endl;
						} else {
						    Word* gotWord = tree->get(input);
						    gotWord->incrementCount();
						    cout << "WORD " << Word::upperCase(word1.getWord()) << " INCREMENTED" << endl;
						}
					}
					break;

				case 'X':
				    //Clear tree
					if (tree == NULL) {
						cout << "MUST CREATE TREE INSTANCE" << endl;
					} else {
						tree->clear();
						cout << "TREE CLEARED" << endl;
					}
					break;
					
				case 'D':
				    //Delete Tree
					if (tree == NULL) {
						cout << "MUST CREATE TREE INSTANCE" << endl;
					} else {
					delete tree;
					tree = NULL;
					cout << "TREE DELETED" << endl;
					}
					break;
					
				case 'F':
				    //Find word in tree
					if (tree == NULL) {
						cout << "MUST CREATE TREE INSTANCE" << endl;
					} else {
						ss.str(nextline.substr(2));
						ss >> input;
						Word word1(input);
						if (tree->getSize() == 0) {
						    cout << "TREE EMPTY" << endl;
						} else {
    						if (tree->find(input) == true) {
    						    cout << "FOUND " << Word::upperCase(input)  << endl;
    						} else {
    						    cout << Word::upperCase(input) << " NOT FOUND" << endl;
    						}
						}
					}
					break;

				case 'E': 
				    //Print reverseOrder
					if (tree ==  NULL) {
						cout << "MUST CREATE LIST INSTANCE" << endl;
					} else if (tree->getSize() > 0) {
						tree->reverseOrder(ss);
						cout << ss.str();
					} else {
						cout << "TREE EMPTY" << endl;
					}
                    break;
				case 'R':
				    //Remove word
					if (tree == NULL) {
						cout << "MUST CREATE LIST INSTANCE" << endl;
					} else {
						ss.str(nextline.substr(2));
						ss >> input;
						Word word2(input);
						if (tree->getSize() > 0) {
    						if (tree->remove(word2.getWord()) == true) {
    							cout << "REMOVED " << Word::upperCase(word2.getWord()) << endl;
    						} else {
    							cout << Word::upperCase(word2.getWord()) << " NOT FOUND" << endl;
    						}
						} else {
						    cout << "TREE EMPTY" << endl;
						}
					}
					break;
					
				case 'G': 
				    //Get word
					ss.str(nextline.substr(2));
					ss >> input;
					if (tree == NULL) {
						cout << "MUST CREATE TREE INSTANCE" << endl;
					} else {
					    if(tree->getSize() > 0) {
    					     Word* gotWord = tree->get(input);
    					     if(gotWord == NULL) {
    					         cout << Word::upperCase(input) << " NOT FOUND" << endl;
    					     } else {
    					         cout << "GOT " << (*gotWord);
    					     }
					    } else {
					        cout << "TREE EMPTY" << endl;
					    }
					}

					break;
				
				case 'O':
                    //inOrder print
					if (tree ==  NULL) {
						cout << "MUST CREATE LIST INSTANCE" << endl;
					} else if (tree->getSize() > 0) {
						tree->inOrder(ss);
						cout << ss.str();
					} else {
						cout << "TREE EMPTY" << endl;
					}
					break;
					
				case 'N':
				    //Returns size of the tree
					if (tree ==  NULL) {
						cout << "MUST CREATE TREE INSTANCE" << endl;
					} else {
						cout << "TREE SIZE IS " << tree->getSize() << endl;
					}
					break;
					
				default:
					break;
		
		    } 
	    } inputstream.close();
    }
}

