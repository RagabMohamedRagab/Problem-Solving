using System;
namespace Palindrome{
    class Program{
        static void Main(string []args){
            string str=Console.ReadLine();
            int a=0,b=str.Length-1;
            bool flag=true;
            while(a<=str.Length){
                if(a>b){
                    break;
                }
                if(str[a]==str[b]){
                    b--;
                }else{
                    flag=false;
                    break;
                }
                a++;
            }
            if(flag){
                Console.WriteLine("YES");
            }else{
                Console.WriteLine("NO");
            }
        }
    }
}
