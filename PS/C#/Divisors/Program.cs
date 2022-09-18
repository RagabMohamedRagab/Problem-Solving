using System;
namespace divisor
{
    class Program{
        static void Main(string[]arg){
            int div=Int32.Parse(Console.ReadLine());
            int i=1;
            while (i<=div)
            {
                if(div%i==0){
                    Console.WriteLine(i);
                }
                i++;
            }
        }
    }
}