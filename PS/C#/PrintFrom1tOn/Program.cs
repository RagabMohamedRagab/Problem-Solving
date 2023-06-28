using System;
namespace PrintFrom1TON
{
    class Program{
        public static int i=1;
        public static void Print(int N){
             if(N<i){
                return;
             }
             Console.WriteLine(i);
             i++;
             Print(N);
        }
        private static void Main(string []args){
            int N=Int32.Parse(Console.ReadLine());
             Print(N);
        }
    }
}
