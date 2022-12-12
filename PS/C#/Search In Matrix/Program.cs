// Happy Code
// Time O(N^2)
// Space O(N)
using System;
namespace Test{
    class Prpgram{
        static void Main(string []arsg){
            string []len=Console.ReadLine().Split(' ');
            int N=Int32.Parse(len[0]); // row
            int M=Int32.Parse(len[1]); // col
            string []Arr=new string[]{};
            List<string[]> list_Arr=new List<string[]>();
            int i=1;
            while(i<=N){
                Arr=Console.ReadLine().Split(' ');
                if(Arr.Length==M){
                    list_Arr.Add(Arr);
                }
                i++;
            }
            bool flag=false;
            int item=Int32.Parse(Console.ReadLine());
            foreach (var arr in list_Arr)
            {
                foreach (var val in arr)
                {
                    if(item==Int32.Parse(val)){
                        flag=true;
                        break;
                    }
                }
            }
            if(flag){
                Console.WriteLine("will not take number");
            }else{
                 Console.WriteLine("will take number");
            }


        }
    }
}
