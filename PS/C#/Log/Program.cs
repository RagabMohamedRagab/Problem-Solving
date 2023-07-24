using System;
namespace Log
{
     internal class Program{
        public static int counter=0;
        public static void Log(long N){
            if(N==1){
                return;
            }
            counter++;
            Log(N/2);
        }
        private static void Main(string []args){
            long N=Int64.Parse(Console.ReadLine());
            Log(N);
            Console.WriteLine(counter);
        }
     }
}