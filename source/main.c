#include <string.h>
#include <3ds.h>
#include <stdio.h>

void cls() {
	printf("\e[1;1H\e[2J");
}

int main()
{
	gfxInitDefault();
	consoleInit(GFX_TOP, NULL);
	aptInit();
    fsInit();
	
	     
	printf("\x1b[32mExecuting Kernel Hax...\x1b[0m\n");
	svcSleepThread(2000000000);
	
    cls();
	
 
	    printf("Arm11loaderhax installer\n");
		printf("Version 1.1-141171A\n");
		printf("Created by Kingy\n\n\n");
		printf("Press A to install!\n");
	
	// Main loop
	while (aptMainLoop())
	{
		gspWaitForVBlank();
		hidScanInput();
		u32 kDown = hidKeysDown();

				if (kDown & KEY_A) {
					cls();
			printf("Retrieving System Infomation...\n");
            svcSleepThread(5000000000);
			
			printf("Backing up kernel...\n");
            svcSleepThread(10000000000);
			
			printf("Done, Accessing servers...\n");
			svcSleepThread(5000000000);
			
			printf("Installing kernel patches...\n\n");
			svcSleepThread(200000000);
			printf("Installing backdoor payload... (1/3)\n");
			svcSleepThread(5000000000);
			printf("Patching kernel execution... (2/3)\n"); 
			svcSleepThread(10000000000);
			printf("\x1b[31mERROR: \x1b[0mCould not repair kernel damages, rebooting...\n");
			svcSleepThread(80000000000);
			printf("Reboot failed. Please use L R DOWN B.");

				}

		if (kDown & KEY_START)
			break;

		// Flush and swap frame-buffers
		gfxFlushBuffers();
		gfxSwapBuffers();
		gspWaitForVBlank();
	}

	gfxExit();
	aptExit();
	fsExit();
	return 0;
}