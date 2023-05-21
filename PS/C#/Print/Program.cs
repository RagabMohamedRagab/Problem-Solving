using System;
namespace Print
{
    class Program{
        public static void Print(int N){
            for(int i=1;i<N;i++){
                Console.Write($"{i} ");
            }
            Console.Write(N);
        }
        private static void Main(string []args){
            int N=Int32.Parse(Console.ReadLine());
            Print(N);
        }
    }
}
