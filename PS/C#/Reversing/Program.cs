// Happy Code
// Time Complexity O(N)
// Space Complexity O(N)
using System;
namespace PositionINArray{
    class Program{
        static void Main(string[]args){
            int N=Int32.Parse(Console.ReadLine());
            string []Arr=Console.ReadLine().Split(' ');
            int i=N-1;
            while(i>=0){
                Console.Write($"{Arr[i]} ");
                i--;
            }
        }
    }
}
