using System;
namespace Multiplicationtable
{
    class Program{
        static void Main(string[]args){
            int N=Int32.Parse(Console.ReadLine());
            for(int i=1;i<=12;i++){
                Console.WriteLine($"{N} * {i} = {N*i}");
            }
        }
    }
}
