// MUCH SORTING SUCH SPEED
#include <iostream>
#include <vector>
using namespace std;

// PRINT ARRAY
void print(vector<int> v, int n)
{
	for (int i = 0; i < n; i++)
		cout << v[i] << " ";
	cout << endl;
}

// BUBBLE SORT
void bubbleSort(vector<int> v, int n)
{
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (v[i] < v[j])
			{
				int temp = v[i];
				v[i] = v[j]; v[j] = temp;
			}
		}
	}
	print(v, n);
}

// INSERTION SORT 1
void insertionsort1(vector<int> v, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (v[j - 1] > v[j])
			{
				int right = v[j]; int left = v[j - 1];
				v[j] = left;
				print(v, n);
				v[j - 1] = right;
			}
		}
	}
	print(v, n);
}

// INSERTION SORT 2
void insertionsort2(vector<int> v, int n)
{
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (v[i] < v[j])
			{
				int temp = v[i];
				v[i] = v[j]; v[j] = temp;
			}
		}
		print(v, n);
	}
}

// QUICK SORT
void quickSort(int arr[], int left, int right) 
{
	int i = left, j = right;
	int tmp;
	int pivot = arr[(left + right) / 2];

	/* partition */
	while (i <= j) 
	{
		while (arr[i] < pivot)
			i++;
		while (arr[j] > pivot)
			j--;
		if (i <= j) 
		{
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}
	};

	/* recursion */
	if (left < j)
		quickSort(arr, left, j);
	if (i < right)
		quickSort(arr, i, right);
}

// BINARY SEARCH ( RETURNS INDEX POSITION )
int binarySearch(int array[], int size, int searchValue)
{
	int low = 0; int high = size - 1; int mid;

	while (low <= high)
	{
		mid = (low + high) / 2;

		if (searchValue == array[mid])
			return mid;
		else if (searchValue > array[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}

	return -1;
}

int main()
{
	int n; cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	
	insertionsort1(v, n);
	insertionsort2(v, n);
	
	system("pause");
	return 0;
}