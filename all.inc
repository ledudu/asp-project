<%@ LANGUAGE="JScript" CODEPAGE=65001 %>
<!--#include file="connection.inc"-->
<!--#include file="helpers.inc"-->
<%
var flash = new String(Session("flash") || "");
Session.Contents.Remove("flash");

var form_values = form2arr(Request);

var method = Request.ServerVariables("REQUEST_METHOD");
%>