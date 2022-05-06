class MyStack
{
public:
    queue<int> q1, q2;
    MyStack()
    {
    }

    void push(int x)
    {
        q1.push(x);
    }

    int pop()
    {
        while (q1.size() != 1)
        {
            int a = q1.front();
            q1.pop();
            q2.push(a);
        }
        int a = q1.front();
        q1.pop();
        while (!q2.empty())
        {
            int a = q2.front();
            q2.pop();
            q1.push(a);
        }
        return a;
    }

    int top()
    {
        while (q1.size() != 1)
        {
            int a = q1.front();
            q1.pop();
            q2.push(a);
        }
        int a = q1.front();
        q1.pop();
        q2.push(a);
        while (!q2.empty())
        {
            int a = q2.front();
            q2.pop();
            q1.push(a);
        }
        return a;
    }

    bool empty()
    {
        return q1.empty();
    }
};