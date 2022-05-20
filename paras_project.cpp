#include<iostream>
using namespace std;
class Election
{
public:int id,vote,Paras=0,PRS=0,www=0,PPP=0,spoit=0;
void result_vote();
void choose_vote();
Election()
{
    cout<<"\t\t\t\t\t*******Wel Come To The simple Electrical voting system********"<<endl;
    cout<<"\t\t\t\t\tThe candidates are:"<<endl;
    cout<<"\t\t\t\t\t*****************************************************************"<<endl;
    cout<<"\t\t\t\t\t               ||1. Paras              ||2.PRS          "<<endl<<"\t\t\t\t\t               ||3. www                ||4.PPP"<<endl;
    cout<<"\t\t\t\t\t*****************************************************************"<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t ======Please Choose a candidate====== \n\t\t\t\t\tPress 1for Paras\t\t\t\t\tPress 2 PRS"<<endl;
    cout<<"\t\t\t\t\tPress 3 for www \t\t\t\t\tPress 4 for PPP"<<endl<<endl;
    
    

}
};
void Election::choose_vote(void)
{
    cout<<" Please Choose a candidate=";
cin>>vote;
switch (vote)
{
case 1:
    { cout<<"You give your vote to Paras"<<endl<<endl<<endl;
Paras++;}
    break;
    case 2:{
    cout<<"You give your vote to PRS"<<endl<<endl<<endl;
PRS++;}
    break;
    case 3:{
    cout<<"You give your vote to www"<<endl<<endl<<endl;
www++;}
    break;
    case 4:{
    cout<<"You give your vote to PPP"<<endl<<endl<<endl;
PPP++;}
    break;


default:
cout<<"Your vote is spoit"<<endl<<endl<<endl;
spoit++;
    break;
}
}void Election::result_vote(void){
   cout<<"\t\t\t\t\t||=====vote result=====||"<<endl;

cout<<"\t\t\t\t\t 1.Paras got="<<Paras<<"votes"<<endl;
cout<<"\t\t\t\t\t 2.PRS got="<<PRS<<"votes"<<endl;
cout<<"\t\t\t\t\t 3.www got="<<www<<"votes"<<endl;
cout<<"\t\t\t\t\t 4.PPP got="<<PPP<<"votes"<<endl;
cout<<"\t\t\t\t\t 5.spoit vote="<<spoit<<"votes"<<endl;
}

int main()
{
int id,vote,choice;
      do{ cout<<"Please enter your id=";
       
    cin>>id;
      Election E1;
    if(id>100&&id<=200){
   E1.choose_vote();}
    else{
    cout<<"Your id is not find here."<<endl;
    }
 cout<<"Anyone else for vote"<<"\n1. for yes\n 2 for no";
 cin>>choice;
 if(choice==1){
     cout<<"OK "<<endl;}
     else{
         E1.result_vote();
     }}
  while((id>100&&id<=200)&&(choice==1));
return 0;
}