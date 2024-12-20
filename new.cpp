// Online C++ compiler to run C++ program online
/*#include <iostream>
using namespace std;
int main() {
    for(int i=1;i<=5; ++i)
    {
        for(int j=1; j<=i; ++j)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
#include <iostream>
using namespace std;
int main() {
    for(int i=1;i<=5; ++i)
    {
        for(int j=1; j<=i; ++j)
        {
            cout<<i;
        }
        cout<<endl;
    }
}*/

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int arr[]={1,2,1,3,2,1};
 for(int i=0; i<6; ++i) 
 {
     bool dup=false;
     for(int j=i+1; j<6; ++j)
     {
         if(arr[i]==arr[j] && arr[i]!=-1)
         {
             arr[j]=-1;
             dup=true;
         }
     
     if(!dup  && arr[i]!=-1)
     {
         cout<<arr[i];
     }
 }
}

c:\Users\HP-PC\Desktop\c++ programs\mini max array.txt
