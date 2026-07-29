#include<iostream>
using namespace std;
typedef struct sudent{
    string name;
    int age;
    float marks[5];
}ep;
void display(ep s[3]);
void topper(ep s[3]);
int main(){
    string student[3];
    ep studen[3];
    int i;
    int j;
    for(i=0;i<3;i++){
    cout<<"enter name"<<i+1<<endl;
    cin>>studen[i].name;
    cout<<"enter age"<<i+1<<endl;
    cin>>studen[i].age;
    for(j=0;j<5;j++){
        cout<<"enter marks"<<j+1<<endl;
        cin>>studen[i].marks[j];
    }
    }
    display(studen);
    topper(studen);
    return 0;
} 
void display(ep s[3]){
    int i;
    int j;
    for(i=0;i<3;i++){
          cout << "Student " << i+1 << ":" << endl;
        cout << "  Name  : " << s[i].name << endl;   
        cout << "  Age   : " << s[i].age << endl;    
        for(j=0;j<5;j++){
            cout<<"marks : "<<s[i].marks[j]<<endl;
        }
    }
}
void topper(ep s[3]){
    cout<<"....pass/fail status...."<<endl;
    int i;
    int j;
    float total[3];
    float max_per_subject=100;
    float total_limit=max_per_subject*5.0;
    for(i=0;i<3;i++){
        float sum=0;
        for(j=0;j<5;j++){
        sum +=s[i].marks[j];
        }
    total[i]=sum;
    float average=sum/5.0;
    if(sum>250.0){
        cout<<s[i].name<<": pass"<<endl;
    }
        else{
            cout<<s[i].name<<": fail"<<endl;
        }
    }
        cout<<"who has largest?"<<endl;
        if(total[0]>total[1] && total[0]>total[2])
        cout<<s[0].name<<"has highest"<<endl;
        else if(total[1]>total[2] && total[1]>total[0])
        cout<<s[1].name<<"has highest"<<endl;
        else if(total[2]>total[1] && total[2]>total[0])
        cout<<s[2].name<<" has highest"<<endl;
        else{
            cout<<"competition is tied"<<endl;
        }
}

