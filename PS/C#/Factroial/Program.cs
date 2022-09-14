//Nice Code 
// Complexity Time O(N^2)
using System;
namespace Factorial
{
    class Program{
        static void Main(string []args){
            int N=Int32.Parse(Console.ReadLine());
            int j=1;
           while (j<=N)
           {
             long Fact=1;
             int num=Int32.Parse(Console.ReadLine());
             for(int i=1;i<=num;i++){
               Fact*=i;
             }
             System.Console.WriteLine(Fact);
             j++;
            }
        }
    }
}
