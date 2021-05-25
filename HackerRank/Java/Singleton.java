
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
import java.lang.reflect.*;


class Singleton{
    
    private Singleton(){

    }

    public String str;


    static volatile Singleton instance;
    static final Object lock = new Object();

   static Singleton getSingleInstance(){
    
        if(instance!=null)
            return instance;
      
            synchronized(lock){
                instance = new Singleton();
                return instance;
            }
        
    }

    public static void main(String[] args) {
		    	System.out.println(getSingleInstance());
		    	System.out.println(getSingleInstance());
		    	System.out.println(getSingleInstance());

    }
}