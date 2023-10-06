#include <bits/stdc++.h>
using namespace std;

class Array{
private:
// values
int size;
int * A;
int index= 0;
public:
// constructor
Array(int x)
{
    size=x;
    A= new int [x];

}
// insertion 
void insert (int x){
if (index>=size)
{
    cout<<"overflow";

}
else{
    A[index]=x;
    index++;
    }
}
//display  
void display(){
    if (index==0){
        cout<<"array is empty";
return;
                 }
    for(int i=0;i<index;i++)
{
    cout<<A[i]<<" ";
}
    cout<< endl;          }

// linear search
void linearSearch(int x)
{
   for(int i=0;i<index;i++){
    if (A[i]==x)
    {
        cout<<"element is found at index";
        return;

    }
    cout<<"element is not found";
    
   }
}
// sort array
void sortArray()
{
    sort(A,A+index);
}
// binary search
void binarySearch()
{
    this->sortArray();
}
};
int main()
{
    Array arr(10);
    arr.display();
}