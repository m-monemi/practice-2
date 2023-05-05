#include <iostream>
 using namespace std;
 struct myArray{
   static const int MAX = 1000;
   double a[MAX];
   int n;
   myArray(const double *ma, const int k){
     n = k;
     if( k > MAX )
       n = MAX ;
     for(int i=0 ; i < n ; i++)
       a[i] = ma[i];
   }
   void print(void) const{
     cout << " n = " << n << endl;
     for(int i = 0; i < n; i++)
       cout << "a[" << i << "] = "
         << a[i] << endl;
   }
 };
 void f1(const myArray& );
 int main(){
   double x[]{10, 12, 34, 54};
   myArray d(x, sizeof(x)/sizeof(double));
   f1(d);
   return 0;
 }
 void f1(const myArray& a){
   a.print();
 }