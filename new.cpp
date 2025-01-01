// Online C++ compiler to run C++ program online
#include <iostream>
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
}

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

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
 int arr[]={1,2,1,3,3};
 for(int i=0; i<5/2; ++i)
 {
    if(arr[i]!=arr[5-i-1])
    {
      cout<<"not palin";
      return 0;
    }
     
}
cout<<"pallindrome";
}
========acending desending==========
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    
    int arr[]={1,2,3,4,5};
    for(int i=0; i<4; ++i)
    {
        if(arr[i] >arr[i+1])
        {
             cout<<"no"<<endl;
             return 0;
        }
    }   
    cout<<"asending";
}
int arr[]={1,0,2,3,0};
    for(int i=0; i<4; ++i)
    {
        if(arr[i] >arr[i+1])
        {
             cout<<"no"<<endl;
             return 0;
        }
    }   
    cout<<"asending";
}
//==========missing number=======
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int arr[]={1,3,5,7};
    for(int i=0; i<4; ++i)
    {
        if(arr[i+1]-arr[i]>1)
        {
           // cout<<++arr[i]<<endl;
            //or
        cout<<arr[i]+1<<endl;
        }
    }
}
// Online C++ compiler to run C++ program online
//keeping first occursion
#include <iostream>
using namespace std;
int main() {
   int arr[]={10,20,5,9,10};
   for(int i=0;i<5;++i)
   {
       for(int j=i+1;j<5;++j)
       {
           if(arr[i]==arr[j])
           {
               arr[j]=-1;
           }
       }
   }
   for(int i=0;i<5;++i)
   {
       if(arr[i]!=-1)
       {
           cout<<arr[i]<<endl;
       }
   }
}
// Online C++ compiler to run C++ program online
//remove of 10
#include <iostream>
using namespace std;
int main() {
  int arr[]={10,20,5,9,10};
  int remov=10;
  int j=0;
 
  for(int i=0;i<5;++i)
  {
      if(arr[i]!=remov)
      {
          arr[j]=arr[i];
          j++;
      }
  }
  for(int i=0;i<j;++i)
  {
      cout<<arr[i];
  }
}
// Online C++ compiler to run C++ program online
//target and find indexing 
#include <iostream>
using namespace std;

 int targetsum(int arr[], int n, int target){
     for(int i=0; i<=n; ++i){
         for (int j=i+1; j<=n; ++j){
             if(arr[i]+arr[j]==target){
                 cout<<i<<j<<endl;
             }
         }
     }
     return 0;
 }
 int main() {
     int arr[]={11,3,25,4,17,5};
     int target=30;
     int n=5;
     targetsum(arr,n,target);
}
      
      
  
  


