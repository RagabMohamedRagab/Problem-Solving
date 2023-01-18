using System;
namespace EvenHatedODD
{
    class Program{
        static void Main(string []args){
            int N=Int32.Parse(Console.ReadLine());
            int i=1;
            while(i<=N){
                int size=Int32.Parse(Console.ReadLine());
                string []A=Console.ReadLine().Split(' ');
                int j=0,odd=0,even=0;
                while(j<size){
                    if(Int32.Parse(A[j])%2==0){
                        even++;
                    }else{
                        odd++;
                    }
                    j++;
                }
                if(A.Length%2!=0){
                    Console.WriteLine("-1");
                }else if(even==odd){
                    Console.WriteLine("0");
                }else{
                    Console.WriteLine($"{Math.Abs(even-odd)/2}");
                }
                i++;
            }
        }
    }
}
