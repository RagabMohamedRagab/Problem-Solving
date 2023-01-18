// Time Complexity O(N^2)
// Space Complexity O(N)
using System;
namespace EvenHatedODD
{
    class Program{
        static void Main(string []args){
            string []A=Console.ReadLine().Split(' ');
            Console.WriteLine($"{A[0].Length} {A[1].Length}\n{A[0]} {A[1]}");
        }
    }
}
