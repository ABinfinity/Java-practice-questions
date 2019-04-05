#include<bits/stdc++.h>
using namespace std;

int SumBitDifference(int arr[], int n)
{
	int ans = 0;

	for (int i = 0; i < 32; ++i)
	{
		/* code */
		int count = 0;
		for (int j = 0; j < n; ++j)
		{
			/* code */
			if ((arr[j] & (1<<i)))
			{
				/* code */
				count++;

			}
		}
		ans += (count * (n-count)*2);
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	int arr[] = {1,3,5};
	int n = sizeof arr / sizeof arr[0];
	// cout<< sizeof arr<<endl;
	// cout<<sizeof arr[0]<<endl;
	// cout<<n<< endl;
	cout << SumBitDifference(arr, n) << endl;
	return 0;
}