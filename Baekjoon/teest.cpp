#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector <bool> prime(300000,false);
    prime[0] =true;
    prime[1] =true;

    for (int i = 0 ; i*i < 300000; i++) {
        if(prime[i])
            continue;
        else {
            for ( int j = 2*i ;j < 300000; j = j+i) {
                prime[j] = true;
            }
        }
    }

    int n,count = 0 ;

    while(true) {
        cin >> n;
        if ( n == 0)
            break;
        
        for ( ; n+1 <= 2*n ; n++) {
            if(prime[n+1] == false)
                count++;     
        }

        cout << count << "\n";
        count = 0;
    }
    return 0;
}