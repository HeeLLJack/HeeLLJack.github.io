$(function () {
  $("a.skroll").click(function () {
   let elementClick = $(this).attr("href")
   let destination = $(elementClick).offset().top;
   $("html:not(:animated),body:not(:animated)").animate({ scrollTop: destination }, 1000);
   return false;
  });
});

$(function () {
  $("a.skroll_1").click(function () {
   let elementClick = $(this).attr("href")
   let destination = $(elementClick).offset().top;
   $("html:not(:animated),body:not(:animated)").animate({ scrollTop: destination }, 1000);
   return false;
  });
});

$(function () {
  $("a.skroll_2").click(function () {
   let elementClick = $(this).attr("href")
   let destination = $(elementClick).offset().top;
   $("html:not(:animated),body:not(:animated)").animate({ scrollTop: destination }, 1000);
   return false;
  });
});

$(function () {
  $("a.skroll_3").click(function () {
   let elementClick = $(this).attr("href")
   let destination = $(elementClick).offset().top;
   $("html:not(:animated),body:not(:animated)").animate({ scrollTop: destination }, 1000);
   return false;
  });
});