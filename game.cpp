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
    char a[9];
    char b[9];
    public:
    int s;
    char p;
    string name1,name2;
    void players(){
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
    void input1(char p1){
        cout<<"\n\n  Enter position #"<<name1<<" you want to play from 1-9:";
        cin>>p;
        for(int c=0;c<9;c++)
        {
            if((p1==a[c]||p1==b[c])){
                cout<<"Value is already allocated try again:";
                break;
            }
            else
            {
             s=int(p1);
             a[s-1]=p1;
             cout<<"continue....";   
             break;
            }
        }
    }
    void input2(char p2){
        cout<<"\n\n  Enter position #"<<name2<<"you want to play from 1-9:";
        cin>>p;
        for(int c=0;c<9;c++)
        {
            if(p2==b[c]||p2==a[c]){
                cout<<"Value is already allocated try again:";
                break;
            }
            else
            {
             s=int(p2);
             b[s-1]=p2;
             cout<<"continue....";   
             break;
            }
        }
    }
    void update(){

    }
};
int main(){
    int count[9];
    char x='X',o='O';
    char p;
    playing p1;
    p1.players();
    for(int i=1;i<10000;i++){
    p1.input1(p);
    p1.update();
    p1.input2(p);
    p1.update();
    }
    return 0;
}