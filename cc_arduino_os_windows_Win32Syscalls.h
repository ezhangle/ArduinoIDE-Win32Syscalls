/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class cc_arduino_os_windows_Win32Syscalls */

#ifndef _Included_cc_arduino_os_windows_Win32Syscalls
#define _Included_cc_arduino_os_windows_Win32Syscalls
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     cc_arduino_os_windows_Win32Syscalls
 * Method:    detectSystemDPI
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_cc_arduino_os_windows_Win32Syscalls_detectSystemDPI
  (JNIEnv *, jclass);

/*
 * Class:     cc_arduino_os_windows_Win32Syscalls
 * Method:    nativeGetLocalAppDataFolder
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_cc_arduino_os_windows_Win32Syscalls_nativeGetLocalAppDataFolder
  (JNIEnv *, jclass);

/*
 * Class:     cc_arduino_os_windows_Win32Syscalls
 * Method:    nativeGetRoamingAppDataFolder
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_cc_arduino_os_windows_Win32Syscalls_nativeGetRoamingAppDataFolder
  (JNIEnv *, jclass);

/*
 * Class:     cc_arduino_os_windows_Win32Syscalls
 * Method:    nativeGetDocumentsFolder
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_cc_arduino_os_windows_Win32Syscalls_nativeGetDocumentsFolder
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
