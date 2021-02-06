
fun staircase(n:Int){
   //zero bound index
   var bi = n-1
    for( i in 0..bi){
        for( j in 0..bi){
            if(j >= bi-i){
                print("#")
            }else{
                print(" ")
            }
        }
        print("\n")
    }
}

fun main(args:Array<String>){
    println("Started Program\n")
       val n =  readLine()!!.toInt()
        staircase(n)
}