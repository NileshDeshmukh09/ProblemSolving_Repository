
using namespace std;

int pow(int x , int n ){

    int partialAns = pow(x , n-1);
    cout <<  x * partialAns;
}

int main(){
    int x ;