// Happy Code
// Complexity Time O(N^2)
using System;
namespace ThreeNumbers{
    class Program{
        static void Main(string[]args){
            string []arr=Console.ReadLine().Split(' ');
            int x=Int32.Parse(arr[0]);
            int y=Int32.Parse(arr[1]);
            int count=0;
            int i=0;
            while(i<=x){
                int j=0;
                while(j<=x){
                    int z=y-i-j;
                    if(z>=0&&z<=x){
                        count++;
                    }
                    j++;
                }
                i++;
            }
            Console.WriteLine($"{count}");

        }
    }
}
