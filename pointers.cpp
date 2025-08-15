#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;
// void sizer(int arr[]){
//     // cout<<"size of arr outside main func  "<<sizeof(arr)<<endl;
//     arr[0]=20;
//     arr[3]=1;
//     cout<<arr<<endl;
//     cout<<&arr<<endl; //new pointer created
// }

// void solve(int *p){
//     *p=*p+10;
// }

// void util(int *p){
//     // p=p+1;
//     *p=*p+1;
// }

// void solved(int **ptr){
//     // ptr=ptr+1;
//     // *ptr=*ptr+1;
//     **ptr=**ptr+1;
// }

// void sol(int value){ //copy create hoti h original me change nhi hota h
//     value++;
// }
// void sol(int & val){  //original me changw hota h
//     val++;
// }

// void sol(int * val){
//     *val=*val+1;
// }

// void simon(int *p){ //pass by value
//     p=p+1;
// }
// void simon(int *&p){ //pass by reference
//     p=p+1;
// }

// bool isprime(int n){
//     if(n<=1)return false;
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// int prime(int n){
//     int c=0;
//     for(int i=0;i<n;i++){
//         if(isprime(i)){
//             c++;
//         }
//     }
//     return c;
// }

// bool isprime(int n){
//     if(n<=1)return false;
//     int sqrtN=sqrt(n);
//     for(int i=2;i<=sqrtN;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// int prime(int n){
//     int c=0;
//     for(int i=0;i<n;i++){
//         if(isprime(i)){
//             c++;
//         }
//     }
//     return c;
// }

// int prime(int n){
//     if(n<=1)return 0;
//     vector<bool>primes(n,true);
//     primes[0]=primes[1]=false;
//     int ans=0;
//     for(int i=2;i<n;i++){
//         if(primes[i]){
//             ans++;
//             int j=2*i;
//             while(j<n){
//                 primes[j]=false;
//                 j+=i;
//             }
//         }
//     }
//     return ans;
// }

// int hcf(int a,int b){
//     if(a==0)return 0;
//     if(b==0)return 0;
//     int ans=0;
//     while(a>0 && b>0){
//         if(a>b){
//             a=a-b;
//         }
//         else{
//             b=b-a;
//         }
//     }
//     return a==0?b:a;
// }

// int power(int a,int b){
//     int ans=1;
//     while(b>0){
//         if(b&1){  //odd
//             ans=ans*a;
//         }
//         a=a*a;
//         b>>=1;
//     }
//     return ans;
// }

