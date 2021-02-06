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

//942381765 627450398 954173620 583762094 236817490
//2390411747 3107767877


// Complete the miniMaxSum function below.
fun miniMaxSum(arr: Array<Long>): Unit {
    val sorted  = arr.sorted()
    val minarray = Array<Long>(arr.size,{index-> sorted[index]}).toMutableList()
    minarray.removeAt(arr.lastIndex)
    val maxarray = Array<Long>(arr.size,{index-> sorted[index]}).toMutableList()
    maxarray.removeAt(0)
    val maxSum:Long = maxarray.toLongArray().sum()
    val minSum:Long = minarray.toLongArray().sum()
    println("$minSum $maxSum")
}
//1 2 3 4 5

fun main(args: Array<String>) {
    println("==========  Started Programme  ============")
    val scan = Scanner(System.`in`)

    val arr = scan.nextLine().split(" ").map{ it.trim().toLong() }.toTypedArray()
    miniMaxSum(arr)
}
