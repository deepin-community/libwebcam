Index: libwebcam-0.2.4/libwebcam/CMakeLists.txt
===================================================================
--- libwebcam-0.2.4.orig/libwebcam/CMakeLists.txt	2013-10-31 14:47:36.000000000 -0700
+++ libwebcam-0.2.4/libwebcam/CMakeLists.txt	2014-11-28 15:29:32.063070089 -0800
@@ -103,7 +103,7 @@
 )
 
 install (
-	FILES	../common/include/webcam.h
+	FILES	../common/include/webcam.h ../common/include/dynctrl-logitech.h
 	DESTINATION 	${CMAKE_INSTALL_PREFIX}/include
 )
 
