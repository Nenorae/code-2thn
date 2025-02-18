#include <stdio.h>

float feetkeinci(int feet)
{
    return feet * 12;
}

float incikecm(int inci)
{
    return inci * 2.54;
}

float cmkemeter(float cm)
{
    return cm / 100;
}

int main(int argc, char const *argv[])
{
    int feet;
    printf("masukan nilai dalam feet: ");
    scanf("%d", &feet);

    int inci = feetkeinci(feet);
    float cm = incikecm(inci);
    float meter = cmkemeter(cm);

    printf("feet = %d, inci = %d, cm = %2.F, meter = %2.f", feet, inci, cm, meter);
    return 0;
}
