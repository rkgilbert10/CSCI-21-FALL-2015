/*
 * Box.h Header File
 * Header File for class Box - to be used with Programming Project 2
 *
 * Rachel Gilbert
 * Date created: 9/19/15
 * Last date modified: 10/15/15
 *
 * SOURCES USED:
 */
#pragma once

#include "prize.h"


#include <string>
using namespace std;



class Box
{
     private:
          unsigned int boxNumber;
          string boxColor;
          Prize scratch; 
          Prize* prizes; 
          unsigned int prizeCapacity;
          unsigned int prizeCount;

     public:
          //defualt constructor
          Box();
          //Overloaded constructor
          Box(unsigned int newBoxNumber, string newBoxColor,
              unsigned int newPrizeCapacity);
          ~Box();
          void addBoxNumber(unsigned int newBoxNumber);
          void addBoxColor(string newBoxColor);
          
          void setBoxNumber(unsigned int newBoxNumber);
          void setBoxColor(string newBoxColor);
          
          unsigned int getBoxNumber();
          string getBoxColor();

          unsigned int getPrizeCapacity();
          unsigned int getPrizeCount();
          bool addPrize(Prize prize);

          Prize& getPrize(unsigned int index);
          Prize removePrize(unsigned int index);



};



