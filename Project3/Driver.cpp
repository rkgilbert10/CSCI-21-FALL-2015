/*
 * Programming Project 3
 * Created by: 
 * Rachel Gilbert
 * 
 * Created: 10/29/15
 * Last Modified: 11/5/15
 * Notes: Completed
 * Sources used:    
 *
 */


#include "DLNode.h"
#include "DLList.h"

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
	DLList *list = NULL;
	inputstream.open(filename.c_str());
	
	if (inputstream.fail()) {
		cout << "Unable to open " << filename << " for processing." << endl;
	} else {
		string nextline;
		while (! inputstream.eof()) {
			
			stringstream ss;
			int value = 0;
			getline(inputstream, nextline);
			char firstCharacter = nextline[0];
			
			switch (toupper(firstCharacter)) {
				case 'C':
					if (list != NULL) {
					 	delete list;
					 }
					list = new DLList;
					cout << "LIST CREATED" << endl;
					break;
				case 'T':	
					if (list == NULL) {
						cout << "MUST CREATE LIST INSTANCE" << endl;
					} else if (list->getSize() > 0) {
						list->popFront();
						cout << "REMOVED HEAD" << endl;
					} else {
						cout << "LIST EMPTY" << endl;
					}
					break;
				case 'I':
					if (list == NULL) {
						cout << "MUST CREATE LIST INSTANCE" << endl;
					} else {
						ss.str(nextline.substr(2));
						ss >> value;
						list->insert(value);
						cout << "VALUE " << value << " INSERTED" << endl;
					}
					break;
				case 'P':
					if (list ==  NULL) {
						cout << "MUST CREATE LIST INSTANCE" << endl;
					} else if (list->getSize() > 0) {
						cout << (*list) << endl;
					} else {
						cout << "LIST EMPTY" << endl;
					}
					break;
				case 'X':
					if (list == NULL) {
						cout << "MUST CREATE LIST INSTANCE" << endl;
					} else {
						list->clear();
						cout << "LIST CLEARED" << endl;
					}
					break;
				case 'D':
					if (list == NULL) {
						cout << "MUST CREATE LIST INSTANCE" << endl;
					} else {
					delete list;
					list = NULL;
					cout << "LIST DELETED" << endl;
					}
					break;
				case 'F':
					if (list == NULL) {
						cout << "MUST CREATE LIST INSTANCE" << endl;
					} else {
						ss.str(nextline.substr(2));
						ss >> value;
						list->pushFront(value);
						cout << "VALUE " << value << " ADDED TO HEAD" << endl;
					}
					break;
				case 'B':
					if (list == NULL) {
						cout << "MUST CREATE LIST INSTANCE" << endl;
					} else {
						ss.str(nextline.substr(2));
						ss >> value;
						list->pushBack(value);
						cout << "VALUE " << value << " ADDED TO TAIL" << endl;
					}
					break;
				case 'A':
					if (list == NULL) {
						cout << "MUST CREATE LIST INSTANCE" << endl;
					} else {
						try {
							cout << "VALUE " << list->getFront() << " AT HEAD" << endl;
						} catch (string e) {
							cout << e << endl;
						}
					}
					break;
				case 'Z':
					if (list == NULL) {
						cout << "MUST CREATE LIST INSTANCE" << endl;
					} else {				
						try {
							cout << "VALUE " << list->getBack() << " AT TAIL" << endl;
						} catch (string e) {
							cout << e << endl;
						}
					}
					break;
				case 'K':
					if (list == NULL) {
						cout << "MUST CREATE LIST INSTANCE" << endl;
					} else if (list->getSize() > 0) {
						list->popBack();
						cout << "REMOVED TAIL" << endl;
					} else {
						cout << "LIST EMPTY" << endl;
					}
					break;
				case 'E': 
					if (list == NULL) {
						cout << "MUST CREATE LIST INSTANCE" << endl;
					} else {
						ss.str(nextline.substr(2));
						ss >> value;
						if (list->removeAll(value) == true) {
							cout << "VALUE " << value << " ELIMINATED" << endl;
						} else {
							cout << "VALUE " << value << " NOT FOUND" << endl;
						}
					}
					break;
				case 'R':
					if (list == NULL) {
						cout << "MUST CREATE LIST INSTANCE" << endl;
					} else {
						ss.str(nextline.substr(2));
						ss >> value;
						if (list->removeFirst(value) == true) {
							cout << "VALUE " << value << " REMOVED" << endl;
						} else {
							cout << "VALUE " << value << " NOT FOUND" << endl;
						}
					}
					break;	
				case 'G': 
					ss.str(nextline.substr(2));
					ss >> value;
					if (list == NULL) {
						cout << "MUST CREATE LIST INSTANCE" << endl;
					} else if (list->get(value) == true) {
						cout << "VALUE " << value << " FOUND" << endl;
					} else {
						cout << "VALUE " << value << " NOT FOUND" << endl;
					}
					break;
				case 'N':
					if (list ==  NULL) {
						cout << "MUST CREATE LIST INSTANCE" << endl;
					} else {
						cout << "LIST SIZE IS " << list->getSize() << endl;
					}
					break;
				default:
					break;
		
		} 
	} inputstream.close();
}
}