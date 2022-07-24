#include <stdio.h>
void SteeringInformation(signed int, unsigned char *);
int main()
{
    signed int G_Str_SteeringAngle_sint = -60;
    unsigned char G_Msg_SteeringInformation_Byte[3];

    printf("The binary representation of G_Str_SteeringAngle_sint value\n");
    for(int i = 31 ; i >= 0; i--)
    {
        printf("%d ", (G_Str_SteeringAngle_sint >> i) & 1);
    }
   Steer_Infor(G_Str_SteeringAngle_sint,G_Msg_SteeringInformation_Byte);
    printf("Elements values of an array after storing\n");
    for(int i = 0; i < 3; i++)
    {
      printf(" %d and Binary form  G_Msg_SteeringInformation_Byte[%d] array is :",G_Msg_SteeringInformation_Byte[i],i);
        for(int j = 7; j >= 0; j--)
        {
            printf("%d ", (G_Msg_SteeringInformation_Byte[i] >> j) & 1);
        }
    }
    return 0;
}
void Steer_Infor(signed int str_Angle, unsigned char G_Msg_SteeringInformation_Byte[3])
{
   G_Msg_SteeringInformation_Byte[0] =  (str_Angle & ((4-1) << 10)) >> 10;
   G_Msg_SteeringInformation_Byte[1] = (str_Angle & ((256-1) << 2)) >> 2;
   G_Msg_SteeringInformation_Byte[2] = (str_Angle & (4 -1)) << 6;
}
