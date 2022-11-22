public class Hello {  // Save as HelloJNI.java
   static {
      System.loadLibrary("hello"); 
   }
 
   // Declare an instance native method sayHello() which receives no parameter and returns void
   private native void sayHello();
 
   // Test Driver
   public static void main(String[] args) {
      new Hello().sayHello();  // Create an instance and invoke the native method
   }
}
