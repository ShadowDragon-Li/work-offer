#include<iostream>
#include<string>
#include<vector>
using namespace std;
void RectRever(vector<vector<int>> &arr);
int main()
{
	vector<vector<int>> array;
	vector<int> a = {1,2,3,4};
	array.push_back(a);
	a.clear();
	a = { 5,6,7,8 };
	array.push_back(a);
	a.clear();
	a = { 9,10,11,12 };
	array.push_back(a);
	a.clear();

	for (int i=0;i < array.size();i++)
	{
		for (int j=0;j<array[i].size();j++)
		{
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	RectRever(array);
	getchar();

}

void RectRever(vector<vector<int>> &arr)
{
	if (arr.size() == 0)
	{
		return;
	}
	for (int i=0;i<arr[0].size();i++)
	{
		cout << arr[0][i] << " ";
	}
	vector<vector<int>>::iterator it = arr.begin();
	arr.erase(it);
	if (arr.size() == 0)
	{
		return;
	}
	vector<vector<int>> temp;
	vector<int> a_temp;
	for (int m=0;m<arr[0].size();m++)
	{
		for (int n=0;n<arr.size();n++)
		{
		//	cout<< "n=" << n << endl;
		//	cout << "m=" << m << endl;
		//	cout << "arr[0].size()-m-1=" << arr[0].size() - m - 1 << endl;

			a_temp.push_back(arr[n][arr[0].size()-m-1]);
		}
		temp.push_back(a_temp);
		a_temp.clear();
	}



	if (arr.empty() == true)
	{
		return;
	}
	else
	{
		RectRever(temp);
	}


}