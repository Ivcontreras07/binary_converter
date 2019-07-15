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
    string binary;
    cout << "Please enter a POSITIVE binary number\n";
    cin >> binary;

    /*if(legal_string(binary))
    {
      cerr << "ERROR: not a valid binary number\n";
      break;
    }// prevents non binary from running convertion*/

    int number = bton(binary);
    cout << "the binary " << binary << " is " << number << endl;

  }// end of  bi option

  // if num then a number will be converted to a binary
  if(convert_type == "num")
  {
    cout << "Please enter a POSITIVE integer\n";
    cin >> k;
    vector<int> temp_hold = ntob(k);

    // print the binary
    cout << "binary for " << k << " is ";
    for(int i = temp_hold.size() -1; i >= 0; i--)
    {
      cout << temp_hold[i];
    }
    cout << endl;
  }// end of num option

  if(convert_type == "kill")
  {
    cerr << "not present\n";
   // not sure yet
  }



  return 0;
}
