// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;
template <class type>
struct deque{
    type c[100];
    int n;
    deque(){
        n = 0;
    };
    bool empty(){
        if(n == 0) return true;
        return false;
    }
    int size(){
        return n;
    }
    
    type front(){
        return c[0];
    }
    type back(){
        return c[n - 1];
    }
    
    void push_front(type x){
         n++;
        for(int i = 1;i < n;i++){
            c[i] = c[i - 1];
        }
        c[0] = x;
    }
    void push_back(type x){
        c[n] = x;
        n++;
    }
    
    void pop_back(){
        n--;
    }
    
    void pop_front(){
         for(int i = 0;i < n - 1;i++){
            c[i] = c[i+1];
        }
        n--;
    }
};
int main() {
    deque <int> deq;
    deq.push_front(15);
    deq.push_front(30);
    deq.push_back(27);
    deq.push_back(16);
    while(!deq.empty()){
        cout << deq.front() << " ";
        deq.pop_front();
    }
    return 0;
}
