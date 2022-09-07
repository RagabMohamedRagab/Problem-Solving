using System;
namespace Even
{
    class Program
    {
        static void Main(string[]args){
            int N=Int32.Parse(Console.ReadLine());
            int even=0;
            for(int i=1;i<=N;i++){
                if(i%2==0){
                   even++;
                   Console.WriteLine(i);
                }
            }
            if(even==0){
                Console.WriteLine("-1");
            }
        }
    }
}