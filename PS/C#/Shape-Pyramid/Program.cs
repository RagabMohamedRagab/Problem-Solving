// Happy Code
// Complexity Time O(N^2)
using System;
namespace Pyramid
{
    class Program{
        static void Main(string[]args){
            int N=Int32.Parse(Console.ReadLine());
            int i=1;
            while(i<=N){
                int j=N;
                while(j>=i){
                    Console.Write("*");
                    j--;
                }
                Console.WriteLine();
                i++;
            }
        }
    }
}