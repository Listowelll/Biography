#include <bits/stdc++.h>
using namespace std;

class Biography{
private:
    int age;
    string name;     //initializing the attributes of the biography class
    string Birthplace;
    string fav_anime;
public:
    Biography(int age1,string name1,string birthplace,string anime){
        age=age1;
        name=name1;
        Birthplace=birthplace;
        fav_anime=anime;
    }
    string describe(){
        cout<<"Your name is "<<name<<" and you were born at "<<Birthplace<<". You're "<<age<<" years old and your favorite anime is "<<fav_anime<<"\n";
    }
};

int main(){
    Biography Listo(20,"Listowel Anim","Konongo", "Demon slayer");
    Listo.describe();
}
