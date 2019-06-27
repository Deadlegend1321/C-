    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cin>>n;
        while(n--)
        {
            int sh,sm,eh,em,c,m;
            cin>>sh>>sm>>eh>>em;
            if(sh>eh)
            {
                c=12-sh;
                c=c+eh;
                if(sm==em)
                cout<<c<<" "<<00<<endl;
                else if(sm>em)
                {
                    m=60-(sm-em);
                    --c;
                    cout<<c<<" "<<m<<endl;
                }
                else
                {
                    m=em-sm;
                    cout<<c<<" "<<m<<endl;
                }
            }
            else
            {
                c=eh-sh;
                 if(sm==em)
                cout<<c<<" "<<00<<endl;
                else if(sm>em)
                {
                    m=60-(sm-em);
                    --c;
                    cout<<c<<" "<<m<<endl;
                }
                else
                {
                    m=em-sm;
                    cout<<c<<" "<<m<<endl;
                }
            }
        }
    }
