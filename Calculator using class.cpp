#include <iostream>
#include <cmath>
using namespace std;
class calculator{
    public:
        double add(double a, double b){
            return a+b;
        }
        double sub(double a, double b){
            return a-b;
        }
        double mul(double a, double b){
            return a*b;
        }
        double divide(double a, double b){
            if(b==0){
                cout<<"Error due to b == 0"<<endl;
                return 0;
            }
            return a /b;
        }
        double sine(double x){
            return sin(x);
        }
        double cosine(double x){
            return cos(x);
        }
        double algorathim(double x){
            if(x<=0){
                cout<<"Error! "<<endl;
            }
            return log10(x);
        }
};
int main(){
    calculator cal;
    int choice;
    double a, b;
    do{
    	
        cout<<"-------Show Menu--------"<<endl;
        cout<<"1. Add "<<endl;
        cout<<"2. Substraction "<<endl;
        cout<<"3. Multiple"<<endl;
        cout<<"4. Divide"<<endl;
        cout<<"5. Sine "<<endl;
        cout<<"6. Cosine"<<endl;
        cout<<"7. Algoritham"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Choose your option ";
        cin>>choice;
        switch(choice){
        case 1:
            cout<<"Enter number 1 ";
            cin>>a;
            cout<<"Enter number 2 ";
            cin>>b;
            cout<<"Result : "<<cal.add(a,b)<<endl;
            break;
        case 2:
            cout<<"Enter number 1 ";
            cin>>a;
            cout<<"Enter number 2 ";
            cin>>b;
            cout<<"Result : "<<cal.sub(a,b)<<endl;
            break;
        case 3:
            cout<<"Enter number 1 ";
            cin>>a;
            cout<<"Enter number 2 ";
            cin>>b;
            cout<<"Result : "<<cal.mul(a,b)<<endl;
            break;
        case 4:
            cout<<"Enter number 1 ";
            cin>>a;
            cout<<"Enter number 2 ";
            cin>>b;
            cout<<"Result : "<<cal.divide(a,b)<<endl;
            break;
        case 5:
            cout<<"Enter number 1 ";
            cin>>a;
            cout<<"Result : "<<cal.sine(a)<<endl;
            break;
        case 6:
            cout<<"Enter number ";
            cin>>a;
            cout<<"Result : "<<cal.cosine(a)<<endl;
            break;
        case 7:
            cout<<"Enter number ";
            cin>>a;
            cout<<"Result : "<<cal.algorathim(a)<<endl;
            break;
        case 0:
            cout<<"Thanks for using calculator !"<<endl;
            break;
        default:
            cout<<"Invalid option! Try again "<<endl;
            
    }
	}
    
    while(choice !=0);
    return 0;
}
