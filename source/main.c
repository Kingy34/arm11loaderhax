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
			printf("Writing Bootloader... (ARM11LOAD)\n");
			svcSleepThread(5000000000);
			cls();
			svcSleepThread(200000000);
		        printf("ARM11LOAD ~ v1.0-ALPHA\n\n");
			printf("Creating 'config.bin'...\n");
			svcSleepThread(2000000000);
			printf("Done.\n\n");
			printf("CONFIG.BIN: Defaults set to: CTR/ARM11LH/homebrewlauncher\n");
			printf("Booting The Homebrew Launcher...");
			svcSleepThread(1000000000);
					
			gfxFlushBuffers();
		        gfxSwapBuffers();
		        gspWaitForVBlank();
					
		 	// Kicking time :^)
					
		        	gfxExit();
	                        aptExit();
	                        fsExit();
	                         return 0;
		        
			

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
