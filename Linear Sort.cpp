#include <iostream.h>
#include <conio.h>
#define MAX 10

class linsort{
    int arr[MAX],n;
    public:
    void getdata();
    void showdata();
    void sortLogic();
};

void linsort :: getdata(){
    cout<<"How many elements you require : ";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
}

void linsort :: showdata(){
    cout<<"\n--Display--\n";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"   ";
}

void linsort :: sortLogic(){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                cout<<"\n arr[i] = "<<arr[i]<<"  arr[j] = "<<arr[j];
            }
        }
        cout<<endl;
    }
}

void main(){
    clrscr();
    cout<<"\n*****Linear Sort*****\n";
    linsort obj;
    obj.getdata();
    obj.sortLogic();
    obj.showdata();
    getch();
}
