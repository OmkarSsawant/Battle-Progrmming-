import java.io.*
import java.math.*
import java.security.*
import java.text.*
import java.util.*
import java.util.concurrent.*
import java.util.function.*
import java.util.regex.*
import java.util.stream.*
import kotlin.collections.*
import kotlin.comparisons.*
import kotlin.io.*
import kotlin.jvm.*
import kotlin.jvm.functions.*
import kotlin.jvm.internal.*
import kotlin.ranges.*
import kotlin.sequences.*
import kotlin.text.*
/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

fun diagonalDifference(n:Int,arr: Array<Array<Int>>): Int {
    println(arr)
    // Write your code here
    var diaSum1:Int=0
    var diaSum2:Int=0
    //make it 0 indexed
   val bi = n-1 
    for(i in 0..bi){
            val d1e = arr[i][i]
            diaSum1 += d1e
            val j = bi-i 
            val d2e = arr[i][j]
            diaSum2 += d2e
    }
    val diff = diaSum2 - diaSum1
    val absolutediff:Int =  if( diff > 0 ) diff else -diff 
    return absolutediff
}
// Sample Input
/* 
3
11 2 4
4 5 6
10 8 -12
*/

fun main(args: Array<String>) {
    println("======= Started Progrmme ===========")
    val n = readLine()!!.trim().toInt()

    val arr = Array<Array<Int>>(n, { Array<Int>(n, { 0 }) })

    for (i in 0 until n) {
        arr[i] = readLine()!!.trimEnd().split(" ").map{ it.toInt() }.toTypedArray()
    }

    val result = diagonalDifference(n,arr)

    println(result)
}
