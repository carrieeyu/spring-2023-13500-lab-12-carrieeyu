#include <iostream>
#include <vector>
#include "funcs.h"

int main(){

  //Task A
  std:: cout << "(Task A)" << std:: endl;

  //test1
  std:: vector<int> v;
  v = makeVector(10); //initializing vector v to be a size of 10 with a range from 0 to 9

  for(int i = 0; i < v.size(); i++){ //traverse through v and print all elements
    std:: cout << i; //0,1,2,3,4,5,6,7,8,9
  }
  std:: cout << "" << std:: endl;

  
  //test2
  std:: vector<int> vec1;
  vec1 = makeVector(5); 

  for(int i = 0; i < vec1.size(); i++){
    std:: cout << i; //0,1,2,3,4
  }
  std:: cout << "" << std:: endl;

  
  //test3
  std:: vector<int> vec2;
  vec2 = makeVector(2); 

  for(int i = 0; i < vec2.size(); i++){
    std:: cout << i; //0,1
  }
  std:: cout << "" << std:: endl;
  
  std:: cout << "--------------------------------------------" << std:: endl;

  //Task B
  std:: cout << "(Task B)" << std:: endl;

  //test1
  std:: vector<int> vectorB {1,2,-1,3,4,-1,6}; 
  std:: vector<int> happy;
  happy = goodVibes(vectorB); //storing only positive integers to happy vector from vectorB

  for(int i = 0; i < happy.size(); i++){ 
    std:: cout << happy[i]; //1,2,3,4,6
  }
  std:: cout << "" << std:: endl;

  
  //test2
  std:: vector<int> vectorB1 {-3,-1,1,1,2,3}; 
  std:: vector<int> happy1;
  happy1 = goodVibes(vectorB1); 

  for(int i = 0; i < happy1.size(); i++){
    std:: cout << happy1[i]; //1,1,2,3
  }
  std:: cout << "" << std:: endl;

  
  //test3
  std:: vector<int> vectorB2 {-5,-4,3,-2,-1}; 
  std:: vector<int> happy2;
  happy2 = goodVibes(vectorB2); 

  for(int i = 0; i < happy2.size(); i++){
    std:: cout << happy2[i]; //3
  }
  std:: cout << "" << std:: endl;

  std:: cout << "--------------------------------------------" << std:: endl;

  //Task C
  std:: cout << "(Task C)" << std:: endl;

  //test1
  std:: vector<int> goku {1,2,3};
  std:: vector<int> vegeta {4,5};
  gogeta(goku, vegeta); //adding and removing the vegeta elements that were added to the goku vector

  for(int i = 0; i < goku.size(); i++){
    std:: cout << goku[i]; //1,2,3,4,5
  }
  std:: cout << "" << std:: endl;

  
  //test2
  std:: vector<int> goku1 {5,9,3,4,5,6};
  std:: vector<int> vegeta1 {1,2,3};
  gogeta(goku1, vegeta1);

  for(int i = 0; i < goku1.size(); i++){
    std:: cout << goku1[i]; //5,9,3,4,5,6,1,2,3
  }
  std:: cout << "" << std:: endl;

  
  //test3
  std:: vector<int> goku2 {0};
  std:: vector<int> vegeta2 {1,2,3};
  gogeta(goku2, vegeta2);

  for(int i = 0; i < goku2.size(); i++){
    std:: cout << goku2[i]; //0,1,2,3
  }
  std:: cout << "" << std:: endl;
  
  std:: cout << "--------------------------------------------" << std:: endl;

  //Task D
  std:: cout << "(Task D)" << std:: endl;

  //test1
  std:: vector<int> v1{1,2,3};
  std:: vector<int> v2{4,5};
  
  std:: vector<int> addIndexValues;
  addIndexValues = sumPairWise(v1, v2); //adds the sum of v1 and v2 by the index element

  for(int i = 0; i < addIndexValues.size(); i++){
    std:: cout << addIndexValues[i]; //5,7,3
  }
  std:: cout << "" << std:: endl;
  

  //test2
  std:: vector<int> v3{1,2,3,6,7,8};
  std:: vector<int> v4{4,5};
  
  std:: vector<int> addIndexValues1;
  addIndexValues1 = sumPairWise(v3, v4); 

    for(int i = 0; i < addIndexValues1.size(); i++){
    std:: cout << addIndexValues1[i]; //5,7,3,6,7,8
  }
  std:: cout << "" << std:: endl;
  

  //test3
  std:: vector<int> v5{1,2,3};
  std:: vector<int> v6{4,5,1,3,6,};
  
  std:: vector<int> addIndexValues2;
  addIndexValues2 = sumPairWise(v5, v6); 

    for(int i = 0; i < addIndexValues2.size(); i++){
    std:: cout << addIndexValues2[i]; //5,7,4,3,6
  }
  std:: cout << "" << std:: endl;
  
  
}