// vector<bool> prime(int n){
//     vector<bool>primes(n+1,true);
//     primes[0]=primes[1]=false;
//     for(int i=2;i*i<=n;i++){  // 2. i<=n
//         if(primes[i]){
//             int j=i*i;  // 1. 2*i
//             while(j<n){
//                 primes[j]=false;
//                 j+=i;
//             }
//         }
//     }
//     return primes;
// }
// vector<bool>sieve(int l,int r){
//     vector<bool>segsieve=prime(sqrt(r));
//     vector<bool>baseprimes;
//     for(int i=0;i<segsieve.size();i++){
//         if(segsieve[i]){
//             baseprimes.push_back(i);
//         }
//     }
//     vector<bool>sieves(r-l+1,true);
//     if(l==1 ||l==0){
//         sieves[0]=false;
//     }
//     for(auto primal:baseprimes){
//         int first_mul=(l/primal)*primal;
//         if(first_mul<l){
//             first_mul+=primal;
//         }
//         int j=max(first_mul,primal*primal);
//         while(j<=r){
//             sieves[j-l]=false;
//             j+=primal;
//         }
//     }
//     return sieves;
// }
int main(){
    // int a=4;
    // int b=4;
    // cout<<a<<endl;
    // cout<<&a<<endl;
    // cout<<&b<<endl;

    // int a=5;
    // int *p=&a;
    // cout<<*p<<endl; //value stored at that address
    // cout<<p<<endl; //address of a stored in pointer
    // cout<<&a<<endl; //adress of a
    // cout<<&p; //address of p

    // int a=6;
    // int *ptr=&a;
    // cout<<sizeof(ptr)<<endl;
    // char ch='a';
    // char *c=&ch;
    // cout<<sizeof(c)<<endl;
    // double b=1.09;
    // double *bdr=&b;
    // cout<<sizeof(bdr)<<endl;

    // int *ptr ;
    // cout<<*ptr;  //random value 

    // int *p=0;
    // int *ptr=nullptr;
    // cout<<"ans is "<<p<<endl;
    // cout<<"ans is "<<ptr;

    // int a=10;
    // int *ptr=&a;
    // int *dusraptr=ptr;
    // cout<<ptr<<endl;
    // cout<<*dusraptr<<endl;
    // cout<<dusraptr;

    // int arr[]={12,114,1,18};
    // cout<<arr<<endl; //address of 0th element
    // cout<<arr[0]<<endl;
    // cout<<&arr<<endl;//address of 0th element
    // cout<<&arr[1]<<endl; //address of 1st element

    // int *p=arr;
    // // int *p=&arr[0];
    // cout<<p<<endl; //address of arr[0] stored in p
    // cout<<&p<<endl; 
    // cout<<*arr<<endl;
    // cout<<*arr+1<<endl;
    // cout<<*(arr+1)<<endl;
    // cout<<*(arr+2)<<endl;
    // cout<<*(arr)+2<<endl;

    // int i=0;
    // cout<<arr[i]<<endl;
    // cout<<i[arr]<<endl;
    // cout<<*(arr+i)<<endl;

    // arr=arr+2; //nt work
    // int *p=arr;
    // p=p+2; //work
    // cout<<*p;

    // int arr[10];
    // cout<<sizeof(arr)<<endl;
    // int *p=arr;
    // cout<<sizeof(p)<<endl;
    // cout<<sizeof(*p)<<endl;

    // char ch[10]={'b','a','b','b','a','r'};
    // char *c=ch;
    // // char *c=&ch[0];
    // cout<<c<<endl; //entire string
    // cout<<&ch<<endl;
    // cout<<ch[0]<<endl;
    // cout<<&c<<endl;
    // cout<<*c<<endl;
    // cout<<ch<<endl;

    // char name[9]="sherbano";
    // char *c=&name[0];
    // cout<<name<<endl;
    // cout<<&name<<endl;
    // cout<<*(name+3)<<endl;
    // cout<<c<<endl;
    // cout<<&c<<endl;
    // cout<<*(c+3)<<endl;
    // cout<<"ans is "<<c+2<<endl;
    // cout<<"answer "<<c+8<<endl;

    // char ch='k';
    // char *cptr=&ch;
    // cout<<cptr<<endl;

    // char name[10]="utkarsh";
    // cout<<name<<endl;
    // char *c="vijay";
    // cout<<c<<endl;

    // int arr[10]={1,2,3,4};
    // cout<<"size of arr in main func  "<<sizeof(arr)<<endl;
    // cout<<arr<<endl;
    // cout<<&arr<<endl;
    // sizer(arr);
    // for(int i=0;i<10;i++){
    //     cout<<arr[i]<<" ";
    // }cout<<endl;

    // int a=5;
    // int *p=&a;
    // solve(p);
    // cout<<a<<endl;

    // int a=5;
    // int *p=&a;
    // int **q=&p;
    // cout<<&a<<endl;
    // cout<<&p<<endl;
    // cout<<q<<endl;
    // cout<<&q<<endl;
    // cout<<*q<<endl;
    // cout<<**q<<endl;

    // int a=5;
    // int *p=&a;
    // cout<<"before"<<endl;
    // cout<<a<<endl;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // util(p);
    // cout<<"after"<<endl;
    // cout<<a<<endl;
    // cout<<p<<endl; //pass by value
    // cout<<*p<<endl;

    // int x=12;
    // int *a=&x;
    // int **b=&a;
    // cout<<a<<endl;
    // solved(b);
    // cout<<x<<endl;
    // // cout<<a<<endl;

    // // reference variable - same memory loc diff name
    // int a=5;
    // int &b=a;
    // cout<<a<<endl;
    // cout<<b<<endl;
    // a++;
    // cout<<a<<endl;
    // cout<<b<<endl;
    // b++;
    // cout<<a<<endl;
    // cout<<b<<endl;

    // int a=3;
    // sol(a);
    // cout<<a<<endl;

    // int a=3;
    // sol(&a);
    // cout<<a<<endl;

    // int a=9;
    // int *p=&a;
    // cout<<p<<endl;
    // simon(p);
    // cout<<p<<endl;

    // basic maths 
    // prime no.

    // // 1.naive approach  TC o(n2)
    // int n=10;
    // cout<<prime(n);

    // // sqrt method TC o(nroot n)
    // int n=10;
    // cout<<prime(n);

    // // 3.seive erathosthenes TC  o(n*log(log n))
    // int n=21;
    // cout<<prime(n);

    // // hcf of two no.
    // int a=72;
    // int b=24;
    // cout<<hcf(a,b);

    // power exponential
    // int a=2;
    // int b=4;
    // cout<<power(a,b);

    // // optimizing sieve of erathosthenes
    // vector<bool>val=prime(25);
    // for(int i=0;i<=25;i++){
    //     if(val[i]){
    //         cout<<i<<" ";
    //     }
    // }

    // segmented sieve
    // int l=110;
    // int r=130;
    // vector<bool>val=sieve(l,r);
    // for(int i=0;i<val.size();i++){
    //     if(val[i]){
    //         cout<<i+l<<" ";
    //     }
    // }

    // ques of pointer 
    // float f=10.5;
    // float p=2.5;
    // float *ptr=&f;
    // (*ptr)++;
    // *ptr=p;
    // cout<<*ptr<<" "<<f<<" "<<p;

    // int a=7;
    // int b=17;
    // int *c=&b;
    // *c=7;
    // cout<<a<<" "<<b<<endl;

    // int *ptr=0;
    // int a=10;
    // *ptr=a;
    // cout<<*ptr<<endl;

    // char ch='a';  //a=97+1=b
    // char *ptr=&ch;
    // ch++;
    // cout<<*ptr<<endl;

    // int a[]={1,2,3,4};
    // int *p=a++;
    // cout<<*p<<endl;

    // int a[]={4,5,6,7};
    // int *p=(a+1);
    // cout<<*a+9;

    // char b[]="xyz";
    // char*p=&b[0];
    // cout<<p<<endl;

    // char s[]="hello";
    // char *p=s;
    // cout<<s[0]<<" "<<p[0];

    // char arr[20];
    // int i;
    // for(int i=0;i<10;i++){
    //     *(arr+i)=65+i;
    // }
    // *(arr+i)='\0';
    // cout<<arr;

    char *ptr;
    char s[]="abcdefg";
    ptr=s;
    ptr+=5;
    cout<<ptr;


















    return 0;
}