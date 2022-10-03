// Complexity Time O(N)
using System;
namespace PUM
{
    class Program{
        static void Main(string[]args){
            int N=Int32.Parse(Console.ReadLine());
            int j=1;
            for(int i=1;i<=N;i++){
                Console.Write($"{i} {i+1} {i+2}");
                Console.WriteLine("PUM");
                j=j+4;
            }
        }
    }
}
