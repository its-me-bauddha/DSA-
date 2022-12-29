#include <iostream> 
using namespace std;


void mergeSort(int arr1[],int arr2[],int x ,int y ,int arr3[])
{
        int i ,j,k = 0;

        while(i < x && j < y)
        {
            if(arr1[i] < arr2[j])
            {
                arr3[k] = arr1[i];
                i++;
                k++; 
            }
            else{
                arr3[k]= arr1[j];
                j++;
                k++;
            }
        }

        while(i<x)
        {
            arr3[k] = arr1[i];
                i++;
                k++; 
        }

        while(i<y)
        {
            arr3[k] = arr1[j];
                j++;
                k++; 
        }
        

}

int main (){

int x = 4; int y = 3;

int  arr1[4]= {1,2,5,7};
int arr2[3] = {2,3,5};

int arr3[x+y];
 mergeSort(arr1,arr2,x,y,arr3);



for(int i = 0 ;i < x +y ; i++)
{
    cout << arr3[i] << " ";
}
cout << endl;





}