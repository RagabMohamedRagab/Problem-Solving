// Happy Code
// Complexity Time O(n^2)
using System;
namespace EasyFibonacci
{
    class Program{
        static void Main(string[]args){
            int N=Int32.Parse(Console.ReadLine());
            int start=0,Second=1;
            if(N==1){
                Console.Write($"{start}\n");
            }else if(N==2){
                Console.WriteLine($"{start} {Second}");
            }else{
                Console.Write($"{start} {Second} ");
                int i=2;
                while(i<N){
                    int res=start+Second;
                    Console.Write($"{res} ");
                    start=Second;
                    Second=res;
                    i++;
                }
            }
        }
    }
}
