#include<iostream>
using namespace std;
void findavgtime(int p[],int bt[],int n)
{
	int ct[3],tat[3],wt[3],i;
	float totalwt=0;
	float totaltat;
	ct[0]=bt[0];
	cout<<"Completion time of "<<p[0]<<" is "<<ct[0]<<endl;
	for(i=1;i<n;i++)
	{
		ct[i]=bt[i]+ct[i-1];
		cout<<"Completion time of "<<p[i]<<" is "<<ct[i]<<endl;
	}
	for(i=0;i<n;i++)
	{
		tat[i]=ct[i]-p[i];
		cout<<"Total average time of "<<p[i]<<" is "<<tat[i]<<endl;
	}
	for(i=0;i<n;i++)
	{
		wt[i]=tat[i]-bt[i];
	}
	for(i=0;i<n;i++)
	{
		totalwt=totalwt+wt[i];
		cout<<"Wait time of "<<p[i]<<" is "<<totalwt<<endl;
	}
}
int main()
{
	int processes[]={1,2,3};
	int bursttime[]={3,2,6};
	int n=sizeof(processes)/sizeof(processes[0]);
	findavgtime(processes,bursttime,n); 
}
