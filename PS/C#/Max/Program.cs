// Nice Code 
// Complexity Time O(N)
using System;
namespace Max
{
    class Program{
        static void Main(string[] args){
            int N=Int32.Parse(Console.ReadLine()), // 5
            Max_num=0;
            string[] Arr=Console.ReadLine().Split(' '); // 1 8 5 7 5
            for(int i=0;i<N;i++){
                int item=Int32.Parse(Arr[i]);
                if(item>Max_num){
                    Max_num=item;
                }
            }
            Console.WriteLine(Max_num);
        }
    }
}
