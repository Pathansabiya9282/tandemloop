#include <iostream>
using namespace std;

int main()
{
        int x;
        cin>>x;
        
        for(int i=1;i<=x;i++)
        {
            // j is used for values printed and cnt stores the count of how many more values are to be printed
            int j=1,cnt=i;
            if(cnt%2==0)
                cnt--;
            while(cnt--)
            {
                cout<<j<<" ";
                j+=2;
            }
            cout<<endl;
        }
        
        return 0;
}
