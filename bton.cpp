// bton.cpp
// Contreras-Castro, Ivan
// converting a binary to a integer
#include"main.h"
/*

  little note to people who stumble across my work
  1. this is a TOOL to help check if your math is good
     and develope skills
  2. send me some feed back to better my organization and methods
     // yes i know i could use better variable names and i will work on that

  3. ill come back to make a loop to keep the program runnning for as long as you want

*/
int bton(string binary)
{
  int pos_bi =0; // location number of first
  for(unsigned i = 0; i < binary.length(); i++)
  {
    if(binary[i] == 1)
    {
      pos_bi = i;
      break;
    }// looks for the first 1 in the sequence
  }// end of for loop

  int new_distance = binary.length() - pos_bi; // gives us 1 when 0001
  int number = pow(2,(new_distance-1));
  for(unsigned i = pos_bi +1 ; i < binary.length(); i++)
  {
    cout << "cur number in " << binary[i] << endl;
    if(binary[i] == '1')
    {
      cout << "should come by here once\n";
      int temp_number = pow(2,((binary.length() - i))  - 1);// going to add it to the number being returned
      cout << "temp number is " << temp_number << endl;
      number = number + temp_number;// adding the number to its new total
      cout <<"number is " << number << endl;
    }
    // else nothing
  }
  return number;
}
bool legal_string(string binary)
{
  for(unsigned i = 0; i < binary.length(); i++)
  {
    if(binary[i] != 1 && binary[i] !=0)
    {
      return false;
    }
  }// end of loop
  return true;
}// didnt want to add it to the makefile
