#include<iostream>
using namespace std;
class  List{
    private: // ADT
    int item[10]; // static array as per question
    int size;
    public:
    List(){ //constructor as per class name
        size=0; // for grabage value
    }
    int getLength(){
        return size;
    }
    void add(int value){
        if(size<10){
            item[size]=value;
            size++;
        }
        else{
            cout<<"List is full"<<endl;
        }
    }
    void deleteElement(int position){
        if(position>=1 && position <=size){
            for(int i = position-1; i < size -1; i++){
                item[i] = item[i+1];
            }
            size--;
        }
    }
    void display(){
        for(int i=0;i<size;i++){
            cout<<item[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    List list;
    list.add(10);
    list.add(20);
    list.add(30);
    cout<<"Length of the list: "<<list.getLength()<<endl;
    list.display();
    list.deleteElement(2);
    cout<<"\nAfter deleting element at index 2:"<<endl;
    list.display();
    cout<<"Length of the list after deletion: "<<list.getLength()<<endl;
    return 0;
}