class Final{
public static void main(String args[]){
final int x;
int y;
x=10;
y=20;
System.out.println("variable x value="+x+ "And "+y);
y=x+y;
System.out.println("sum is="+y);
B obj=new B();
obj.disp();
}
final class A{
void disp(){
System.out.println("Disp()in parent");
 }
}
final class B{
void disp(){
System.out.println("Disp()in child");
}
}
