// ntob.cpp
// Contreras-Castro, Ivan
// converting a integer to a binary
#include"main.h"

vector<int> ntob(int k)
{
  vector<int> list;

  while(k > 0)
  {
    int r = k%2; // will give us a 1 or 0 for our list
    k = k/2;// now we divide k by 2
    list.push_back(r);
  }// binary stored in a vector

  return list;
}
