/*************************
 * This program inputs a list of integers, and sorts them indecending order
 * 
 * 
 * 10/19/2020
 * ********************/

#include <iostream>

using namespace std;

void SelectionSortDescendTrace(int numbers [], int numElements) {
   int j , indexLargest, temp;
   
   
   for(int i = 0; i < numElements - 1; i++){
      indexLargest = i;
      for(j = i +1; j < numElements; ++j){
       if(numbers[j] > numbers[indexLargest]){
        indexLargest = j;  
       }
      }
      
      temp = numbers[i];
      numbers[i] = numbers[indexLargest];
      numbers[indexLargest] = temp;
      /*
      //Testing feature to see what happens after each iteration of outter loop
      
      for(int x = 0; x < numElements; ++x){
         cout << numbers[x] << " ";  
      }
      cout << endl;
      */
   }
}


int main(int argc, char* argv[]) {
   //Declares variables and the array
   int input, i = 0;
   int numElements = 0;
   int numbers[10];
   
   //Get first input
   cin >> input;
   //Do while loop with exit event of an input of -1
   do{
      numbers[i] = input;
      i++;
      numElements++;
      cin >> input;
   } while (input != -1);
   
   
   //Calls the void function
   SelectionSortDescendTrace( numbers, numElements);
   
  return 0;
}
