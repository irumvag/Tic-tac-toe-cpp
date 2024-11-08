#include<iostream>
#include<cstdlib>
using namespace std;

class playing{
    private:
    int a[9]={0},b[9]={0};
    char c[9]={};
    int result=0;
    public:
    int p2,p1;
    int s,end=10;
    string name1,name2;
    void players();
    void input1();
    void input2();
    void update();
    void check()
    {
        result++;
        if((c[0]==c[1]&&c[1]==c[2]&&c[2]=='X')||(c[3]==c[4]&&c[4]==c[5]&&c[5]=='X')||(c[6]==c[7]&&c[7]==c[8]&&c[8]=='X')||(c[2]==c[4]&&c[4]==c[6]&&c[6]=='X')||(c[0]==c[4]&&c[4]==c[8]&&c[8]=='X')||(c[0]==c[3]&&c[3]==c[6]&&c[6]=='X')||(c[1]==c[4]&&c[4]==c[7]&&c[7]=='X')||(c[2]==c[5]&&c[5]==c[8]&&c[8]=='X'))
        {
            cout<<"\n\n\n    The winner is "<<name1<<" ,You won!!!";
            end=1;
        }
        else if((c[0]==c[1]&&c[1]==c[2]&&c[2]=='O')||(c[3]==c[4]&&c[4]==c[5]&&c[5]=='O')||(c[6]==c[7]&&c[7]==c[8]&&c[8]=='O')||(c[2]==c[4]&&c[4]==c[6]&&c[6]=='O')||(c[0]==c[4]&&c[4]==c[8]&&c[8]=='O')||(c[0]==c[3]&&c[3]==c[6]&&c[6]=='O')||(c[1]==c[4]&&c[4]==c[7]&&c[7]=='O')||(c[2]==c[5]&&c[5]==c[8]&&c[8]=='O'))
        {
            cout<<"\n\n\n    The winner is "<<name2<<" ,You won!!!";
            end=1;
        }
        else if(result==9)
        {
            cout<<"Draw happened repeat!! \n We start\n";
            for(int d=0;d<9;d++)
            {
            a[d]=0;
            b[d]=0;
            c[d]='\0';
            }
        } 
    }
    void restart(){
        for(int d=0;d<9;d++)
        {
            a[d]=0;
            b[d]=0;
            c[d]='\0';
        }
    }
};
void playing::update(){
        cout<<"  +-----------------+\n";
            cout<<"  |     |     |     |\n";
            for(int j=0;j<3;j++)
                {
                    cout<<"  |  ";
                    if(c[j]=='\0')
                    {
                        cout<<j+1;
                    }
                    else
                    {
                        cout<<c[j];
                    }
                }
                cout<<"  |\n";
                cout<<"  |     |     |     |\n";
                cout<<"  +-----------------+\n";
                cout<<"  |     |     |     |\n";
            for(int i=3;i<6;i++){
                cout<<"  |  ";
                if(c[i]=='\0')
                    {
                        cout<<i+1;
                    }
                    else
                    {
                        cout<<c[i];
                    }
                }
            cout<<"  |\n";
            cout<<"  |     |     |     |\n";
            cout<<"  +-----------------+\n";
            cout<<"  |     |     |     |\n";
            for(int i=6;i<9;i++){
                cout<<"  |  ";
                if(c[i]=='\0')
                    {
                        cout<<i+1;
                    }
                    else
                    {
                        cout<<c[i];
                    }
                }
            cout<<"  |\n";
            cout<<"  |     |     |     |\n";
            cout<<"  +-----------------+\n\n";
}   
void playing::players(){
    cout<<"\nYou are most welcome in TIC-TAC-TOE Game!!!!\n\n";
    update();
    cout<<"Enter first player name:";
    cin>>name1;
    cout<<"\nEnter Second player name:";
    cin>>name2;
    system("clear");
    cout<<"\nYou are most welcome in TIC-TAC-TOE Game!!!!\n\n";
    cout<<"   First player  is represented by 'X':"<<name1<<endl;
    cout<<"   Second player is represented by 'O':"<<name2<<endl<<endl;
    update();
    }
void playing::input1(){
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
void playing::input2(){
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
int main(){
    char k;
    playing p1;
    p1.players();
    for(int i=1;i<10000;i++){
    p1.input1();
    p1.update();
    p1.check();
    if(p1.end==1){
        cout<<"\nWould you like to play again!(Y/N):";
        cin>>k;
        if(k=='n'||k=='N'){
            break;
        }
        else
        {
            p1.restart();
            p1.end=10;
            p1.update();
            continue;
        }
    }
    p1.input2();
    p1.update();
    p1.check();
    if(p1.end==1){
        cout<<"\nWould you like to play again!(Y/N):";
        cin>>k;
        if(k=='n'||k=='N'){
            break;
        }
        else
        {
            p1.restart();
            p1.end=10;
            p1.update();
            continue;
        }
    }
    }
    cout<<"\n\n Thanks you for playing Tic Tac Toe!!, you are welcome again!\n\n";
    return 0;
}