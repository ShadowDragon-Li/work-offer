#include<iostream>
#include<string>
#include<vector>
#include<stack>

using namespace std;
bool VerifySquenceOfBST(vector<int> sequence);
int main()
{
	vector<int>pushV = { 4,8,6,12,16,14,10 };
	
	cout << VerifySquenceOfBST(pushV) << endl;
	

	getchar();
	return 0;
}
bool VerifySquenceOfBST(vector<int> sequence) {
	int len = sequence.size();
	vector<int>left_temp;
	vector<int>right_temp;
	if (sequence.empty() == true)
	{
		return false;
	}
	int root = sequence[len - 1];
	cout << "root = " << root << endl;
	int i;
	for (i = 0; i<len - 1; i++)
	{

		if (sequence[i]>root)
		{
			break;
		}
		left_temp.push_back(sequence[i]);
	}
	int j;
	for (j = i; j<len - 1; j++)
	{
		if (sequence[j]<root)
		{
			return false;
		}
		right_temp.push_back(sequence[j]);
	}
	bool left = true;
	if (i>0)
	{
		left = VerifySquenceOfBST(left_temp);
	}
	bool right = true;
	if (j<len - 1)
	{
		right = VerifySquenceOfBST(right_temp);
	}
	return left&&right;
}