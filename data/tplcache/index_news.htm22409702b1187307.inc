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
$z[10]=Array("include","",1085,1120);
$z[10][4]['filename']="head.htm";
$z[11]=Array("channel","\r\n        	<a href=\"[field:typeurl/]\" class=\"btn btn-default\">[field:typename/]</a>\r\n            ",1467,1691);
$z[11][4]['type']="son";
$z[11][4]['currentstyle']="<a href='~typelink~' class='btn btn-default btn-primary'>~typename~</a>";
$z[12]=Array("list","\r\n        	<li>\r\n              <p class=\"left\">\r\n                <span class=\"date\">[field:pubdate function=\"MyDate('d',@me)\"/]<u>[field:pubdate function='strftime(\"%b\",@me)'/]</u></span>\r\n                <a href=\"[field:arcurl/]\" target=\"_blank\" class=\"thumb\"><img src=\"[field:litpic/]\" alt=\"[field:title/]\" /></a>\r\n              </p>\r\n              <p class=\"right\">\r\n                <span class=\"title\"><a href=\"[field:arcurl/]\" target=\"_blank\">[field:title/]</a></span>\r\n                <span class=\"rel\">[field:pubdate runphp='yes'] \$today = Floor(time()/(3600 * 24)); \$senday= Floor(@me/(3600 * 24)); \$updays = \$today-\$senday; if(\$updays==0) @me = \"今日\"; else @me = \$updays.\"天前\"; [/field:pubdate]<u>•</u>围观热度 [field:click/]<u>•</u>[field:typelink/]</span>\r\n                <span class=\"summary\">[field:description/] . . .</span>\r\n                <span class=\"tags\">\r\n                	<span class=\"glyphicon glyphicon-tag\"></span>\r\n                    [field:id runphp='yes']\r\n                          global \$cfg_cmspath;\r\n                          \$tags = GetTags(@me);\r\n                          \$revalue = '';\r\n                          \$tags = explode(',', \$tags);\r\n                          foreach(\$tags as \$key => \$value){\r\n                          if(\$value){\r\n                              \$revalue .= '<a href=\"'.\$cfg_cmspath.'/tags.php?/'.\$value.'/\">'.\$value.'</a>&nbsp;';\r\n                              }\r\n                          }\r\n                          @me = \$revalue;\r\n                     [/field:id] \r\n                </span>\r\n              </p>\r\n            </li>\r\n            ",1810,3475);
$z[12][4]['pagesize']="10";
$z[13]=Array("pagelist","",3593,3649);
$z[13][4]['listitem']="pre,next,pageno";
$z[13][4]['listsize']="5";
$z[14]=Array("include","",3711,3746);
$z[14][4]['filename']="dock.htm";

?>