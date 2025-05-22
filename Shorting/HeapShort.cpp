#include<iostream>

using namespace std;
 class HeapShort{
    public:
        void heapshort(int *arr,int n){
            for(int i=n/2;i>=0;i--){
                heapify(arr,n,i);
            }
            for(int i=n-1;i>0;i--){
                int temp=arr[0];
                arr[0]=arr[i];
                arr[i]=temp;
                heapify(arr,i,0);
            }
        }
        void heapify(int *arr,int n, int i){
            int largest=i;
            int l=2*i+1;
            int r=2*i+2;
            if(l<n && arr[l]>arr[largest])
                largest=1;
            if(largest!=l){
                int temp=arr[i];
                arr[i]=arr[largest];
                arr[largest]=temp;
                heapify(arr,n,largest);
            }
        }
        void display(int *arr,int n){
            for(int i=0;i<n;i++)
                cout<<arr[i]<<" ";
        }
 };
 int main(){
    
    int arr[]={9,4,3,8,10,2,5};
    int n=7;
    
    HeapShort h;
    h.display(arr,7);
    h.heapshort(arr,7);
    h.display(arr,7);
 }
