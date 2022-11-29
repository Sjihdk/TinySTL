#include<bits/stdc++.h>
#include"util.h"
#include <iostream>
#include"vector.h"
using namespace std;
using namespace placeholders;
using namespace mystl;


int main()
{ 

mystl::vector<int> v={2,7,5};
mystl::vector<int>::iterator it = v.begin();
v.insert(it,*it);
auto it2=it+3;
for(int i=0;i<2;i++){
v.insert(it,*it);
}
cout<<*it;
cout<<*(it+4);
cout<<*it2;
return 0;
}
