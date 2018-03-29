//Author:Pedro V Ojeda
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
        ifstream in("example2.txt");
        char first = ' ', last = ' ', current;
        vector<char> list;
        //Read from the file opened by in, and the first letter (either upper or
        while( !in.eof() )
        {
                in>>current;
                if( (current>='A' && current<='Z') ||(current >='a' && current <='z') )
                {
                        list.push_back(current);
                }
                for( int i=0; i<list.size(); i++)
                {
                        first=list.at(0);
                        last=list.at(list.size()-1);
                }
                //lower case) should be assigned to first and the last letter (again in
                //either case) from the file to the variable last


         }      
            in.close();
            //Then, finally, this displays the censored version:
                cout<<first<<"**"<<last<<endl;




        return 0;
} // end main
