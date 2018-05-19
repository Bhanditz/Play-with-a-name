#include <iostream>
#include <string.h>
#include <vector>
#include <sstream>

using namespace std;

class StudentName
{
  string name;
  public:
  StudentName()
  {
    cout<<"Enter student name:";
    getline(cin, name);
  }

void print()
{
    vector<string> list;
    stringstream ss(name);
    string temp;
    while(ss >> temp){
        list.push_back(temp);
    }
    for(int i = 0; i < list.size() || i < 3; i++){
        if(i > list.size() - 1){
            cout << i + 1 << ") " << list[list.size() - 1] << endl;
        } else {
            cout << i + 1 << ") " << list[i] << endl;
        }
    }
}

bool replace(int x,int y){
    vector<string> list;
    stringstream ss(name);
    string temp;
    while(ss >> temp){
        list.push_back(temp);
    }
    if(x > list.size() || y > list.size() || y <= 0 || x <= 0) return false;
    temp = list[x - 1];
    list[x - 1] = list[y - 1];
    list[y - 1] = temp;
    temp = "";
    for(int i = 0; i < list.size(); i++){
        temp += list[i] + " ";
    }
    name = temp;
    return true;
}

};

int main()
{
  StudentName stud;

  stud.replace(1,2);
  stud.print();
}
