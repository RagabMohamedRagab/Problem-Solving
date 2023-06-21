// Happy Code
// Time Complexity O(N)
// Space Complexity O(1)
using System;
namespace NewArray
{
    class Program{
        public static void GetNewArray(string []A,string []B){
              foreach (var item in B)
            {
                Console.Write(item+" ");
            }
            foreach (var item2 in A)
            {
                Console.Write(item2+" ");
            }
        }
        private static void Main(string []args){
             int N=Int32.Parse(Console.ReadLine());
             string []A=Console.ReadLine().Split(' ');
             string []B=Console.ReadLine().Split(' ');
          GetNewArray(A,B);
        }
    }
}