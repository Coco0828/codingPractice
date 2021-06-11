function SD() {
    this.sdArr = [];
    this.errorArr = [];
    this.blankNum = 30;
    this.backupSdArr = [];
}
SD.prototype = {
    constructor: SD,
    init: function () {
        this.createDoms();
    },
    createDoms: function () {
        var html = '<ul class = "sd clearfix">';
        String.prototype.times = String.prototype.times || function (n) { return (new Array(n + 1)).join(this); };
        html = html + ('<li class = "sdli">' + '<span class = "sdspan>1</span>'.times(9) + '</li>').times(9) + '</ul>';
        $("body").prepend(html);
        
        for (var k = 0; k < 9; k++){
            $(".sdli:eq("+ k +") .sdspan").eq(2).addClass('br');
            $(".sdli:eq("+ k +") .sdspan").eq(5).addClass('br');
            $(".sdli:eq("+ k +") .sdspan").eq(3).addClass('bl');
            $(".sdli:eq("+ k +") .sdspan").eq(6).addClass('bl');
        }
        $(".sdli:eq(2) .sdspan,.sdli:eq(5) .sdspan").addClass("bb");
        $(".sdli:eq(3) .sdspan,.sdli:eq(6) .sdspan").addClass("bt");
    }
}

