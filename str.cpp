// A bit of work with string. Old c++ string was much boring than this. python's string is simpple.

#include <stdio.h>
#include <string>
#include <cstring>
#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <algorithm>

using namespace std;

string cmp1, cmp2;
string newstr = "";

void revstring(string strn);
void split(string num)
{
	int len = num.length();
	if(len % 2 == 0)
	{
		cmp1 = num.substr(0,len/2);
		cmp2 = num.substr(len/2,len/2);
	}
	else
	{
		cmp1 = num.substr(0,(len - 1)/2);
		cmp2 = num.substr((len + 1)/2,(len - 1)/2);
	}
	revstring(cmp2);
}

int ifpalindorme(string st1,string st2)
{
	if(st1.compare(st2) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void revstring(string strn)
{
	for (std::string::reverse_iterator rit=strn.rbegin(); rit!=strn.rend(); ++rit)
    {
    	newstr = newstr + *rit; 
    }
}

int main()
{
	int a = 120021;
	stringstream ss;
	ss << a;
	string num = ss.str();
//	cout << num << endl;
	split(num);
	if(ifpalindorme(cmp1, newstr) == true)
	{
		cout << num << endl;
	}
}
