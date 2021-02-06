import java.io.*
import java.math.*
import java.text.*
import java.util.*
import java.util.regex.*

/*
 * Complete the timeConversion function below.
 */

 // 12:01:00AM 
 //Return '12:01:00'.

 //12:05:39AM
// 00:05:39

 // 12:01:00PM
//Return '00:01:00'.

//12:45:54PM
// 12:45:54


//buyed test cases 


//12:00:00AM
// 00:00:00
 
fun timeConversion(s: String): String {
        val day :String =  s.toString().trim().substring(8)
        var hr :Int = s.toString().trim().substring(0,2).toInt()    
        if(day=="AM") {
        //convert it to military (24-hour) time.
        hr = if(hr==12) 0 else hr
        val padHr:String = if (hr<=9) "0$hr" else "$hr"
        return  "$padHr${s.trim().substring(2,8)}" 
        }
        //convert it to military (24-hour) time.
        hr = if(hr==12) 12 else hr+12
        val padHr:String = if (hr<=9) "0$hr" else "$hr"
        return  "$padHr${s.trim().substring(2,8)}"   
}   

fun main(args: Array<String>) {
    println("Started Programme")

    val scan = Scanner(System.`in`)

    val s = scan.nextLine()

    val result = timeConversion(s)

    println(result)
}
