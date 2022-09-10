# How to code C++/C in https://colab.research.google.com ?

Step 1: Write %%writefile FILENAME.cpp in the firstline of the code block

	%writefile FILENAME.cpp
	
	OR 

	%writefile FILENAME.c

Step 2: Code what every you want in CPP in that block after the %%writefile FILENAME.cpp line.

Step 3: Run the block

Step 4: Check whether the file is created or not by writing and executing the below code segment in a code block

	!ls -l

There will be a file called FILENAME.cpp

Step 5: Now you can execute FILENAME.cpp by writing and executing the below code segment 

	%%shell

	g++ FILENAME.cpp -o output

	./output

	OR

	%%shell

	g++ FILENAME.c -o output

	./output

