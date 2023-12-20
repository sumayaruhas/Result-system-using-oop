#include<iostream>
using namespace std;

class result
{
    public:
    string name;
    string id;
    int cse , math , phy , che , bio , lang;
    double cgpa;
    void get()
    {
        cout << "ENTER YOUR NAME            :";
        getline(cin , name);
        cout << "ENTER YOUR ID              :";
        cin >> id;
        cout <<"ENTER YOUR PHYSICS MARKS    :";
        cin >>  phy;
        cout <<"ENTER YOUR CSE MARKS        :";
        cin >>  cse;
        cout <<"ENTER YOUR CHEMISTRY MARKS  :";
        cin >>  che;
        cout <<"ENTER YOUR BIOLOGY MARKS    :";
        cin >>  bio;
        cout <<"ENTER YOUR LANGUAGE MARKS   :";
        cin >>  lang;
        cout <<"ENTER YOUR MATHEMATICS MARKS:";
        cin >>  math;
        cin.ignore();
        }
        double grade(int x)
        {
            if(x >= 80)
            {
                return 4.00;
            }else if(x >= 75 && x < 80){
                return 3.75;
            }else if(x >= 70 && x < 75){
                return 3.5;
            }else if(x >= 65 && x < 70){
                return 3.25;
            }else if(x >= 60 && x < 65){
                return 3.00;
            }else if(x >= 55 && x < 60){
                return 2.75;
            }else if(x >= 50 && x < 55){
                return 2.50;
            }else if(x >= 45 && x < 50){
                return 2.25;
            }else if(x >= 40 && x < 45){
                return 2.00;
            }else{
                return 0.00;
            }
        }
        void show()
        {
            cout << "NAME        :" << name << endl;
            cout << "ID          :" << id << endl;
            cout << "PHYSICS     :" << phy << endl;
            cout << "MATHEMATICS :" << math << endl;
            cout << "CHEMISTRY   :" << che << endl;
            cout << "LANGUAGE    :" << lang << endl;
            cout << "BIOLOGY     :" << bio << endl;
            cout << "CSE         :" << cse << endl;
            cgpa = ((grade(phy) * 3) + (grade(cse) * 3) + (grade(che) * 3) + (grade(bio) * 3) + (grade(lang) * 3) + (grade(math) * 3)) / 18;
            cout << "CGPA        :" << cgpa << endl;
        }
};
int main()
{
    int a;
    cout << "ENTER HOW MANY STUDENTS  :";
    cin >> a;
    cin.ignore();
    result r[a];
    for(int i = 0; i < a; i++){
    r[i].get();
    }
    for(int i = 0; i < a; i++){
    r[i].show();
    cout << "//////////////////////" << endl;
    }
   // cout << "//////////////////////" << endl;
    return 0;
}
