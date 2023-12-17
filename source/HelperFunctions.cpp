#include <string>
#include <vector>


std::vector<std::string> getInputValues(std::string input){
  std::string tempString;
  std::vector<std::string> finalRes;  
  for (int i = 0; i < input.size();i++){
    if (input[i] == ' '){
      finalRes.push_back(tempString);
      tempString.clear();
    }
    tempString += input[i];
  }
  return finalRes;
}
