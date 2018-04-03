import "Simple Controller.h"
@implementation Simple Controller

-(IBAction)Calculate:(id)sender
{
    if([plus state] == 1)
    {
        int answer = [numOne intValue] + [numTwo intValue];
        [answer setIntValue:answer];
    }
    if([minus state] == 1)
    {
        int answer = [numOne intValue] - [numTwo intValue];
        [answer setIntValue:answer];
    }
    if([multiply state] == 1)
    {
        int answer = [numOne intValue] * [numTwo intValue];
        [answer setIntValue:answer];
    }
    if([divide state] == 1)
    {
        int answer = [numOne intValue] / [numTwo intValue];
        [answer setIntValue:answer];
    }
}
@end
