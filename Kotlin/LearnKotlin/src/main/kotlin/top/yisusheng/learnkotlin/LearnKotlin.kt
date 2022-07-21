package top.yisusheng.learnkotlin

import kotlin.math.max

fun main(){
    val a=37
    val b=40
    val value= largerNumber(a,b)
    println(value)
}
fun largerNumber(num1:Int,num2:Int):Int{
    return max(num1,num2)
}