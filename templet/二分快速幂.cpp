define ll long long
ll Montgomery(ll a, ll b, ll mod)
{
	ll ans=1;
	a=a%mod;
	while(b)
	{
		if(b&1)	ans=(a*ans)%mod;
		b=b>>1;
		a=(a*a)%mod;
	}
	return ans;
}
