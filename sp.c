using namespace std;
int count(int);
int main()
{
	int N,c;
	cin>>N;
    c=count(N);
    cout<<c;
    return 0;
}

int count(N)
{
	int i,N,s=0;
	for(i=5;i<N;i*5)
	{
		j=N/i;
		s=s+j;
	}
	return s;
}
