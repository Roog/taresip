--- baresip/src/config.c.bad	2020-05-22 00:20:59.000000000 -0700
+++ baresip/src/config.c	2020-05-22 00:20:24.000000000 -0700
@@ -435,7 +435,7 @@
 #if defined (ANDROID)
 	return "opensles,nil";
 #elif defined (DARWIN)
-	return "coreaudio,default";
+	return "audiounit,default";
 #elif defined (FREEBSD)
 	return "oss,/dev/dsp";
 #elif defined (OPENBSD)
@@ -741,8 +741,8 @@
 #if defined (ANDROID)
 	(void)re_fprintf(f, "module\t\t\t" "opensles" MOD_EXT "\n");
 #elif defined (DARWIN)
-	(void)re_fprintf(f, "module\t\t\t" "coreaudio" MOD_EXT "\n");
-	(void)re_fprintf(f, "#module\t\t\t" "audiounit" MOD_EXT "\n");
+	(void)re_fprintf(f, "#module\t\t\t" "coreaudio" MOD_EXT "\n");
+	(void)re_fprintf(f, "module\t\t\t" "audiounit" MOD_EXT "\n");
 #elif defined (FREEBSD)
 	(void)re_fprintf(f, "module\t\t\t" "oss" MOD_EXT "\n");
 #elif defined (OPENBSD)
