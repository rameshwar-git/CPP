#include<iostream>

void selectionShort(int *arr,int len){
    for(int i=1;i<len;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1]=key;
    }
}
void display(int *arr,int len){
    for(int i=0;i<len;i++)
    std::cout<<arr[i]<<" ";
}
int main(){
    int arr[]={5,2,4,6,1,3};
    int len=6;
    selectionShort(arr,len);
    display(arr,len);
}