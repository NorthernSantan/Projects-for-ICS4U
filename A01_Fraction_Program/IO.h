/*

  IO

  IO also stands for Input/Output, as its name suggests, this library
  contains functions that allow the program to interact with user, and
  vice versa.

  This library forms an interface between user and the computer

*/


#ifndef IO

#define IO

/*

  These are some of the limitations set as per the assignment
  These limitations include limitations such as the max number 
  of fractions that can be stored, Max Numberator and Denomenator 
  value, etc...


*/

#define IO_MAX_FRACTIONS 100	
#define IO_MIN_NUMERATOR -99
#define IO_MAX_NUMERATOR 99
#define IO_MIN_DENOMINATOR 0
#define IO_MAX_DENOMINATOR 99
  

  /*
  
    This function is responsible for showing available
    options on the screen.

    It takes in an pointer to a variable local to the 
    callent function and assigns the value (or option)
    given by the user.
  
  */
  void showMenu(int *UserChoice);

  /*
  
    This function is responsible for prompting user to
    enter values for the fraction.
  
  */
  void getUserFraction (int *numer, int *denom);

  /*
  
    Clears Console, and allows 

  */
  void ClearConsole();


#endif //IO.h

