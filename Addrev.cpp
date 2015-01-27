//I've solved this problem in spoj.
//Here is the link of the problem : http://www.spoj.com/problems/ADDREV/


#include <stdio.h>
#include <string>
#include <cstring>
#include <sstream>
#include <iostream>
#include <stdlib.h>

using namespace std;

string revstring(string strn)
{
	string newstr = "";
	for (std::string::reverse_iterator rit=strn.rbegin(); rit!=strn.rend(); ++rit)
    {
    	newstr = newstr + *rit; 
    }
    return newstr;
}

int main()
{
	int T, i = 0;
	scanf("%d", &T);
	int result[T];
	while(i <T)
	{
		std::string A,B,nA,C,nB,nC;
		int a,b,c,nc;
		cin >> A >> B ; // taking input as a string
		nA = revstring(A); // making it reverse
		nB = revstring(B);
		a = atoi(nA.c_str());// coverting reverse string to integer
		b = atoi(nB.c_str());
		c = a + b;
		stringstream ss;//here I started to covert the integer to string
		ss << c;
		C = ss.str();//the integer gets converted
		nC = revstring(C);//and it is reversed
		nc = atoi(nC.c_str());//string converted to integer
		result[i] = nc;
		i++;
	}
	for(int j = 0; j < T;j++){printf("%d\n", result[j]);}
}
