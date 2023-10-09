#include <iostream>
using namespace std;

class Libraray
{
private:
    int password;
    string name;
    void page2()
    {
        string username;
        int p;
        while (true)
        {
            cout << "Login Plese" << endl;
            cout << "Enter UserName" << endl;
            cin >> username;
            cout << "Enter Password" << endl;
            cin >> p;
            if (p == password && name == username)
            {
                cout << "Login succesfully" << endl;
                showLibrarayBook();
                break;
            }
            else
            {

                cout << "enter again" << endl;
            }
        }
    }
    void showLibrarayBook()
    {
        // string[] book=["C++","JAVA","Python","JAVASCRIPT","DevOps Engineer"];
        cout << "1.C++" << endl;
        cout << "2.JAVA" << endl;
        cout << "3.Python" << endl;
        cout << "4.DevOps Engineer " << endl;
        cout << "Which you purchase" << endl;
        int choise;
        cin >> choise;
        switch (choise)
        {
        case 1:
            cout << "You Buy C++" << endl;
            cout << "Thanks";
            break;
        case 2:
            cout << "You Buy JAVA" << endl;
            cout << "Thanks";
            break;
        case 3:
            cout << "You Buy Python" << endl;
            cout << "Thanks";
            break;
        case 4:
            cout << "You Buy DevOps Engineer" << endl;
            cout << "Thanks";
            break;
        default:
            cout << "Not have this book" << endl;
            cout << "Thanks";
        }
    }

public:
    void greet()
    {
        cout << "   R.D Engineering College" << endl;
        cout << "         ===========" << endl;
        cout << "Libraray Mangement System" << endl;
        // cout<<"            ==========="<<endl;
    }
    void createUser()
    {
        cout << "Enter Name" << endl;
        cin >> name;
        cout << "Enter password" << endl;
        cin >> password;
        cout << "User Create successfuly" << endl;

        for (int i = 0; i < 10000; i++)
        {
        }

        page2();
    }
};

int main()
{
    Libraray obj1;
    obj1.greet();
    obj1.createUser();
    return 0;
}