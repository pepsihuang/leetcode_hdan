class Solution {
public:
    string countAndSay(int n) 
    {
        if(n < 1)
            return "";
        if(n == 1)
            return "1";

        string str = countAndSay(--n);
        size_t i = 0;
        string res;
        while ( i < str.size() )
        {
            int count = 0;
            string one;
            one = str.substr(i,1);
            do{
                ++count;
                ++i;
            }while(one == str.substr(i,1));
            
            char buffer[100] = {0};
            sprintf(buffer,"%d",count);
            //itoa(count, buffer, 10);
            string t1(buffer);
            res += t1;
            res += one;
        }
        cout<<"n = "<<n<<endl;
        cout<<res<<endl;
        return res; 
    }
};
