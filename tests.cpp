#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

//Task A
TEST_CASE("Integers ranging from 0 to n-1"){

  //test1
  std:: vector<int> v;
  v = makeVector(10);

  std:: vector <int> ints {0,1,2,3,4,5,6,7,8,9}; //the correct result

  CHECK(v == ints);

  /*
  for(int i = 0; i < v.size(); i++){
    std:: cout << i << std:: endl;
  }
  
  CHECK(v[0] == 0);
  CHECK(v[1] == 1);
  CHECK(v[2] == 2);
  CHECK(v[3] == 3);
  CHECK(v[4] == 4);
  CHECK(v[5] == 5);
  CHECK(v[6] == 6);
  CHECK(v[7] == 7);
  CHECK(v[8] == 8);
  CHECK(v[9] == 9);
  */
  
  //test2
  std:: vector<int> vec1;
  vec1 = makeVector(5);

  std:: vector <int> ints1 {0,1,2,3,4}; //the correct result

  CHECK(vec1 == ints1);

  //test3
  std:: vector<int> vec2;
  vec2 = makeVector(2);

  std:: vector <int> ints2 {0,1}; //the correct result

  CHECK(vec2 == ints2);
}


//Task B
TEST_CASE("Positive Integers"){

  //test1
  std:: vector<int> vectorB {1,2,-1,3,4,-1,6}; 
  
  std:: vector<int> happy;
  happy = goodVibes(vectorB); 

  std:: vector<int> pos {1,2,3,4,6}; //the correct result

  CHECK(happy == pos);

  //test2
  std:: vector<int> vectorB1 {-3,-1,1,1,2,3}; 
  
  std:: vector<int> happy1;
  happy1 = goodVibes(vectorB1); 

  std:: vector<int> pos1 {1,1,2,3}; //the correct result

  CHECK(happy1 == pos1);

  //test3
  std:: vector<int> vectorB2 {-5,-4,3,-2,-1}; 
  
  std:: vector<int> happy2;
  happy2 = goodVibes(vectorB2); 

  std:: vector<int> pos2 {3}; //the correct result

  CHECK(happy2 == pos2);
}


//Task C
TEST_CASE("Appending second vector contents into the first"){

  //test1
  std:: vector<int> goku {1,2,3};
  std:: vector<int> vegeta {4,5};
  gogeta(goku, vegeta);

  std:: vector<int> gokuVegeta {1,2,3,4,5}; //the correct result

  CHECK(goku == gokuVegeta); //goku should have all elements of vegeta
  int vegetaSize = vegeta.size();
  CHECK(vegetaSize == 0); //vegeta should be empty since it moved all its elements to goku

  //test2
  std:: vector<int> goku1 {5,9,3,4,5,6};
  std:: vector<int> vegeta1 {1,2,3};
  gogeta(goku1, vegeta1);

  std:: vector<int> gokuVegeta1 {5,9,3,4,5,6,1,2,3}; //the correct result

  CHECK(goku1 == gokuVegeta1);
  int vegetaSize1 = vegeta1.size();
  CHECK(vegetaSize1 == 0);

  //test2
  std:: vector<int> goku2 {0};
  std:: vector<int> vegeta2 {1,2,3};
  gogeta(goku2, vegeta2);

  std:: vector<int> gokuVegeta2 {0,1,2,3}; //the correct result

  CHECK(goku2 == gokuVegeta2);
  int vegetaSize2 = vegeta2.size();
  CHECK(vegetaSize2 == 0);
}


//Task D
TEST_CASE("Sum of elements of two vectors"){

  //test1
  std:: vector<int> v1{1,2,3};
  std:: vector<int> v2{4,5};
  std:: vector<int> addIndexValues = sumPairWise(v1, v2); 

  std:: vector<int> addIndexValues_Result {5,7,3}; //the correct result

  CHECK(addIndexValues == addIndexValues_Result);


  //test2
  std:: vector<int> v3{1,2,3,6,7,8};
  std:: vector<int> v4{4,5};
  std:: vector<int> addIndexValues1 = sumPairWise(v3, v4); 

  std:: vector<int> addIndexValues_Result1 {5,7,3,6,7,8}; //the correct result

  CHECK(addIndexValues1 == addIndexValues_Result1);
  

  //test3
  std:: vector<int> v5{1,2,3};
  std:: vector<int> v6{4,5,1,3,6,};
  std:: vector<int> addIndexValues2 = sumPairWise(v5, v6);

  std:: vector<int> addIndexValues_Result2 {5,7,4,3,6}; //the correct result

  CHECK(addIndexValues2 == addIndexValues_Result2);
  
}
