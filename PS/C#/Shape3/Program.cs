// Complexity Time O(N^2)
using System;
namespace Shape3
{
    class Program{
        static void Main(string[]args){
           int N=Int32.Parse(Console.ReadLine());
           int a=1;
           while(a<=N){
            int b=N;
            while(b>a){
                Console.Write(" ");
                b--;
            }
            int c=1;
            while(c<=a*2-1){
                Console.Write("*");
                c++;
            }
            Console.WriteLine();
            a++;
           }
           int i=N;
           while(i>=1){ // 5>=1 
            int j=N; // j 5
            while(j>i){  // 4
                Console.Write(" ");
                j--;
            }
            int z=1;
            while(z<=i*2-1){ // 5*2 -1=10-1=9
                Console.Write("*");
                z++;
            }
            Console.WriteLine();
            i--;
           }
        }
    }
}
