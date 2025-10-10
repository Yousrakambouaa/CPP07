
template<typename T, int N>

void iter(T &arr[N], N, &Func(T[N]), void (*f)(*arr))
{
	for(int i= 0; i < N; i++)
		f(arr[i]);
}