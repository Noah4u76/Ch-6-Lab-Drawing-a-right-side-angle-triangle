//
// File: Main.cpp
// Description: Drawing a right side angle triangle
// Created: Sun. March 26, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

#include <iostream>
using namespace std;

/* TODO: Write recursive DrawTriangle() function here. */
void DrawTriangle(int baseLength) {
  if (baseLength <= 0)
    return;
  
  DrawTriangle(baseLength - 2);
  
  for(int i = 0; i < 9 - (baseLength / 2); ++i) {
    cout << " ";
  }
  for(int j = 0; j < baseLength; ++j){
    cout << "*";
  }
  cout << endl;
}

int main() {
   int baseLength;
   
   cin >> baseLength;
   DrawTriangle(baseLength);
   return 0;
}