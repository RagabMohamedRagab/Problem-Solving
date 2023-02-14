using System;
using System.Text;

namespace Conversion
{
    class Program{
        static void Main(string []args){
            StringBuilder str=new StringBuilder();
            string s=Console.ReadLine();
            str.Append(s);
            int a=0;
            while(a<str.Length){
                if(str[a]>='A'&&str[a]<='Z'){
                    str[a]=(char)(str[a]+32);
                }else if(str[a]>='a'&&str[a]<='z'){
                     str[a]=(char)(str[a]-32);
                }else{
                    str[a]=' ';
                }
                a++;
            }
            Console.WriteLine(str);
        }
    }
}