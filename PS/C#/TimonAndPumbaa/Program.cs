// Happy Code 
// Complexity Time O(1)
using System;
namespace TimonAndPumbaa{
    class Program{
        static void Main(string[]args){
            string []arr=Console.ReadLine().Split(' ');
            int a=Int32.Parse(arr[0]);
            int b=Int32.Parse(arr[1]);
            int res=a-b;
            if(res>=0){
                Console.WriteLine($"{res}");
            }else{
                Console.WriteLine("0");
            }
        }
    }
}
