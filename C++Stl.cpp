#include<iostream>
#include<conio.h>
#include<algorithm>
#include<set>
#include<map>
#include<string>
#include<vector>

using namespace std;

void SETS()
{
	set <int> S;
	S.insert(5);
	S.insert(4);
	S.insert(-1);
	S.insert(-3);

	for (auto i = S.begin(); i != S.end(); i++)
	{
		cout << *i<<endl;
	}
	auto it = S.find(4);

		if (it == S.end())
		{
			cout << "not present\n";
		}
		else
		{
			cout << "present\n";
			cout << *it << endl;
		}

}

void MAP()
{
	map<int,int> M;
	M.insert(pair<int, int >(1, 40));
	M.insert(pair<int, int>(2, 20));
	M.insert(pair<int, int >(5, 50));
	M.insert(pair<int, int>(7, 70));
	cout << "Displaying Maps";
	map<int, int>::iterator itr;
	for (itr = M.begin() ; itr!=M.end() ; itr++)
	{
		cout << "\t" << itr->first << endl;
		cout << "\t" << itr->second << endl;
	}

	map<char, int >cnt;
	cout << "Playing with maps and strings / hashing \t ";
	string x = "Kushagra Tandon";
		for (char c : x)
		{	
			cnt[c]++;

		}
		cout  << cnt['a'] << " " << cnt['t']<<endl;


}


void VECTOR()
{
	vector <int> vec1 {1,2,3,2,6,5};
	int val = 3;
	vec1.erase(remove(vec1.begin(), vec1.end(), val), vec1.end());
	cout<< vec1.size()<<endl;
	// now , we have the vector now we can find the number and erase it if it exist in the array using erase method
	/*leet code - https://leetcode.com/problems/search-insert-position/ */ 
	vector <int> arr = {1,2,3,2,6,5};
	sort(arr.begin(), arr.end());
	if (binary_search(arr.begin(), arr.end(), 5))
		cout << "5 exists in vector";
	else
		cout << "5 does not exist";

	cout << endl;
}

void Search()
{
	vector <int> search = {4,5,6,7,0,1,2};
	int target = 0;
	auto x = find(search.begin(), search.end(), target);
	if (x!=search.end())
	{
		cout << "Found at " << (x-search.begin()) << endl;
	}
	else
	{
		cout << "-1";
	}
}



int main()
{
	//SETS();
	//MAP();
	//VECTOR();
	Search();
	return 0;
}