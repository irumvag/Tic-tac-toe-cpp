#include<iostream>
#include<cstdlib>
using namespace std;
void display0()
    {
    cout<<"  +-----------------+\n";
    cout<<"  |     |     |     |\n";
    for(int j=1;j<=3;j++)
        {
            cout<<"  |  "<<j;
        }
        cout<<"  |\n";
        cout<<"  |     |     |     |\n";
        cout<<"  +-----------------+\n";
        cout<<"  |     |     |     |\n";
    for(int i=4;i<=6;i++){
        cout<<"  |  "<<i;
        }
    cout<<"  |\n";
    cout<<"  |     |     |     |\n";
    cout<<"  +-----------------+\n";
    cout<<"  |     |     |     |\n";
    for(int i=7;i<=9;i++){
        cout<<"  |  "<<i;
        }
    cout<<"  |\n";
    cout<<"  |     |     |     |\n";
    cout<<"  +-----------------+\n\n";
    }
class playing{
    private:
    int a[9]={0},b[9]={0};
    char c[9];
    public:
    int p2,p1;
    int s;
    string name1,name2;
    void players();
    void input1(){
        bool t,f;
        int ic;
        cout<<"\n\n  Enter position #"<<name1<<" you want to play from 1-9:";
        cin>>p1;
        if(p1>0&&p1<10)
        {
            t=(a[p1-1]!=0);
            f=(b[p1-1]!=0);
            if(t||f){
                ic=1;
                cout<<"\nThe space is already accupied????\n";
                input1();
            }
            else{
                c[p1-1]='X';
                a[p1-1]=p1;
                cout<<"\nNext:\n"; 
            }
        }
        else{
            cout<<"\nInvalid value!\n";
            input1();
        }
    }
    void input2(){
        bool t,f;
        int ic;
        cout<<"\n\n  Enter position #"<<name2<<" you want to play from 1-9:";
        cin>>p2;
        if(p2>0&&p2<10)
        {
            t=a[p2-1]!=0;
            f=b[p2-1]!=0;
            if(t||f){
                ic=1;
                cout<<"\nThe space is already accupied????\n";
                input1();
            }
            else{
                c[p2-1]='O';
                b[p2-1]=p2;
                cout<<"\nNext:\n"; 
            }
        }
        else{
            cout<<"\nInvalid value!\n";
            input1();
        }
    }
    void update(){
        
    }
};
void playing::players(){
    cout<<"\nYou are most welcome in TIC-TAC-TOE Game!!!!\n\n";
    display0();
    cout<<"Enter first player name:";
    cin>>name1;
    cout<<"\nEnter Second player name:";
    cin>>name2;
    system("clear");
    cout<<"\nYou are most welcome in TIC-TAC-TOE Game!!!!\n\n";
    cout<<"   First player  is represented by 'X':"<<name1<<endl;
    cout<<"   Second player is represented by 'O':"<<name1<<endl<<endl;
    display0();
    }
int main(){
    playing p1;
    p1.players();
    for(int i=1;i<10000;i++){
    p1.input1();
    p1.update();
    p1.input2();
    p1.update();
    }
    return 0;
}