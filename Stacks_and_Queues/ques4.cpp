#include <bits/stdc++.h>
using namespace std;
class sstack
{
public:
    deque<int> dq;
    void push(int x)
    {
        dq.push_back(x);
    }
    int pop()
    {
        int x = dq.back();
        dq.pop_back();
        return x;
    }
    int size()
    {
        return dq.size();
    }
    bool isEmpty()
    {
        return dq.empty();
    }
};
int main()
{
    sstack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    int a = s1.pop();
    int b = s1.size();
    cout << a << " " << b;
}