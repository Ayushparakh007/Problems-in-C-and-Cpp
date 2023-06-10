// #include <iostream>
// using namespace std;
// template <class T>

// class vector{
//     public:
//     T *arr;
//     int size;
//      vector( int siz){
//         size=siz;
//         arr = new T[size];

//      }
//      T dotProduct(vector &v){
//         T x=0;
//         for(int i=0;i<size;i++){
//         x=+this->arr[i]*v.arr[i];
//         }
//         return x;
//      }

// };
// int main(){
// vector<int> v1(3);
// v1.arr[0]=5;
// v1.arr[1]=9;
// v1.arr[2]=7;
// vector<int> v2(3);
// v2.arr[0]=8;
// v2.arr[1]=4;
// v2.arr[2]=3;
// int a= v1.dotProduct(v2);
// cout<<a;
// return 0;
// }
#include <iostream>
using namespace std;
template< class T1, class T2>
class vector{
    public:
    T1 data1;
    T2 data2;
    vector(T1 x,T2 y){
        data1=x;
        data2=y;
    }
    void display(){
        cout<<data1<<data2;
    }
};
int main(){
    vector< int,float> obj(1,1.5);
    obj.display();
    return 0;
}
