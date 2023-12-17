#include <iostream>
#include <string>

using namespace std;

void mainMenu(){
  while (true){
    cout << "> ";
    string action;
    getline(cin, action);
    cout << action << endl;
    
  }
}


int main(int argc, char const *argv[]){
  cout << argv[0] << ' ' << argv[1] << endl;
  mainMenu(); 
  return 0;
}
