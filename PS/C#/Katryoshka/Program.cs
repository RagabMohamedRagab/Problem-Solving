using System;
namespace Katryoshka
{
    class Program{
        static void Main(string []args){
            string []Arr=Console.ReadLine().Split(' ');
            long A=Int64.Parse(Arr[0]);
            long B=Int64.Parse(Arr[1]);
            long C=Int64.Parse(Arr[2]);
            long min=Math.Min(A,Math.Min(B,C));
            long i=0;
            i=min;
            A-=min;
            B-=min;
            C-=min;
            min=Math.Min(A/2,C);
            i+=min;
            A-=min;
            C-=min;
            System.Console.WriteLine(i);
        }
    }
}