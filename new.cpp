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
//Array (frequnce)
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,3,2};
    for(int i=0; i<5; ++i)
    {
        int count=1;
        for(int j=i+1; j<5; ++j)
        {
            if(arr[i]==arr[j])
            {
                count++;
                arr[j]=-1;
            }
        }
        if(arr[i]!=-1)
        {
            cout<<"the freq of "<<arr[i]<<"is"<<count<<endl;
        }
    }
}


  // Online C++ compiler to run C++ program online
//Array (reverse)
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,3,2};
    for(int i=0; i<5/2; ++i)
    {
       int temp;
       temp=arr[i];
       arr[i]=arr[5-i-1];
       arr[5-i-1]=temp;
}
for(int i=0; i<5; ++i)
{
    cout<<arr[i];
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
// Online C++ compiler to run C++ program online
//Array (move-zeros to the end)
#include <iostream>
using namespace std;
int main(){
    int j=0;
    int arr[]={1,2,0,4,0};
    for(int i=0; i<5; ++i)
    {
       if(arr[i]!=0)
       {
           arr[j]=arr[i];
           j++;
       }
    }
for(int i=j; i<5; ++i)
{
    arr[i]=0;
}
for(int i=0; i<5; ++i)
{
    cout<<arr[i];
}
}
// Online C++ compiler to run C++ program online
//srting (balance paratheleses)//return type
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,3,10,20,5};
    int target=30;
    for(int i=0; i<5;++i)
    
    {
        if(arr[i]==target)
        {
            cout<<"yes";
            return 0;
        }
    }
    cout<<"no";
        
    
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
//Array (double missing number)
#include <iostream>
using namespace std;
int main(){
    int j=0;
    int arr[]={10,20,0,4,0};
    for(int i=0; i<5; ++i)
    {
       if(arr[i+1]-arr[i]>1)
       {
           for(int j=arr[i]+1; j<arr[i+1];++j)
           {
               cout<<j<<endl;
           }
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
//===========[STRING]==================
//string (reverse)
 #include <iostream>
using namespace std;
int main() {
 string str="welcome";
 int i=0;
 int j=str.length()-1;
 while(i<=j){
     char temp=str[i];
     str[i]=str[j];
     str[j]=temp;
     i++;
     j--;
 }
 cout<<str;
 return 0;
}
// Online C++ compiler to run C++ program online
//string revers with (function)
#include <iostream>
using namespace std;

 string reverse(string str){
     int i=0;
     int j=str .length()-1;
     while(i<=j){
         char temp=str[i];
         str[i]=str[j];
         str[j]=temp;
         i++;
         j--;
     }
     return str;
 }
 int main() {
     string st="welcome";
     cout<<reverse(st);
     return 0;
}
// Online C++ compiler to run C++ program online
//srting (balance paratheleses)BASIC
#include <iostream>
using namespace std;
void bp(string str)
{
    cout<<"bp";
}
int main(){
    string str="({[]})";
    bp (str);
}
  // Online C++ compiler to run C++ program online
//srting (balance paratheleses)
#include <iostream>
using namespace std;
void bp(string str)
{
    int circle=0;
    int square=0;
    int curly=0;
    for(int i=0; i<str.length(); ++i)
{
char c=str[i];
if(c=='(') circle++;
else if (c=='[') square++;
else if (c=='{') curly++;
else if (c==')') circle--;
else if (c==']') square--;
else if (c=='}') curly--;
}
if(circle==0 && square==0 && curly==0)
{
    cout<<"balanced";
}
else
{
    cout<<"not";
}
}
int main(){
    string str="({[]})";
    bp (str);
}
  // Online C++ compiler to run C++ program online
//srting (balance paratheleses)//not balanced
#include <iostream>
using namespace std;
void bp(string str)
{
    int circle=0;
    int square=0;
    int curly=0;
    for(int i=0; i<str.length(); ++i)
{
char c=str[i];
if(c=='(') circle++;
else if (c=='[') square++;
else if (c=='{') curly++;
else if (c==')') circle--;
else if (c==']') square--;
else if (c=='}') curly--;
}
if(circle==0 && square==0 && curly==0)
{
    cout<<"balanced";
}
else
{
    cout<<"not";
}
}
int main(){
    string str="({[]}";
    bp (str);
}
// Online C++ compiler to run C++ program online
//srting (balance paratheleses)//return type
#include <iostream>
using namespace std;
bool bp(string str)
{
    int circle=0;
    int square=0;
    int curly=0;
    for(int i=0; i<str.length(); ++i)
{
char c=str[i];
if(c=='(') circle++;
else if (c=='[') square++;
else if (c=='{') curly++;
else if (c==')') circle--;
else if (c==']') square--;
else if (c=='}') curly--;
}
if(circle==0 && square==0 && curly==0) return true;
else return false;

}
int main(){
    string str="({[]})";
     if (bp (str))
     {
         cout<<"bp";
     }
     else {
         cout<<"not";
     }
}
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  string str1="now";
  string str2="won";
  
  if(str1.length()!=str2.length()){
      cout<<"not an anagram";
      return 0;
  }
  for(int i=0; i<str1.length(); i++){
  bool found=false;
      for(int j=0; j<str2.length(); ++j){
          if(str1[i]==str2[j]){
              str2[j]='#';
              found=true;
              break;
          }
          
      }
  if(!found){
      cout<<"not anagram";
      return 0;
  }
  }
  cout<<"anagram";
  return 0;
  
}
///=====================STRUCTURE===========================
// Online C++ compiler to run C++ program online
///structure
#include <iostream>
using namespace std;
struct info{
    string name="shivani";
    int roll=123;
    char section='c';
    float marks=50.23;
};
int main() {
    info a;
    cout<<a.name<<endl;
    cout<<a.roll<<endl;
    cout<<a.section;
}
// Online C++ compiler to run C++ program online
///structure
#include <iostream>
using namespace std;
struct info{
    string name;
    int roll;
    char section;
    float marks;
};
int main() {
    info a;
    a.roll=12;
    info b;
    b.name="shivani";
    info c;
    c.section='d';
    info d;
    d.marks=50.43;
    
 
    cout<<c.section<<endl;
    cout<<a.roll<<endl;
     cout<<b.name<<endl;
     cout<<d.marks;
}
  
///=====================POINTER====================
///pointer
#include <iostream>
using namespace std;
int main(){
    int a =12;
    int *ptr=&a;
    cout<<*ptr;     //REMOVE THE*SO PRINT ADDRESSS
}
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
struct info{
    int roll=123;
    char section='c';
}k;
int main() {
  int a=10;
  int *ptr=&a;
  cout<<ptr;
  cout<<*ptr;
}
  // Online C++ compiler to run C++ program online
//pointer of structure
#include <iostream>
using namespace std;
struct info{
    int roll=123;
    char section='d';
    string name="shivani";
    
};
int main() {
    //pointer of structure
    info fv;
    info *sv=&fv;
    fv.roll=420;
    fv.section='d';
    cout<<sv->roll;
     cout<<sv->name;
 
}
// Online C++ compiler to run C++ program online
//self refrencial  structure
#include <iostream>
using namespace std;
struct info{
    int roll;
    char section;
    string name;
    struct info *link;
};
int main() {
    //pointer of structure
    info fv;
    info sv;
    fv.link=NULL;
    fv.roll=420;
    fv.name="shivani";
    fv.section='d';
    
    sv.link=NULL;
    sv.roll=424;
    sv.name="ram";
    sv.section='f';
    
    fv.link=&sv;
    cout<<fv.link->roll<<endl;
    cout<<fv.link->section<<endl;  
    cout<<fv.link->name<<endl;
 
 
    sv.link=&fv;
    cout<<sv.link->roll<<endl;
    cout<<sv.link->section<<endl;  
    cout<<sv.link->name;
}

// Online C++ compiler to run C++ program online
//self refrencial structure
#include <iostream>
using namespace std;
struct info
{
    int roll;
    char section;
    struct info *link;
};

int main() {
    info a;
    info b;
    info c;
    
    a.link=NULL;
    a.roll=234;
    a.section='a';
    b.link=NULL;
    b.roll=345;
    b.section='f';
    c.link=NULL;
    c.roll=348;
    c.section='d';
    a.link=&b;
    b.link=&c;
    cout<<b.link->roll<<endl;
   cout<<b.link->section<<endl;
    cout<<a.link->roll<<endl;
    cout<<a.link->section;
   
   
}
  ////======================[JAVA]======================
  import java.util.Scanner;

public class NEW
{
    public static void main(String arg[])
{
    Scanner obj = new Scanner(System.in);
    String name;
    int age;
    char bg;
       System.out.println("enter name,age,bg");
       name=obj.nextLine();
       age=Integer.parseInt(obj.nextLine());
       bg=obj.nextLine().charAt(0);

       System.out.println(name+"  "+age+"  "+bg);

}
}
  

 

      
      
  
  


