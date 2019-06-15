void main()
{
    int a[5],i,s=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<5;i+=2)
    {
        s+=a[i];
    }
    printf("%d",s);
}
