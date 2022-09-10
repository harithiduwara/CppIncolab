# How to code C++/C in https://colab.research.google.com ?

Step 1: Write %%writefile FILENAME.cpp in the first line of the code block

	%writefile FILENAME.cpp
	
OR 

	%writefile FILENAME.c

example:
	
	%%writefile constructors.cpp

	#include <iostream>

	using namespace std;

	int main(){
	
  		cout<<"Hello!"<<endl;

  		return 0;
	
	}

Step 2: Code whatever you want in CPP in that block after the %%writefile FILENAME.cpp line and run the block.

Step 3: Check whether the file is created or not by writing and executing the below code segment in a code block

	!ls -l

There will be a file called FILENAME.cpp

Step 4: Now you can execute FILENAME.cpp by writing and executing the below code segment 

	%%shell

	g++ FILENAME.cpp -o output

	./output
	
OR

	%%shell

	g++ FILENAME.c -o output

	./output

