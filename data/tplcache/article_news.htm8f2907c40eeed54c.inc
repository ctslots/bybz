<?php
$z[0]=Array("field","",84,103);
$z[0][4]['name']="title";
$z[1]=Array("global","",104,130);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",175,197);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",241,292);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("global","",528,557);
$z[4][4]['name']="cfg_templeturl";
$z[5]=Array("global","",622,651);
$z[5][4]['name']="cfg_templeturl";
$z[6]=Array("global","",736,765);
$z[6][4]['name']="cfg_templeturl";
$z[7]=Array("global","",838,867);
$z[7][4]['name']="cfg_templeturl";
$z[8]=Array("global","",919,948);
$z[8][4]['name']="cfg_templeturl";
$z[9]=Array("global","",1003,1032);
$z[9][4]['name']="cfg_templeturl";
$z[10]=Array("global","",1181,1210);
$z[10][4]['name']="cfg_templeturl";
$z[11]=Array("global","",1317,1346);
$z[11][4]['name']="cfg_templeturl";
$z[12]=Array("channel","\r\n            <li><a href=\"[field:typeurl/]\">[field:typename/]</a></li>\r\n            ",1588,1810);
$z[12][4]['type']="top";
$z[12][4]['currentstyle']="<li class='active'><a href='~typelink~' style='color:white;'>~typename~</a></li>";
$z[13]=Array("type","[field:typelink function='str_replace(\"/index.html\",\"\",@me)' /]",2369,2472);
$z[13][4]['typeid']="0";
$z[13][4]['row']="1";
$z[14]=Array("prenext","",2600,2628);
$z[14][4]['get']="preurl";
$z[15]=Array("prenext","",2800,2829);
$z[15][4]['get']="nexturl";
$z[16]=Array("field","",3055,3074);
$z[16][4]['name']="title";
$z[17]=Array("field","",3148,3200);
$z[17][4]['name']="pubdate";
$z[17][4]['function']="MyDate('Y-m-d',@me)";
$z[18]=Array("type","[field:typelink function='str_replace(\"/index.html\",\"\",@me)' /]",3219,3322);
$z[18][4]['typeid']="0";
$z[18][4]['row']="1";
$z[19]=Array("field","",3340,3369);
$z[19][4]['name']="typename";
$z[20]=Array("field","",3468,3495);
$z[20][4]['name']="phpurl";
$z[21]=Array("field","",3519,3542);
$z[21][4]['name']="id";
$z[22]=Array("field","",3547,3571);
$z[22][4]['name']="mid";
$z[23]=Array("field","",3699,3717);
$z[23][4]['name']="body";
$z[24]=Array("tag","\r\n              <dd><a href=\"[field:link/]\" target=\"_blank\">[field:tag /]</a></dd>\r\n              ",3870,4000);
$z[24][4]['getall']="0";
$z[25]=Array("global","",4667,4696);
$z[25][4]['name']="cfg_templeturl";
$z[26]=Array("arclist"," \r\n                <li>\r\n                  <a href=\"[field:arcurl/]\" target=\"_blank\" class=\"thumb\"><img src=\"[field:litpic/]\" /></a>\r\n                  <span class=\"title\"><a href=\"[field:arcurl/]\" target=\"_blank\" title=\"[field:title/]\">[field:title/] ...</a></span>\r\n                  <span class=\"rel\">[field:pubdate runphp='yes'] \$today = Floor(time()/(3600 * 24)); \$senday= Floor(@me/(3600 * 24)); \$updays = \$today-\$senday; if(\$updays==0) @me = \"今日\"; else @me = \$updays.\"天前\"; [/field:pubdate]<span class=\"glyphicon glyphicon-eye-open\" title=\"浏览次数\"></span>[field:click/]</span>\r\n                </li>\r\n                ",4897,5598);
$z[26][4]['row']="4";
$z[26][4]['titlelen']="30";
$z[26][4]['typeid']="top";
$z[27]=Array("global","",5826,5845);
$z[27][4]['name']="tell";
$z[28]=Array("global","",5963,5980);
$z[28][4]['name']="qq";
$z[29]=Array("field","",6514,6533);
$z[29][4]['name']="title";

?>