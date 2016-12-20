(function ($, Drupal) {

    jQuery(document).ready(function ($) {
        if ($('.place-autocomplete').size()) {
            var municipis = ["Alaró", "Alcúdia", "Algaida", "Andratx", "Ariany", "Artà", "Banyalbufar", "BinialiBinissalem", "Búger", "Bunyola", "Caimari", "Calvià", "Campanet", "Campos", "Capdepera", "Consell", "Costitx", "Deià", "Escorca", "Esporles", "Estellencs", "Felanitx", "Fornalutx", "Inca", "Lloret de Vistalegre", "Lloseta", "Llubí", "Llucmajor", "Manacor", "Mancor de la Vall", "Maria de la Salut", "Marratxí", "Montuïri", "Muro", "Palma", "Petra", "Pollença", "Porreres", "Puigpunyent", "Sa Pobla", "Sant Joan", "Sant Llorenç des Cardassar", "Santa Eugènia", "Santa Margalida", "Santa Maria del Camí", "Santanyí", "Selva", "Sencelles", "Ses Salines", "Sineu", "Sóller", "Son Servera", "Valldemossa", "Vilafranca de Bonany"];
            $('.place-autocomplete').autocomplete({
                source: municipis
            })
        }

        var dateToggle = document.getElementById('date-toggle');
        $(dateToggle).dateRangePicker({
            separator: ' a ',
            language: 'cat',
            format: 'D/M/Y',
            shortcuts: {
                'next-days': [3, 5, 7]
            },
            autoClose: true,
            customTopBar: 'Selecciona un període',
            startOfWeek: 'monday',
            setValue: function (s, s1, s2) {
                $('.start-date-picker').val(s1);
                $('.end-date-picker').val(s2);
                $(this).val(s1 + ' al ' + s2);
            }
        });
        $(dateToggle).on('click change blur', function(event) {
            event.preventDefault();
            var value = $(this).val().split(" al ");
            $('.start-date-picker').val(value[0]);
            $('.end-date-picker').val(value[1]);
        });
    });

})(jQuery, Drupal);