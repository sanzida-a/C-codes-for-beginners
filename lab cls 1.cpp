#include <stdio.h>
#include<conio.h>
#include<vector>
#include<algorithm>
#include<stack>
#include<queue>
#include<set>
using namespace std;
int main()
{
	int i;
	/*vector<int> v;
	v.push_back(12);
	v.push_back(2);
    v.push_back(15);
    v.push_back(16);

	sort(v.begin(),v.end());
	int len=v.size();
	for(i=0;i<len;i++)

	{
		printf("%d ",v[i]);
	}*/
	/*stack<char> st;
	st.push('b');
	st.push('c');
	st.push('d');
	st.push('f');
	while(1)
	{
		int status=st.empty();
		if(status==1){
			break;
		}
		char tm=st.top();
		printf("%c ",tm);
		st.pop();


    }*/
	set<int> s;
	s.insert(10);
	s.insert(5);
	s.insert(10);
	s.insert(10);
	s.insert(5);
	s.insert(1);
	printf("%d\n",s.size());
	_getch();
	return 0;
}