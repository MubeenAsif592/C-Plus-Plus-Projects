#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class User{
	private:
		string name, password;
		const string dbfile = "data_base.txt";
	public:
	    
		void registration(){
			cout<<"== Registration process =="<<endl;
			cout<<"Enter name ";
			cin>>name;
			cout<<"Enter password ";
			cin>>password;
			
			ofstream file;
			file.open(dbfile,ios::out | ios::app);
			if(file.is_open()){
				file<<name<<"  "<<password<<endl;
				file.close();
				cout<<"\nRegistration successful "<<endl<<endl;
			}
			else{
				cout<<"Erorr! Could not open the data base "<<endl;
			}
		}
		bool login(){
			cout<<"== Login Process =="<<endl;
			cout<<"Enter name ";
			cin>>name;
			cout<<"Enter password ";
			cin>>password;
			
			ifstream file(dbfile);
			string n,p;
			bool found = false;
			if(file.is_open()){
			while(file>>n>>p){
				if(n == name && p == password){
					found = true;
					break;
				}
			}
			file.close();
		}
		if(found){
			cout<<"\nLogin successful "<<endl<<endl;
			return true;
		}
		else{
			cout<<"Invalid Username & password "<<endl;
			return false;
		}
		}
		void show(){
			ifstream file(dbfile);
			string n,p;
			int count = 0; 
			if(file.is_open()){
				while(file>>n>>p){
					cout<<"User-"<<++count<<" "<<n<<" | password "<<p;
					cout<<endl;
				}
				file.close();
				if(count ==0){
					cout<<"No user found"<<endl;
				}	
			}
			else{
				cout<<"Could not open data base"<<endl;
			}
		}
};
int main(){
	User u;
	int choice;
	do{
		cout<<"=== Registration & Login Program ==="<<endl;
		cout<<"1. Registration \n2. Login \n3. Show \n4. Exit"<<endl;
		cout<<"Enter choice ";
		cin>>choice;
		switch(choice){
			case 1:
				u.registration();
				break;
			case 2:
				u.login();
				break;
			case 3:
				u.show();
				break;
			case 4:
				cout<<"Exit"<<endl;
				break;
			default:
				cout<<"Invalid choice "<<endl;
		}
		string option;
		cout<<"Do you want to perform another action type y | Y ";
		cin>>option;
		cout<<endl;
	}while(choice !=4);
}
