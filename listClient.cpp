//--- Program to test List class.
 
#include <iostream>
using namespace std;
 
#include "list.h"
#include <cassert>
#include <cstdlib>
 
 
/*
int testMerge() {
   List L1, L2, L3, T;
 
   for (int i=0; i<5; i++) {
      int r = rand()%20;
      int s = rand()%20;
      L1.insert(r, i);
      L2.insert(s, i);
      T.insert(r, i*2); T.insert(s, i*2+1);
   }
 
   T.sort();
   L3 = L1.merge(L2);
   assert(L3 == T);
   cout << "TestMerge passed!" << endl;
}
 
 
 
int testCount() {
   List L1;
   int ctr = 0;
   int s = rand()%10;
   for (int i=0; i<20; i++) {
      int r = rand()%10;
      L1.insert(r, i);
      if (s==r) ctr++;
   }
   assert(L1.count(s) == ctr);
   cout << "testCount passed!" << endl;
}
 
*/
/*
// We create two lists L1, L2. That contain exactly the same
// elements except that L1 contains one less element.
// We pop the element from L2 and compare against L1.
 
int testPop(bool withParam) {
   List L1, L2;
   ElementType popedVal;
 
   cout << "Testing the pop ...." << endl;
 
   int pos;
   if (withParam)
      pos = rand()%10; // position to pop
   else
      pos = 9;
 
   for (int i=0; i<10; i++) {
      int r = rand()%100;
      L2.push(r);
      // insert everything to L1 except the element that
      // will be at position pos.
      if (pos!=i) 
         L1.push(r);  
      else 
         popedVal = r;
   }
   cout << "L2 contains: " << L2 << endl;
   assert(popedVal == L2.pop(pos));
   cout << "After poping the " << pos << "th element contains: " << L2 << endl;
   assert(L1 == L2);
 
   cout << "Passed the test!" << endl;
 
}
*/
 
 
 
int main() {
   srand(time(NULL));
 
   List L;           // object of type List
 
   for(int i=0 ; i<10; i++){
      L.insert((rand() % 99), i);      
   }
 
   cout << L << endl;
 
   L.erase(7); 
 
   cout << L << endl; 
 
   L.sort(); 
 
   cout << L << endl; 
 
   L.push(7); 
 
   cout << L << endl;
 
   cout << L.count(6) << endl;  
 
   cout << "I am your client, feed me!" << endl;
   //testMerge();
   //testCount();
   //testPop(false);
   
   return 0;
}
