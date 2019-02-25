
#include<bits/stdc++.h>

using namespace std;

struct Person {

    string name;
    int age;
    float salary;

};

void display(Person p)
{
    cout <<  p . name << " ";
    cout << p.age << " ";
    cout << p.salary << endl;
}

bool Ref(Person p, Person q)
{
    return p.salary > q.salary;
}

int main()
{

    int p;

    Person bill[100];

    int n;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        //getline(cin , bill[i].name);

        cout << "Enter name: ";
        cin >> bill[i].name;
        cout << endl;

        cout << "Enter age: ";
        cin >> bill[i].age;
        cout << endl;
        cout << "Enter salary: ";
        cin >> bill[i].salary;
        cout << endl;
    }

        sort(bill, bill+n,Ref);

    for(int i = 0; i < n; i++)
    {
        display(bill[i]);
    }



    return 0;
}
