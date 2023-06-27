// Happy Code
// Time Complexity O(1)
// Space Complexity O(1)
using System;
namespace PrintRecurion{
    class Program{
  
      public static void Print(int N){
        if(N==0){
            return;
        }
          Console.WriteLine("I love Recursion");
          N--;
          Print(N);
      }
      private static void Main(string []args){
        int N=Int32.Parse(Console.ReadLine());
        Print(N);
      }
    }
}