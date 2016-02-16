# hello-world-C-
Simple repo to print "Hello World" written in C++ for Jenkins to compile 

Branch from after successfully do a "git -version" from Jenkins and now want to compile a simple C++ program and needing to change main.cpp as the version compiles on Centos7 using g++. This is the version on Linix:

#include <iostream>
int main() {
  std::cout << "Hello world, hello Jenkins";
}

This fails compilation via Git:

[workspace] $ /bin/sh -xe /tmp/hudson5918637054326595325.sh
+ g++ main.cpp -o helloworld
main.cpp:1:10: error: #include expects "FILENAME" or <FILENAME>
 #include iostream
          ^
main.cpp: In function ‘int main()’:
main.cpp:3:3: error: ‘cout’ is not a member of ‘std’
   std::cout << "Hello world, hello Jenkins";
   ^
Build step 'Execute shell' marked build as failure
Finished: FAILURE
