// bi_con.cpp
// Contreras-Castro, Ivan
// 7/13/2019
#include"main.h"

int main()
{
  int k = 0;

  string convert_type;
  // options
  cout << "bi ... binary to integer\n"
       << "num ... number to binary\n"
       << "kill ... terminate executable\n";
  cin >> convert_type;

  // error code

  if(convert_type != "bi" && convert_type != "num" && convert_type != "kill")
  {
    cerr << "ERROR: not a convertion type\n";
  }

  /*if bi then a binary number will be entered
    and will be converted to a standard integer*/
  if(convert_type == "bi")
  {
    cout << "Please enter a POSITIVE binary number\n";
    cin >> k;

  }

  // if num then a number will be converted to a binary
  if(convert_type == "num")
  {
    cout << "Please enter a POSITIVE integer\n";
    cin >> k;
    vector<int> temp_hold = ntob(k);

    // print the binary
    cout << "binary for " << k << " is ";
    for(int i = temp_hold.size() -1; i >=0; i--)
    {
      cout << temp_hold[i];
    }
    cout << endl;
  }
  if(convert_type == "kill")
  {
   //
  }



  return 0;
}
