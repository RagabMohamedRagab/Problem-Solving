// Happy Code 
// Complexity Time O(N^2)
using System;
namespace Digits
{
    class Program{
        static void Main(string[]args){
            int N=Int32.Parse(Console.ReadLine());
            int i=0;
            while(i<N){
                int T=Int32.Parse(Console.ReadLine());
                if(T==0){
                    Console.Write($"{T} ");
                }else{
                    while(T!=0){
                        Console.Write($"{T%10} ");
                        T/=10;
                    }
                } 
                Console.WriteLine();
                i++;
            }
        }
    }
}
