#include<iostream>
#include "dList.h"
using namespace std;
int main(){
    dList l;
    char choice;
    do{  
        cout<<"----DOUBLY LINKED LIST---"<<endl;;
        cout<<"MENU"<<endl;
        cout<<"1. Insert at head "<<endl;
        cout<<"2.Insert at tail "<<endl;
        cout<<"3. Search an element"<<endl;
        cout<<"4. Reverse Linked List: "<<endl;
        cout<<"5.Delete at head "<<endl;
        cout<<"6.Delete from tail "<<endl;
        cout<<"7.Delete as specified " <<endl;
        cout<<"8.Insert element at specified location "<<endl;
        cout<<"9.Middle element of list"<<endl;
        
        int option;
        cout<<"\nEnter ur option: ";  
        cin>>option;

        switch(option){
            case 1: cout<<"insert at head: ";
                    l.insertAtHead(5);
                    l.insertAtHead(6);
                    l.insertAtHead(7);
                    l.insertAtHead(8);
                    l.display();  
                    break;
            case 2: cout<<"insert at tail(insert 10): ";
                    l.insertAtTail(10);
                    l.display();
                    break;
            case 3: cout<<"\nsearching element(search=6): ";
                    l.search(6);
                    break;
            case 4: cout<<"reverse: ";
                     l.reverse();
                     l.display();
                     break;
            case 5: cout<<"\ndelete at head: ";
                    l.deleteAtHead();
                    l.display();
                    break;
            case 6: cout<<"delete from tail: ";
                    l.deleteAtTail();
                    l.display();
                    break;
            case 7: cout<<"delete as specified(delete=7) : ";
                    l.deleteAsSpecified(7);
                    l.display();
                    break;
            case 8: cout<<"Insert element at specified location(el=20, loc=3): ";
                    l.insertAsSpecified(20,3);
                    l.display();
                    break;
         
            case 9 : cout<<"Middle element in list: ";
                     l.middleOfList();
                 
        }

        cout<<"\n Do you want to continue (Y/N): ";
        cin>>choice;
        if(choice=='n' || choice=='N'){
              cout<<"EXITING PROGRAM !!!!";
              break;
        }
        if(choice!='N' && choice!='n' && choice!='Y' && choice!='y') {
            cout<<choice<<" is an INVALID INPUT !!!\n program exiting automatically";
            break;
        }
    }while(choice=='y' || choice=='Y');

return 0;
}







