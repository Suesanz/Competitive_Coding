#include<bits/stdc++.h>
using namespace std;

//utility function to split the string using a delim .
vector<string> split(const &delim, char delim)
{vector <string> elems;
stringstream ss(s);
string item;
while (getline(ss,item,delim))
   elems.push_back(item);
return elems;

}


