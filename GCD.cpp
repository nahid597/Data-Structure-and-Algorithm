
#include<bits/stdc++.h>

using namespace std;

class MyClass {


     public:
      int GCD(int a, int b) {

        if(a % b == 0) return b;

        GCD(b, a % b);

    }

};

    int main()
    {

        MyClass ob ;

        int n,result;

        cin >> n;

        int x [n + 1];

        for(int i = 0; i < n; i++) {

           cin >> x[i];

        }

        result = x[0];
        for(int i = 1; i < n ; i++) {

            result =  ob.GCD(result, x[i]);

        }


      cout << result << endl;

        return 0;
    }

