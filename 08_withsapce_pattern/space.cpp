#include <iostream>
using namespace std;

int main()
{
//   left - half piramid

int i, j, k;
for(i = 1; i <= 5; i++){

    for (k= 5; k > i; k--){
        cout << "  "; 
    }
    for (j = 1; j <=i ; j++){

    cout << j << " " ;     
    }
cout << endl;
}


//  Inverted left - half  Piramid 
{
    int i, j, k;
for(i = 5; i > 1; i--){

    for (k= 5; k > i; k--){
        cout << "  "; 
    }
    for (j = 1; j <=i ; j++){

    cout << j << " " ;     
    }
cout << endl;
}

}



}