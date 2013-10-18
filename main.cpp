/* 
 * File:   main.cpp
 * Author: srihari
 *
 * Created on October 15, 2013, 8:59 AM
 */

#include "SpyOutput.h"
#define endl   '\n'
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

   double d1 = 12.3;
   int i1 = 45;
   SpyOutput spy(&cout);
   spy << "abc" << endl;
   spy << "d1=" << d1 << " i1=" << i1 << 'z' << endl;

   cout << "count=" << spy.getCount() << endl;
   cout << "Check Sum=" << spy.getCheckSum() << endl;


 
return 0;
}

