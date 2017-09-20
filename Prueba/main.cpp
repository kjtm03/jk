#include <iostream>
#include <stdio.h>
#include <bitset>
using namespace std;

int main(){
   //printf("%c",240);
  // bitset<4> bitvec;
  // bitset<4> addition;
   //addition.set(0);
   unsigned long a = 2;

    cout << bitset<8>(a) << endl;
    a+=30;
    cout << bitset<8>(a) << endl;

}
