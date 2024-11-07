#pragma once
#define BLOCK_ARGUMENTS  

#ifdef BLOCK_ARGUMENTS
  #define PARSE_BLOCKED_ARGUMENTS
#endif

#include <iostream>

#ifndef __STDC__          
#define __STDC__ 
#endif

#ifdef __STDC__
#define STDC_SUPPORT "Yes"
#else
#define STDC_SUPPORT "No"
#error "Another C standard compiler detected"
#endif

using namespace std;

void parseArguments(int argc, char* argv[]) 
{
  #ifndef PARSE_BLOCKED_ARGUMENTS
    for (int i = 0; i != argc; i++)
    {
      cout << "Arg[" << i << "] = " << argv[i] << endl;
    }
  #else
    cout << "Arguments are blocked";
  #endif
}

int main(int argc, char* argv[])
{
  cout << "Date: " << __DATE__ << endl;
  cout << "Line: " << __LINE__ << endl;
  cout << "Time: " << __TIME__ << endl;
  cout << "File: " << __FILE__ << endl;
  cout << "STDC Support: " << STDC_SUPPORT << endl; 
      parseArguments(argc, argv);
}