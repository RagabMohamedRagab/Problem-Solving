// Happy Code
// Time Complexity O(1)
// Space Complexity O(1)
using System;
namespace Swap{
    class Program{
        private static void Main(string []args){
            string []nums=Console.ReadLine().Split(' '); // 2 3
            int a=Int32.Parse(nums[0]); // 2
            int b=Int32.Parse(nums[1]); // 3
            a=a+b; 
            // a=5  b=3            
            b=a-b; // 5-3 =2
            // a=5 b=2
            a=a-b ; // 5-2=3
            // a =3 b=2
            Console.WriteLine($"{a} {b}");
        }
    }
}