// Happy Code
// Time Complexity O(N)
// Space Complexity O(1)
using System;
namespace SortLetter
{
    class Program{
        private static void Main(string[]args){
            int size=Int32.Parse(Console.ReadLine());
            string str=Console.ReadLine();
             int []Frq=new int[26];
            int a=0;
            while(a<size){
                ++Frq[str[a]-'a'];
                a++;
            }
            for(int i=0;i<=25;i++){
                while(Frq[i]!=0){
                    Console.Write($"{(char)(i+97)}");
                  --Frq[i];
                }
            }
        }
    }
}
