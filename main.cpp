#include <iostream>
// This will make build fail and trigger Jenkins as a result of SCM push - so will see failure
// Another line to trigger SCM build on Jenkins
int main(){
  std::cout << "Hello world, hello Jenkins";
  }
