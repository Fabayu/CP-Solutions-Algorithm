#include <iostream>

using namespace std;
int partition(int a[],int s,int e)
{
    int i=s;
    int pivot = a[e];
     for(int j=s;j<=e-1;j++){
        if(a[j] < pivot){
            swap(a[i],a[j]);
            i++;
        }
     }
     swap(a[i],a[e]);
    return i;
}
void quick(int a[],int s,int e)
{
    if(s>=e)return;
    
    int p = partition(a,s,e);
    quick(a,s,p-1);
    quick(a,p+1,e);
}
int main()
{
    int a[]={1,6,2,9,10,8,0};
    quick(a,0,6);
    for(int i=0;i<7;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
