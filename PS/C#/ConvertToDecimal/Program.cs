using System;
namespace ConvertToDecimal
{
    class Program{
        static void Main(string[]args){
            int N=Int32.Parse(Console.ReadLine());
            int i=1;
            while(i<=N){
                int val=Int32.Parse(Console.ReadLine());
                int a=val,item=0;
                double sum=0;
                while(val!=0){
                    item+=val%2;
                    val/=2;
                }
                int b=0;
                while(b<item){
                    sum+=Math.Pow(2,b);
                    b++;
                }
                Console.WriteLine(sum);
                i++;
            }
        }
    }
}