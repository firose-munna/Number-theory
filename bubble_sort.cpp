#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int a[], int n){
    int check = 1;

    while(check==1){
        check =0;
        for(int i=0; i<n-1; i++){
            if(a[i]>a[i+1]){
                swap(a[i], a[i+1]);
                check =1;
            }
        }
    }
    cout<<"Sorted Array : ";
    for(int j=0; j<n; j++){

        cout<<a[j]<<" ";
    }
}

int main()
{
    int n;

    cout<<"How many Number do you store in the Array : ";
    cin>>n;

    int a[n];

    cout<<"Enter the Array : ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    bubble_sort(a, n);


    return 0;
}
