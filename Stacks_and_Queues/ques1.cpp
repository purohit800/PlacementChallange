class MyQueue
{
public:
    stack<int> s1, s2;
    MyQueue()
    {
    }
    void push(int x)
    {
        s1.push(x);
    }

    int pop()
    {
        while (!s1.empty())
        {
            int y = s1.top();
            s1.pop();
            s2.push(y);
        }
        int a = s2.top();
        s2.pop();
        while (!s2.empty())
        {
            int y = s2.top();
            s2.pop();
            s1.push(y);
        }
        return a;
    }

    int peek()
    {
        while (!s1.empty())
        {
            int y = s1.top();
            s1.pop();
            s2.push(y);
        }
        int a = s2.top();
        while (!s2.empty())
        {
            int y = s2.top();
            s2.pop();
            s1.push(y);
        }
        return a;
    }

    bool empty()
    {
        return s1.empty();
    }
};