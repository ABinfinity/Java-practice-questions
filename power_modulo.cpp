#include <bits/stdc++.h>
using namespace std;

int powermod(int number, int power, int modulo )
{
	int res1 =1;
	while(power>0)
	{
		res1 *= number;
		power --;
	}

	int res2 = 0;
	res2 = res1 % modulo;

	return res2;
}

int main(int argc, char const *argv[])
{
	// int number=2, power=5,modulo=13;
	cout<<"Output is "<<powermod(2,5,13)<<endl;

	return 0;
}