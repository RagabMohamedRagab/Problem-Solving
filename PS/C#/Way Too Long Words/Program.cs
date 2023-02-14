// Happy Code
// Time Complexity o(N^2)
// Space Complexity O(1)
using System;
namespace WayTooLOngWord
{
    class Program{
        static void Main(string[]args){
            int N=Int32.Parse(Console.ReadLine());
            int a=1;
            while(a<=N){
                string s=Console.ReadLine();
                if(s.Length>10){
                    Console.WriteLine($"{s[0]}{s.Length-2}{s[s.Length-1]}");
                }else{
                    Console.WriteLine($"{s}");
                }
                a++;
            }
        }
    }
}