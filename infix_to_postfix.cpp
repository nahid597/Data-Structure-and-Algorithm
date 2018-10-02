#include<bits/stdc++.h>
using namespace std;

stack < char > st;

int precidence(char c)
{
     if(c == '/' || c == '*')
        return 3;
    else if(c == '+' || c == '-')
        return 2;

        else
            return 1;
}


void infixtoprefix(string s)
{


    string outputstring = "";

    //st.push('N');

    int sizeofstring = s.size();

    for(int i = 0; i < sizeofstring; i++)
    {
        if(s[i] >= '0' && s[i] <= '9' )
        {
            outputstring += s[i];

        }


        else if (s[i] == '(')
        {
            st.push(s[i]);

        }

        else if(s[i] == ')')
        {
            while( !st.empty() && st.top() != '(')
            {
                char topofstack = st.top();
                st.pop();
                outputstring += topofstack;
            }

            if(st.top() == '(')
            {
                char topofstack = st.top();
                st.pop();
            }
        }

        else
        {
            while( !st.empty() && precidence(s[i]) <= precidence(st.top()))
            {

                char topofstack = st.top();
                st.pop();
                outputstring += topofstack;
            }

            st.push(s[i]);

        }


    }

    while( !st.empty())
        {
            char topofstack = st.top();
                st.pop();
                outputstring += topofstack;
        }

    cout << outputstring << endl;


}

int main()
{

    freopen("uva727.txt","r", stdin);
    freopen("uva727out.txt","w",stdout);

    int t;
    string s ;
    char tmp[5];

    cin >> t;
    getchar();
    getchar();

    while(t--)
    {
        s = "";
        char ch;

        while(1)
        {
            ch = getchar();
            if(ch=='\n')
                break;
            getchar();

            s += ch;
        }

        infixtoprefix(s);
        cout << endl;
    }


    return 0;
}
