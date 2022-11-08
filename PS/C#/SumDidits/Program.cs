using System;
namespace SumDigit{
    class Program{
        static void Main(string []args){
            int N=Int32.Parse(Console.ReadLine());
            string str=Console.ReadLine();
            int b=0,sum=0;
            while(b<N){
                sum+=(str[b]-'0');
                b++;
            }
            Console.WriteLine(sum);
        }
    }
}
