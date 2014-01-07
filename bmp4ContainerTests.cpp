// bmp4ContainerTests.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "../bmp4CppLibrary/source/bmp4CppLibrary.h"
#include <vector>

using namespace std;

void vectorTest(){

	//empty vector of ints
	vector<int> first;

	// four ints with value 100
	vector<int> second (4,100);

	// iterating through second
	vector<int> third (second.begin(),second.end());
	
	
	// a copy of third
	vector<int> fourth (third);

	// the iterator constructor can also be used to construct from arrays:
	int myints[] = {16,2,77,29};
	vector<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );

	cout << "The contents of fifth are:";
  
	for (std::vector<int>::iterator it = fifth.begin(); it != fifth.end(); ++it)
	{
	cout << ' ' << *it;
	}
  
	cout << endl;
  
	

}


int _tmain(int argc, _TCHAR* argv[])
{
	checkLibraryLoaded();
	vectorTest();
	
	//return 0;
}

