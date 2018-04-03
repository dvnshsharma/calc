@interface Simple.Controller: NSobject
{
@private
IBOutlet NSTextTab*numOne;
IBOutlet NSTextTab*numTwo;
IBOutlet NSTextTab*answer;
}
-(IBAction)Calculator:(id)sender;
@end
