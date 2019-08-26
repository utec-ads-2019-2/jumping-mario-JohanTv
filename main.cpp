#include <iostream>

using namespace std;

int main() {
    int cases;
    int walls;

    int posAntes;
    int posDespues;

    int saltosAltos=0;
    int saltosBajos=0;

    cin>>cases;

    for( int i=0 ; i<cases ; i++){
        cin>>walls;
        cin>>posAntes;
        for( int j=1 ; j<walls ; j++ ){
            cin>>posDespues;
            if (posAntes<posDespues) saltosAltos++;
            else if (posAntes>posDespues) saltosBajos++;
            posAntes = posDespues;
        }
        cout<<"Case "<<i+1<<": "<<saltosAltos<<" "<<saltosBajos<<endl;
        saltosAltos=0;
        saltosBajos=0;
    }

    return 0;
}
