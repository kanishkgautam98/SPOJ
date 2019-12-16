#include<bits/stdc++.h>
using namespace std;

int merge(int * arr, int * temp, int left, int mid, int right){
    int i, j , k;
    int inv_count = 0;
    i = left;
    j = mid;
    k = right;

    while ((i <= mid - 1) && (j <= right)) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
            inv_count = inv_count + (mid - i);
        }
    }

    while (i <= mid - 1)
        temp[k++] = arr[i++];

    while (j <= right)
        temp[k++] = arr[j++];


    for (i = left; i <= right; i++)
        arr[i] = temp[i];

    return inv_count;



}


int mergeSort(int * a,int * temp, int l, int r){
    int mid, invcount = 0;
    if(r > l){
        mid = (l+r)/2;
        invcount += mergeSort(a, temp, l, mid);
        invcount += mergeSort(a, temp, mid+1, r);
        invcount += merge(a,temp,l,mid+1,r);
    }
    return invcount;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int * a = new int [n];
        int * temp = new int [n]{};
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        cout << mergeSort(a,temp,0,n-1) << endl;
        delete [] a;
        delete [] temp;
    }
}