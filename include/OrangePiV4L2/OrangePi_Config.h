#ifndef _ORANGEPI_CONFIG_H_
#define _ORANGEPI_CONFIG_H_
#include <OrangePiV4L2/OrangePiV4L2.h>

/* Get OrangePi configure */
int OrangePi_Parse_Configure(struct OrangePi_v4l2_configure *);

/* Show current camera configure */
void OrangePi_Show_Current_Camera_Configure(void);

/* Release all resource */
void OrangePi_Configure_Release(void);

char *OrangePi_Get_Camera_Name(void);
char *OrangePi_Get_Device_Name(void);
int OrangePi_Get_Capture_Width(void);
int OrangePi_Get_Capture_Height(void);
int OrangePi_Get_Capture_Format(void);
int OrangePi_Get_Capture_FPS(void);
int OrangePi_Get_Buffer_Number(void);
int OrangePi_Get_DEBUG(void);
int OrangePi_Get_Capture_Timeout(void);
char *OrangePi_Get_Platform(void);
struct OrangePi_v4l2_configure *OrangePi_Get_Private_Configure(void);

#endif
