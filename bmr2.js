$(document).ready(function() {
    $("#BMR").submit(function(e) {
        e.preventDefault();
        var weight = $("[name='weight']").val();
        var height = $("[name='height']").val();
        var gender = $("[name='gender']").val();
        var age = $("[name='age']").val();
        var activity = $("[name='activity_level']").val();
        var bmr;
        var calories;
        if (weight > 0 && height > 0) {
            if (gender == 0) {
                bmr = Math.round((weight * 10) + (6.25 * height) - (5 * age) - 161);
                calories = Math.round(bmr * activity);
            } else{
                bmr = Math.round((weight * 10) + (6.25 * height) - (5 * age) + 5);
                calories = Math.round(bmr * activity);
            }
            $("#result").val(bmr);
            $("#result2").val(calories);
        }
    });
});