
#include<bits/stdc++.h>
using namespace std;

struct User{
    int userID;
    int balance;
};

void sortUsersByID(User users[],int n){
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-1-i;j++){
            if (users[j].userID>users[j+1].userID){
                User temp=users[j];
                users[j]=users[j+1];
                users[j+1]=temp;
         }
      }
    }
}

int binarySearch(User users[],int n,int userID) {
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(users[mid].userID==userID) {
            return mid;
        } 
        else if(users[mid].userID<userID) {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}

void bubbleSortByBalance(User users[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(users[j].balance > users[j + 1].balance || 
               (users[j].balance==users[j+1].balance&& users[j].userID>users[j + 1].userID)){
                User temp=users[j];
                users[j]=users[j+1];
                users[j+1]=temp;
         }
      }
    }
}

int main(){
    int N,T;
    cin>>N;
    User users[N];
    for(int i=0;i<N;i++){
        cin>>users[i].userID >> users[i].balance;
    }
    sortUsersByID(users,N);
    cin>>T;
    for(int i=0;i<T;i++) {
        int from_userID, to_userID, amount;
        cin>>from_userID>>to_userID>>amount;
        int fromIndex = binarySearch(users, N, from_userID);
        int toIndex = binarySearch(users, N, to_userID);
        if(fromIndex!=-1&&toIndex!=-1&&users[fromIndex].balance>= amount){
            users[fromIndex].balance -= amount;
            users[toIndex].balance += amount;
            cout<<"Success"<<endl;
        }
        else{
            cout<<"Failure"<<endl;
        }
    }
    cout<<endl;
    bubbleSortByBalance(users,N);
    for(int i=0;i<N;i++) {
        cout<<users[i].userID<<" "<<users[i].balance<<endl;
    }

    return 0;
}
