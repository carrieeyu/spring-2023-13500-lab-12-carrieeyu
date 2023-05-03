#include <iostream>
#include <vector>
#include "funcs.h"

/*Task A
- Program a function called vector<int> makeVector(int n) that returns a vector of n integers that range from 0 to n-1. 
- Call your program vectors.cpp. Your function must be implemented outside the main function and must return a vector.
*/

std:: vector<int> makeVector(int n){
  std:: vector<int> nVector;
  
  for(int i = 0; i <= n-1; i++){ //loops from range 0 to n-1
    nVector.push_back(i); //adding elements to nVector
  }
  return nVector;
  
}


/*Task B
- Implements the function vector<int> goodVibes(const vector<int>& v); 
- Given a vector of integers, return a vector with only the positive integers in the same order.

vector<int> v{1,2,-1,3,4,-1,6};
goodVibes(v); // returns [1,2,3,4,6]
*/

std:: vector<int> goodVibes(const std:: vector<int>& v){
  std:: vector<int> posInts;

  for(int i = 0; i < v.size(); i++){
    if(v[i] > 0){ //if a positive integer,
      posInts.push_back(v[i]); //then add it to posInts vector
    }
  }
  return posInts;
  
}


/*Task C
- Implements the function void gogeta(vector<int> &goku, vector<int> &vegeta)
- Appends elements of the second vector into the first and empties the second vector

vector<int> v1{1,2,3};
vector<int> v2{4,5};
gogeta(v1, v2); // v1 is now [1,2,3,4,5] and v2 is empty.
*/
void gogeta(std:: vector<int> &goku, std:: vector<int> &vegeta){
  //1)push back v2 into v1
  //2)remove elements from v2
  
  for(int i = 0; i < vegeta.size(); i++){
    goku.push_back(vegeta[i]); //adding the contents of vegeta to the back of goku contents
  }
  vegeta.clear(); //check if vegeta is empty after adding its contents to goku
  //std:: cout << vegeta.size() << std:: endl; //should display vegeta size as 0 because the vector is now emptied

}


/*Task D
- Implements the function vector<int> sumPairWise(const vector<int> &v1, const vector<int> &v2) 
- Returns a vector of integers whose elements are the pairwise sum of the elements from the two vectors passed as arguments
- If a vector has a smaller size than the other, consider extra entries from the shorter vectors as 0

vector<int> v1{1,2,3};
vector<int> v2{4,5};

sumPairWise(v1, v2); // returns [5, 7, 3]
*/
std:: vector<int> sumPairWise(const std:: vector<int> &v1, const std:: vector<int> &v2){

  std:: vector<int> addIndexValues;

  //if vector sizes are equal
  if(v1.size() == v2.size()){
    for(int i = 0; i < v1.size(); i++){
      addIndexValues.push_back(v1[i]+v2[i]); //then calculate the pairwise sum of the elements
    }
  }

  //if vector sizes are NOT equal
  if(v1.size() != v2.size() ){
    if(v1.size() < v2.size() ){ //if v1 is smaller than v2,
      for(int i = 0; i < v2.size(); i++){ //then traverse through v2 and initialize the new elements of v1 to 0
        addIndexValues.push_back(v1[i]+v2[i]); 
      }
    }
    else if(v1.size() > v2.size() ){ //if v1 is bigger than v2,
      for(int i = 0; i < v1.size(); i++){ //then traverse through v1 and initialize the new elements of v2 to 0
        addIndexValues.push_back(v1[i]+v2[i]);
      }
    }
  }
  return addIndexValues;
  
}
