#include "head.h"

void main() 
 {
    int n,i;
    char* a, *b;

	srand(time(NULL));

	cout<<"Input n"<<endl;
	cin>>n;
	
	a = new char[n];

	for (i=0; i<n; i++)
	{
		a[i] = rand()%256;
	}

	cout<<endl;

	for (i=0; i<n; i++)
	{
		cout<<a[i]<<"   "<<"\t";
	}

	cout<<endl;

	bubble(a, n);

	cout<<endl<<"Sorted array:"<<endl;

	for (i=0; i<n; i++)
	{
		cout<<a[i]<<"\t";
	}

	cout<<endl;



	cout<<endl<<"Mergesort"<<endl;

	b = new char[n];

	for (i=0; i<n; i++)
	{
		b[i] = rand()%256;
	}

	cout<<endl;

	for (i=0; i<n; i++)
	{
		cout<<b[i]<<"   "<<"\t";
	}

	MergeSort(b,1,n);

	cout<<endl;

	for (i=0; i<n; i++)
	{
		cout<<b[i]<<"   "<<"\t";
	}

	cout<<endl;

	//delete[]a;
	//delete[]b;
	system("pause");
 }