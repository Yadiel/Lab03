/*-- List.cpp------------------------------------------------------------
 
   This file implements List member functions.
  
-------------------------------------------------------------------------*/
 
#include <cassert>
using namespace std;
 
#include "list.h"
 
//--- Definition of class constructor
List::List()                 
: mySize(0)
{}
 
//--- Definition of empty()
bool List::empty() const
{
   return mySize == 0;
}
 
//--- Definition of display()
void List::display(ostream & out) const
{
   for (int i = 0; i < mySize; i++)
     out << myArray[i] << "  ";
}
 
//--- Definition of output operator
ostream & operator<< (ostream & out, const List & aList)
{
   aList.display(out);
   return out;
}
 
//--- Definition of insert()
void List::insert(ElementType item, int pos)
{
   if (mySize == CAPACITY)
   {
      cerr << "*** No space for list element -- terminating "
              "execution ***\n";
      exit(1);
   }
   if (pos < 0 || pos > mySize)
   {
      cerr << "*** Illegal location to insert -- " << pos 
           << ".  List unchanged. ***\n";
      return;
   }
 
   // First shift array elements right to make room for item
 
   for(int i = mySize; i > pos; i--)
      myArray[i] = myArray[i - 1];
 
   // Now insert item at position pos and increase list size  
   myArray[pos] = item;
   mySize++;
}
 
//--- Definition of erase()
void List::erase(int pos)
{
   if (mySize == 0)
   {
      cerr << "*** List is empty ***\n";
      return;
   }
   if (pos < 0 || pos >= mySize)
   {
      cerr << "Illegal location to delete -- " << pos
           << ".  List unchanged. ***\n";
      return;
   }
 
   // Shift array elements left to close the gap
   for(int i = pos; i < mySize; i++)
       myArray[i] = myArray[i + 1];
 
   // Decrease list size
    mySize--;
}
 
 
 
void List::push(ElementType e)  {
  insert(e,mySize);
}
 
 
void List::sort() {
  // Step through each element of the array
  for (int nStartIndex = 0; nStartIndex < mySize; nStartIndex++)
  {
      // nSmallestIndex is the index of the smallest element
      // we've encountered so far.
      int nSmallestIndex = nStartIndex;
   
      // Search through every element starting at nStartIndex+1
      for (int nCurrentIndex = nStartIndex + 1; nCurrentIndex < mySize; nCurrentIndex++)
      {
          // If the current element is smaller than our previously found smallest
          if (myArray[nCurrentIndex] < myArray[nSmallestIndex])
              // Store the index in nSmallestIndex
              nSmallestIndex = nCurrentIndex;
      }
   
      // Swap our start element with our smallest element
      swap(myArray[nStartIndex], myArray[nSmallestIndex]);
  }
}
 
bool List::operator==(const List& L) const {
  if (mySize != L.mySize) return false;
  for (int i=0; i<mySize; i++) {
    //cout << myArray[i] << " " << L.myArray[i] << endl;
    if (myArray[i] != L.myArray[i]) return false;
  }
  return true;
}
 
int List::count(ElementType e) { 
  int count = 0; 
  for(int i=0; i < mySize; i++){
      if(myArray[i] == e){ 
        count++; 
      }
  }
  return count; 
}
 
/*ElementType List::pop(int pos){
 
}
 
List List::merge(List& L){
 
}*/
