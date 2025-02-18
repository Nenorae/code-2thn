void demo(void);
main()
{
    int i = 0;
    while (i < 3)
    {
        demo();
        i++;
    }
}
void demo(void)
{
    auto int var_auto = 0;
    static int var_static = 0;
    var_auto++;
    var_static++;
    printf("auto = %d, static = %d\n",
           var_auto, var_static);
    
}