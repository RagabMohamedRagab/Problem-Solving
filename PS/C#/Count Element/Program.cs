using System;
namespace CountElement{
    class Program{
        static void Main(string []args){
            int N=Int32.Parse(Console.ReadLine());
            string []Arr=Console.ReadLine().Split(' ');
            int a=0,c=0;
            while(a<N){
                int key=Int32.Parse(Arr[a])+1;
                int b=0;
                while(b<N){
                    if(key==Int32.Parse(Arr[b])){
                        c++;
                        break;
                    }
                    b++;
                }
                a++;
            }
            System.Console.WriteLine(c);
        }
    }
}
