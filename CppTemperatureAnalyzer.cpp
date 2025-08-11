#include <iostream>
using namespace std;
int test (int *a, int , int* , int* );

int main()
{
	int n,under_ave;
	cin>>n;
	int heat,day,un_ave;
	int *a= new int [n];
	if(!a)
	  return 0;
	else
	  for (int i=0 ; i<n ; i++)
        cin>>a[i];
    un_ave=test(a,n,&heat, &day);
	delete []a;
	cout<<un_ave<<endl<<heat<<endl<<day;
}
int test (int *a, int n, int * heat, int * day)
{
	*heat=a[0];
	for (int i=0 ; i<n ; i++)
	{
		if (a[i]>*heat)
		{
		*heat=a[i];
		*day= i+1;
	    }
	}
	int sum=0 , under_ave=0;
	for (int i=0 ; i<n ; i++)
	    sum+=a[i];
	for(int i=0;i<n;i++)    
	    if(a[i]<sum/n)
	        under_ave++;
	return under_ave;
}
