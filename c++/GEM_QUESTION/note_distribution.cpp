#include <iostream>
using namespace std;
int main() {
    int total, hundred=0, fifty=0, twenty=0, one=0;
    cout<<"enter total amount: ";
    cin>>total;
    switch(1)
    {
        case 1: hundred=total/100;
                total=total%100;
                cout<<"Hundred note is: "<<hundred<<endl;
                // break;
         case 2:fifty=total/50;
                total=total%50;
                cout<<"Fifty note is: "<<fifty<<endl;
                // break;
         case 3:twenty=total/20;
                total=total%20;
                cout<<"twenty note is: "<<twenty<<endl;
                // break;        
         case 4:one=total/1;
                total=total%1;
                cout<<"one note is: "<<one<<endl;
                break; 
        default:cout<<"Invalid output!!";
                break;
        
    }
    return 0;
}