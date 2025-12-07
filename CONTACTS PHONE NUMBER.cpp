#include<iostream>
using namespace std;
int o=0;
class contacts{
    private:
string name;
string ph_number;
    public:
        void setname(string n){
        name=n;
        }
        void setnumber(string m){
        ph_number=m;
        }
        string getname(){
        return name;
        }
        string getnumber(){
        return ph_number;
        }
        void add_contant(){
        cout<<"Enter persons name: ";
        cin>>name;
        setname(name);
        cout<<"Enter persons phone number: ";

      cin>>ph_number;
        setnumber(ph_number);
        }
        void display_contact(){

        cout<<"Name: "<<getname()<<" | Phone: "<<getnumber()<<endl;

        }

};
void add_contact(contacts c[100]){
string answer;
 do{
        c[o].add_contant();
        o++;
        cout<<"Do you want to add another contact (yes / no) \n";
        cin>>answer;
        if(answer!="yes"){
            cout<<"\n\n\n\n";
        }
    }while(answer=="yes");

}
void display_all(contacts c[100]){

 for(int i=0;i<o;i++){
        c[i].display_contact();
     }
     cout<<"\n\n\n\n";
     }
  void search_contacts(contacts c[100]){
  string y;
  cout<<"enter name to search: ";//serching a phone number by name

     cin>>y;
     int f=0;
    for(int i=0;i<o;i++){

        if(y==c[i].getname()){
            cout<<"Name: "<<c[i].getname()<<" | Phone: "<< c[i].getnumber()<<endl;
          f=1;
          break;
        }
    }
    if(f==0){
        cout<<"contact not found!!! \n";
    }
    cout<<"\n\n\n\n";
  }
  void delete_contact(contacts c[100]){
      string z;
  cout<<"enter name to delete : ";//deleting phone number by name
    cin>>z;
    int r=0;
     for(int g=0;g<o;g++){

        if(z==c[g].getname()){
                c[g].setname("[DELETED]");
                c[g].setnumber("[DELETED]");
                cout<<"contact deleted!\n";
                r=1;
                break;

        }
        }
        if(r==0){
            cout<<"contact not found ";
        }
        cout<<"\n\n\n\n";
  }

int main(){
contacts c[100];
    add_contact(c);
    display_all(c);
    search_contacts(c);
    delete_contact(c);




return 0;
}
/* cout<<"how many contacts are you going to add: ";
int x;
    string y,z;
    cin>> x;

    for(int j=0;j<x;j++){
        c[j].add_contant();
    }

    cout<<"\n\n\n\n";
     for(int i=0;i<x;i++){
        c[i].display_contact();
     }*/

     /* cout<<"\n\n\n\n";
     cout<<"enter name to search: ";//serching a phone number by name

     cin>>y;
     int f=0;
    for(int i=0;i<x;i++){

        if(y==c[i].getname()){
            cout<<"Name: "<<c[i].getname()<<" | Phone: "<< c[i].getnumber()<<endl;
          f=1;
          break;
        }
    }
    if(f==0){
        cout<<"contact not found!!! \n";
    }*/

/*cout<<"\n\n\n\n";
     cout<<"enter name to delete : ";//deleting phone number by name

    cin>>z;
    int r=0;
     for(int g=0;g<x;g++){

        if(z==c[g].getname()){
                c[g].setname("[DELETED]");
                c[g].setnumber("[DELETED]");
                cout<<"contact deleted!\n";
                r=1;
                break;

        }
        }
        if(r==0){
            cout<<"contact not found ";
        }
        cout<<"\n\n\n\n";
     for(int i=0;i<x;i++){
        c[i].display_contact();//after deletion
     }
*/

