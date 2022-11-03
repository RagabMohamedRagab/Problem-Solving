using System;
namespace PalindromeArray
{
    class Program{
        static void Main(string []args){
        int N=Int32.Parse(Console.ReadLine());
        string []Arr=Console.ReadLine().Split(' ');
        int i=0;
        bool flag=true;
        while(i<=N-1){ // 0 1 2 3 4 
            if(Int32.Parse(Arr[i])==Int32.Parse(Arr[(N-1)-i])){ // Arr[5-0]
            }else{
                flag=false;
                break;
            }
            i++;
        }
        if(flag){
            Console.WriteLine("YES");
        }else{
            Console.WriteLine("NO");
        }
        }
    }
}
