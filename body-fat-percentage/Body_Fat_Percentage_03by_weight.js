$(document).ready(function () {
    $("#Bodyfat03").submit(function (e) {
        e.preventDefault();
        var weight = $("[name='weight']").val();
        var age = $("[name='age']").val();
        var gender = $("[name='gender']").val();
        var waist = $("[name='waist']").val();
        var hip = $("[name='hip']").val();
        var wrist = $("[name='wrist']").val();
        var arm = $("[name='arm']").val();
        var fat;
        var value1;
        var value2;
        var bodymass;
        var value3;
        var value4;
        var value5;
        var value6;
        var value7;
        var value8;
        var value9;
        var value10;

        if (age > 0) {
            if (gender == 1) {
                value1 = (weight * 2.20462262 * 1.082) + 94.42;
                value2 = (waist / 2.54) * 4.15;
                bodymass = value1 - value2;
                value3 = (weight * 2.20462262) - bodymass;
                fat = value3 / (weight * 2.20462262) * 100;
            } else {
                value1 = 0.732 * (weight * 2.20462262);
                value2 = value1 + 8.987;
                value3 = 3.14 / (wrist / 2.54);
                value4 = (waist / 2.54) * 0.157;
                value5 = (hip / 2.54) * 0.249;
                value6 = (arm / 2.54) * 0.434;
                value7 = value2 + value3;
                value8 = value7 - value4;
                value9 = value8 - value5;
                bodymass = value6 + value9;
                value10 = (weight * 2.20462262) - bodymass;
                fat = value10 / (weight * 2.20462262) * 100;
            }
            fat = fat.toFixed(2);
            $("#result").val(fat);
        }
    });
});