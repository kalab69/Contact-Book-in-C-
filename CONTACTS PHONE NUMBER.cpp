#include<iostream>
using namespace std;
int o=0; // a global variable
class contacts{
    private:
string name;
string ph_number;
    public:
        void setname(string n){  //setter
        name=n;
        }
        void setnumber(string m){
        ph_number=m;
        }
        string getname(){  //getter
        return name;
        }
        string getnumber(){
        return ph_number;
        }
        void add_contant(){  //a method for adding contacts
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
void add_contact(contacts c[100]){ //a function that uses add_contact method and do while foe adding multiple contacts
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
void display_all(contacts c[100]){ //a function that displays all contacts

 for(int i=0;i<o;i++){
        c[i].display_contact();
     }
     cout<<"\n\n\n\n";
     }
  void search_contacts(contacts c[100]){
  string y;
  cout<<"enter name to search: ";//a function that searches a phone number by name

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
  void delete_contact(contacts c[100]){   // a function that deletes a phone number by name
      string z;
  cout<<"enter name to delete : ";
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
  void edit_contact(contacts c[100]){ //a function that edits/updates a contact by searching for its name and changes it
      string n,x,y;
      int p=0;
      cout<<"Enter the name of the contact you want to edit\n";
      cin>>n;
  for(int i=0;i<o;i++){
    if(n==c[i].getname()){
        cout<<"Enter the name you want to change in to\n";
        cin>>x;
        cout<<"Enter the phone number you want it to change in to\n";
        cin>>y;
        c[i].setnumber(y);
        c[i].setname(x);
        p=1;
        cout<<"Edited successfully! \n";
        break;
    }

    }
     if(p==0){
        cout<<"contact could not be found!\n";
  }


  }

int main(){
contacts c[100];
int choise;
do{
   cout<<"========CONTACT BOOK=========\n";
    cout<<"1 Add Phone Number\n";
    cout<<"2 display Phone Numbers\n";
    cout<<"3 Search Phone Number \n";
    cout<<"4 Delete Phone Number\n";
    cout<<"5 Edit phone number\n";
    cout<<"6 Close\n";
    cout<<"  Enter your choice \n";
    cin>>choise;
    while(choise<0||choise>6){
        cout<<"Please enter a number 1-6 \n";
        cin>>choise;
    }
    cout<<"\n\n\n\n";
    switch(choise){ // using switch statment to choose throughout the user choises
    case 1:add_contact(c);
    break;
    case 2: display_all(c);
    break;
    case 3: search_contacts(c);
    break;
    case 4:delete_contact(c);
    break;
    case 5:edit_contact(c);
    }

}while(choise!=6);
cout<<"=====Thank you=====\n";


return 0;
}

