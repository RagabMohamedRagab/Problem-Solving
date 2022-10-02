// Happy Code
// Complexity Time O(N^2)
using System;
namespace SomeSums{
    class Program{
        static void Main(string []args){
            string []arr=Console.ReadLine().Split(' ');
            int N=Int32.Parse(arr[0]);
            int A=Int32.Parse(arr[1]);
            int B=Int32.Parse(arr[2]);
            int a=1,full_sum=0;
            while(a<=N){
                 int b=a,sum=0;
                 while(b!=0){
                    sum+=b%10;
                    b/=10;
                 }
                 if(sum>=A&&sum<=B){
                    full_sum+=a;
                 }
                 a++;
            }
            Console.WriteLine(full_sum);

        }
    }
}
