using System;
namespace  Factorial{
    internal class Program{
        public static int Fact(int N){
            if(N==0||N==1){
                return 1;
            }
            return N*Fact(N-1);
        }
        private static void Main(string []args){
            int N=Convert.ToInt32(Console.ReadLine());
            Console.WriteLine(Fact(N));
        }
    }
}