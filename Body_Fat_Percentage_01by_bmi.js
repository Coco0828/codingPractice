$(document).ready(function() {
    $("#BODY").submit(function(e) {
        e.preventDefault();
        var weight = $("[name='weight']").val();
        var height = $("[name='height']").val();
        var age = $("[name='age']").val();
        var gender = $("[name='gender']").val();
        var bmi;
        var lastbody;
        var final;
        if (weight > 0 && height > 0) {
            newheight = height / 100;
            bmi = weight / (newheight*newheight);
            lastbody = (1.39 * bmi) + (0.16 * age) - (10.34 * gender) - 9;
            final = Math.round(lastbody * 10) / 10
            $("#result").val(final);
        }
    });
});