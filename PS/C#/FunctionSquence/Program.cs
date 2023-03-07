// Happy Code
// Time Complexity O(N)
// Space Complexity O(1)
using System;
namespace FunctionSquence
{
    class Program
    {
        private static void Main(string[] args)
        {
            string[] size = Console.ReadLine().Split(' ');
            int N = Int32.Parse(size[0]);
            int Q = Int32.Parse(size[1]);
            string S = Console.ReadLine().ToLower();
            if(S.Length<=N){
            int a = 0, start, end;
            while (++a <= Q)
            {
                string[] Query = Console.ReadLine().Split(' ');
                switch (Query[0])
                {
                    case "pop_back":
                        S = S.Substring(0, S.Length - 1);
                        break;
                    case "front":
                        Console.WriteLine(S[0]);
                        break;
                    case "back":
                        Console.WriteLine(S[S.Length - 1]);
                        break;
                    case "substr":
                        start = Int32.Parse(Query[1]);
                        end = Int32.Parse(Query[2]);
                        if (start < end && start < S.Length && end < S.Length)
                            Console.WriteLine(S.Substring(start - 1, end));
                        break;
                    case "print":
                        start = Int32.Parse(Query[1]);
                        if (start < S.Length)
                        {
                            Console.WriteLine(S[start]);
                        }
                        break;
                    case "push_back":
                        S += Query[1].ToString();
                        break;
                    case "sort":
                        start = Int32.Parse(Query[1]);
                        end = Int32.Parse(Query[2]);
                        string NS = S.Substring(start - 1, (end - start) + 1);
                        char[] Arr = NS.ToCharArray();
                        Array.Sort(Arr);
                        NS = new string(Arr);
                        S = S.Substring(0, start - 1) + NS + S.Substring(end - 1);
                        break;
                    case "reverse":
                        start = Int32.Parse(Query[1]);
                        end = Int32.Parse(Query[2]);
                        string NR = S.Substring(start - 1, end);
                        char[] A = NR.ToCharArray();
                        Array.Reverse(A);
                        NS = new string(A);
                        S = S.Substring(0, start - 1) + NS + S.Substring(end);
                        break;
                }

            }
            }
        }
    }
}