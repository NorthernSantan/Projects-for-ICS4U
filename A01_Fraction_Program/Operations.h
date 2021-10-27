/*

  Operations

  This file is responsible for performing all types of calculations
  in our program, including Addition, Subtraction, Multiplication etc.

  How it works:

    callent function will provide getFunctionToRun() the option user has chosen,
    getFunctionToRun() will return pointer to the function based on userchoice to
    the callent function. Main function will run that respective function.

*/


#ifndef Operations
#define Operations 

  // Data Type of the function that will be returned
  typedef void function();

  /* 
  
    Takes an argument of int that represents user choice,
    and returns the function that will fullfill the task
    the user has requested.

  */ 
  
  function *getFunctionToRun(int Choice);

#endif //Operations.h
