#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;
int num1;
void student_login(){
}
void admin_login(){
  string passcode;
  cout<<"Welcome to CKS library management system\n Enter your Admin Pass code"<<endl;
  cin>>passcode;
  if(passcode=="hclv@library"){
    cout<<"Welcome Aministrator\n Choose action from the list below\n 1.View books in stock\n 2. View borrowed books\n 3. Approve book borrowing"<<endl;
  }else{cout<<"wrong credentials, try again later";}
}
void borrow_book(){
}
void check_books(){
}
void return_book(){
}
int main(){
  cout<<"Welcome to CKS library management system\n Enter the corresponding number to proceed\n 1.Admin Login\n2.Student Login\n3.Exit"<<endl;
cin>>num1;
 switch(num1){
   case 1: admin_login(); break;
   case 2: student_login(); break;
   default: break;
}

