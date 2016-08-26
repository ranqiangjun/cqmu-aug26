(function($) {
    $(function() {
        $('#cqmu-list a').click(function(e) {
            e.preventDefault();
            e.stopPropagation();
            var nid = $(this).attr('id');
            $.ajax({
                url: '/item/' + nid,
                success: function(data) {
                    $("#title").html(data.title);
                    $("#body").html(data.body);
                }
            })
        });
    });
})(jQuery);