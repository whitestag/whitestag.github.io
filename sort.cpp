#include<iostream>
using namespace std;

class Sort{
    int n,i,j;
    float data[];

    public:
    Sort(int N){
        n=N;
    }
    void bubbleSort(float data[]){
        float new_data[n];

        for(i=0;i<n;i++)
            new_data[i]=data[i];

        for(i=0;i<n;i++){
            for(j=i;j<n;j++){
                if(new_data[i]>new_data[j+1]){
                    float temp=new_data[i];
                    new_data[i]=new_data[j];
                    new_data[j]=temp;
                }
            }
        }

        for(i=0;i<n;i++)
            cout<<new_data[i]<<"\t";

        /*
        cout<<"\nTop five percentage ";
        for(int i=0;i<n; i++){
            for(int j=0;j<n-1;j++){
                if(List[j]<List[j+1]){
                    float temp = List[j];
                    List[j]=List[j+1];
                    List[j+1]=temp;
                }
            }
        }
        for(int i=0;i<5; i++)
            cout<<List[i]<<" ";
        */
    }
    void selectionSort(float data[]){
        // for(i=0;i<n;i++){
        //     if()
        // }
        cout<<"\nTop five percentage ";
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(List[i]>List[j]){
                    float temp = List[i];
                    List[i]=List[j];
                    List[j]=temp;
                }
            }
        }
        for(int i=0;i<5; i++)
            cout<<List[i]<<" ";
    }
};

int main(){
    int n,ch,i,j=1;

    cout<<"\nHow many elements to sort? ";
    cin>>n;

    float data[n];
    
    for(i=0;i<n;i++)
        cin>>data[i];
    
    cout<<"\nUnsorted data: ";
    for(i=0;i<n;i++)
        cout<<data[i]<<"\t";
    
    cout<<"\n\n";

    Sort s(n);

    while(j){
        cout<<"\n---------Sorting--------\n\n";
        cout<<"\n1. Bubble Sort";
        cout<<"\n2. Selection Sort";
        cout<<"\n3. Exit";
        cout<<"\n\nSelect the operation: ";
        cin>>ch;

        switch(ch){
            case 1: s.bubbleSort(data);
                break;
            case 2: s.selectionSort(data);
                break;
            case 3: j=0;
                break;
            default: cout<<"\nInvalid Option";
        }
    }
    return 0;
}