// Happy Code
// Time Complexity O(N)
// Space Complexity O(1)
using System;
namespace Vowels{
    internal class Program{
        public static void Print(string s,int len,int count){
            if(len<0){
                Console.WriteLine(count);
                return;
            }
            if(s[len] == 'a' || s[len] == 'A' || s[len] == 'o' || s[len] == 'O' || s[len] == 'u' || s[len] == 'U' || s[len] == 'e' || s[len] == 'E' || s[len] == 'i' || s[len] == 'I'){
                count++;
            }
            len--;
            Print(s,len,count);
        }
        private static void Main(string []args){
            string S=Console.ReadLine();
            Print(S,S.Length-1,0);
        }
    }
}