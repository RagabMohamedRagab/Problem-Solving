using System;
namespace Minimize_Number
{
    class Program{
        static void Main(string []args){
            int n=Int32.Parse(Console.ReadLine());
            string []A=Console.ReadLine().Split(' ');
            int a=0,op=0;
            while(true){
                int b=0,c=0;
                while(b<n){
                    if(Int32.Parse(A[b])%2==0){
                        A[b]=(Int32.Parse(A[b])/2).ToString();
                        c++;
                    }
                    b++;
                }
                if(c==n){
                    op++;
                }else{
                    break;
                }
                a++;
            }
            Console.WriteLine(op);
        }
    }
}
