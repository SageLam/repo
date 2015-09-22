#in<iostream>
#in<vector>
using namespace std;
int main() {
	int *time = new int [3];
	int *number = new int [3];
	int num[20], n;
	cin>>n;
	for(int i = 0; i < n; i++)
		cin>>num[i];
	for(int i = 0; i < n; i++)
	{
		int j;
		for(j = 0; j < 3; j++)
		{
			if(number[j] == num[i])
			{
				time[j]++;
				break;
			}
		}
		if(j == 3)
		for(j = 0; j < 3; j++)
		{
			if(time[j] == 0)
			{
				time[j] = 1;
				number[j] = num[i];
				break;
			}
		}
		if(j == 3)
		{
			for(j = 0; j < 3; j++)
				time[j]--;
		}
	}
	for(int i = 0; i < 3; i++)
	{
		cout<<number[i]<<'\t';
	}
	cout<<endl;
}
