// Online C++ compiler to run C++ program online
//goto label
#include <iostream>
using namespace std;
int main() {
     cout<<"shivani";
     cout<<endl;
       goto label;
     cout<<"bhavna";
      label:
     cout<<"arti"<<endl;
     
     cout<<"ram";
}
// Online C++ compiler to run C++ program online
// switch from(int type)
  #include <iostream>
  using namespace std;
  int main() {
    int op=3;
    switch (op)
    {
        case 1:cout<<"orange";
     break;
         case 2:cout<<"apple";
        break;
        case 3:cout<<"mango";
       break;
     default:cout<<"invalid input";
   }
     
}
// (char tpye)
#include <iostream>
using namespace std;
int main() {
    char op='b';
    switch (op)
    {
        case 'a':cout<<"orange";
        break;
        case 'b':cout<<"apple";
        break;
         case 'c':cout<<"mango";
        break;
       default:cout<<"invalid input";
   }
 }

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
//================[ARRAY]========================
  // Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int arr[5];
  cout<<"enter 5 values of array";
   for(int i=0; i<5; ++i)
  {
      cin>>arr[i];
  }
       
  for (int i=0; i<5; ++i)
 {
   cout<<arr[i];
 }
 cout<<arr[8];
      
   }
   //array
#include <iostream>
using namespace std;
int main() {
   int arr[5]={1,2,3,4,5};
  cout<<"enter 5 values of array";
  arr[0]=arr[3]+arr[4];
  for(int i=0; i<5; ++i)
  {
      cout<<arr[i];
  }
      
   }
   //array (mutation)
#include <iostream>
using namespace std;
int main() {
   int arr[5]={1,2,3,4,5};
  cout<<"enter mutation values of array";
 
  for(int i=0; i<5; ++i)
  {
  if(arr[i]!=4)
  {
      cout<<arr[i]<<"\t";
  }
  }
      
   }
   //array (shift)
#include <iostream>
using namespace std;
int main() {
   int arr[5]={1,2,3,4,5};
   int j=0;
  cout<<"enter shift values of array";
 
  for(int i=0; i<5; ++i)
  {
  if(arr[i]!=3)
  {
      arr[j]=arr[i];
      j++;
  }
  }
   for(int i=0; i<j; ++i)
  {
      cout<<arr[i]<<"\t";
  }
  }

//array(comparision)
#include <iostream>
using namespace std;
int main() {
    int arr[]={1,2,3,1,1};
    for (int i=0; i<5; ++i)
    {
       for(int j=i+1; j<5; ++j) 
       {
           if(arr[i]==arr[j])
           {
               cout<<arr[i];
           }
       }
    }
    
    
}
// Online C++ compiler to run C++ program online
//array(sum)
#include <iostream>
using namespace std;
int main() {
    int arr[]={1,2,3,4,5};
    int sum=0;
    for (int i=0; i<5; ++i)
    
        {
            sum=sum+arr[i];
        }
        cout<<sum;
    
}
// Online C++ compiler to run C++ program online
//array(maximum)
#include <iostream>
using namespace std;
int main() {
    int arr[]={1,2,3,6,5};
    int max=0;
    for (int i=0; i<5; ++i)
       {
            if(arr[i]>max)
            {
                max=arr[i];
            }
        }
        cout<<max;
    
}
// Online C++ compiler to run C++ program online
//array(minimum)
#include <iostream>
using namespace std;
int main() {
    int arr[]={1,20,3,60,5};
    int min= arr[0];
    for (int i=0; i<5; ++i)
       {
            if(arr[i]<min)
            {
                min=arr[i];
            }
        }
        cout<<min;
    
}
// Online C++ compiler to run C++ program online
//array(duplicate)
#include <iostream>
using namespace std;
int main() {
    int arr[]={1,20,3,60,1,20};
    for (int i=0; i<6; ++i)
       {
            bool dup=false;
    for(int j=i+1; j<6; ++j)
     {
         if(arr[i]==arr[j] && arr[i]!=-1)      
         {
             arr[j]=-1;
             dup=true;
         }
     }
     if(dup)
     {
         cout<<arr[i]<<endl;
     }
        }
        
    
}

// Online C++ compiler to run C++ program online
//=======unique array=========
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
}

// Online C++ compiler to run C++ program online
//==========palindrome=======
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
//========acending desending==========
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
#include <iostream>
using namespace std;
int main() {
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
//target and find indexing(function) 
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

 

      
      
  
  


