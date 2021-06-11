/*題目：有1、2、3、4個數字，
能組成多少個互不相同且無重複數字的三位元數？都是多少？
1.程式分析：可填在百位、十位元、個位的數字都是1、2、3、4。
組成所有的排列後再去掉不滿足條件的排列。*/

/*console.log(4*3*2)
for (var i = 1; i < 5; i++)
{
    for (var j = 1; j < 5; j++)
    {
        for (var k = 1; k < 5; k++)
        {
            if (i != j && j != k && i != k)
            {
                console.log(i,j,k);
            }
        }
    }
}*/




/*題目：一個整數，它加上100後是一個完全平方數，再加上168又是一個完全平方數，請問該數是多少？ 
1.程式分析：在10萬以內判斷，先將該數加上100後再開方，再將該數加上268後再開方，
如果開方後的結果滿足如下條件，即是結果。請看具體分析：*/

//answer = integer
//answer + 100 = x's square
//answer + 268 = y's square
//answer <= 100000

/*var x;
var y;
for(var i = 1; i < 100000; i++){
    //x = Math.sqrt(i + 100);
    //y = Math.sqrt(i + 268);
    //console.log(x);
    //console.log(y);
    if ((x*x == i + 100) && (y*y == i + 268)){
        console.log(i);
    }
}
console.log("hi");*/

/*題目：輸入某年某月某日，判斷這一天是這一年的第幾天？
 1.程式分析：以3月5日為例，應該先把前兩個月的加起來，然後再加上5天即本年的第幾天，
 特殊情況，閏年且輸入月份大於3時需考慮多加一天。*/

/*$(document).ready(function () {
    $("#BODY").submit(function (e) {
        e.preventDefault();
        var year = parseInt($("[name='year']").val());
        var month = parseInt($("[name='month']").val());
        var date = parseInt($("[name='date']").val());
        var answer = 0;
        var months = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];

        for(var i = 0; i < (month - 1); i++){
            answer += months[i];
        }

        answer += date;

        if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
            console.log("閏年");
            answer += 1;
        }
        else{
            console.log("平年");
        }

        console.log(answer);
    })
})*/

/*古典問題：有一對兔子，從出生後第3個月起每個月都生一對兔子，
小兔子長到第三個月後每個月又生一對兔子，假如兔子都不死，問每個月的兔子總數為多少？ 
1.程式分析：兔子的規律為數列1,1, 2, 3, 5, 8, 13, 21....*/

2+2+4+6+10+16+26+42+68+110+178+288

function Fibo(n)
{
	if(n==1||n==2)
		return 1;
	return Fibo(n-1)+Fibo(n-2);
}
console.log(Fibo(8));
Fibo(8)
Fibo(7) + Fibo(6)
    


//document.getElementById("answer").innerHTML = answer;