// Author : nishj347 @github
#include <iostream>
#include<string>
using namespace std;
class person{
    private:
    string name;
    int age;
    string country;
    public:
    void setname(string n){
        name=n;
 }
void setage(int a){
     age=a;
 }
void setcountry(string c){
     country=c;
 }
 
 string getname(){
     return name;
 }
 int getage(){
     return age;
 }
 string getcountry(){
     return country;
 }
 void show(){
     cout<<"name is:"<<name<<endl;
     cout<<"age is :"<<age<<endl;
     cout<<"country is: "<<country<<endl;
 }
};
int main(){
    person person;
    person.setname("ayushi kulshrestha"); 
    person.setage(12);
    person.setcountry("morena"); 

    person.show();
    return 0;
}
