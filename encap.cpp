#include<iostream>
using namespace std;



class teacher{
public:
    char teacher1 ='a';
private:
    char teacher2 = 'b';
protected:
    char teacher3 = 'c';

};
class student:public teacher{
public:
    int student1 = 456 ;
private:
    int student2 = 444;
protected:
    int student3 = 333;
};
class guardian:public teacher,public student{
public:
    int guardian1 = 111 ;
private:
    int guardian2 = 222;
protected:
    int guardian3 = 999;
};
int main(){
    guardian obj;
    cout << obj.teacher1 << endl;
    //cout << obj.student2 << endl;
    //cout << obj.student3 << endl;

    return 0;
}
