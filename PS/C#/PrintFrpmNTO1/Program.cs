// Happy Code
// Time Complexity O(N)
// Space Complexity O(1)
using System;
namespace PrintFrom1TON
{
    class Program{
        
        public static void Print(int N){
             	if (N <= 0)
		return;
     Console.Write(N);
	if(N!=1){
		Console.Write(" ");
	}
	Print(--N);
        }
        private static void Main(string []args){
            int N=Int32.Parse(Console.ReadLine());
             Print(N);
        }
    }
}
