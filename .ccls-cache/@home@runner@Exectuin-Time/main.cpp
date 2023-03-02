#include <iostream>
#include <chrono>
using namespace std;
void myFunction(){
  cout << "Hello!" << endl;
  for (int i = 0; i < 100000000; i++){
    int j = i * i;
  }
}
int main(){
  auto start = chrono::high_resolution_clock::now();
  auto start_time = chrono::system_clock::to_time_t(chrono::high_resolution_clock::now());
  myFunction();
  auto end = chrono::high_resolution_clock::now();
  auto end_time = chrono::system_clock::to_time_t(chrono::high_resolution_clock::now());
  auto duration = chrono::duration_cast<chrono::microseconds>(end - start).count();
  cout << "Function duration: " << duration << " microseconds" << endl;
  return 0;
}