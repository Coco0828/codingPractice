$(document).ready(function() {
    $("#bodyfat02").submit(function(e) {
        e.preventDefault();
        var gender = $("[name='gender']").val();
        var leg = $("[name='leg']").val();
        var arm = $("[name='arm']").val();
        var hip = $("[name='hip']").val();
        var age = $("[name='age']").val();
        var chest = $("[name='chest']").val();
        var abdomen = $("[name='abdomen']").val();
        var density;
        var all;
        var fat;
        if (age > 0 && leg > 0 && arm > 0 && hip > 0){
            if (gender == 0){
                all = (leg * 10) + (arm * 10) + (hip * 10);
                density = 1.0994921 - (0.0009929 * all) + (0.0000023 * all * all) - (0.0001392 * age);
            } else {
                all = (leg * 10) + (chest * 10) + (abdomen * 10);
                density = 1.10938 - (0.0008267 * all) + (0.0000016 * all * all) - (0.0002574 * age);
            }
            fat = Math.round(((495 / density) - 450) * 10) / 10;
            $("#result").val(fat);
        }

    });
});