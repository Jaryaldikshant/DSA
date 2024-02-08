#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int n, int brr[], int m, int ans[])
{

	// int size = n+m;

	int i = 0;
	int j = 0;
	int k = 0;

	while (i < n && j < m)
	{

		if (arr[i] < brr[j])
		{
			ans[k] = arr[i];
			i++;
			k++;
		}
		else
		{
			ans[k] = brr[j];
			j++;
			k++;
		}
	}

	while (i < n)
	{
		ans[k] = arr[i];
		i++;
		k++;
	}

	while (j < m)
	{
		ans[k] = brr[j];
		j++;
		k++;
	}
}

void print(int ans[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << ans[i] << " ";
	}
}

int main()
{

	int arr1[10];
	int arr2[10];

	int ans[100];
	// int s;

	int n;
	cout << "Enter n: ";
	cin >> n;
	int m;
	cout << "Enter m: ";
	cin >> m;

	int size = n + m;

	cout << "Enter Element of an first array: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i];
	}

	cout << "Enter element of 2nd array: ";
	for (int j = 0; j < m; j++)
	{
		cin >> arr2[j];
	}

	merge(arr1, n, arr2, m, ans);
	print(ans, size);

	return 0;
}