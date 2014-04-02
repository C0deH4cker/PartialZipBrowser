//
//  PartialZipBrowser.c
//  PartialZipBrowser
//
//  Created by C0deH4cker on 4/1/14.
//  Copyright (c) 2014 C0deH4cker. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "partialzip.h"


char fname[1024];

void progress(ZipInfo* zip, CDFile* file, size_t size) {
	fprintf(stderr, "\rDownloading %s [%zu/%u (%.2f%%)]",
	        fname, size, file->compressedSize,
	        100 * (float)size/file->compressedSize);
}

int main(int argc, char* argv[]) {
	if(argc != 2) {
		fprintf(stderr, "Usage: %s <zip url>\n", argv[0]);
		return 1;
	}
	
	ZipInfo* zip = PartialZipInit(argv[1]);
	if(!zip) {
		fprintf(stderr, "Error loading zip from url <%s>.\n", argv[1]);
		return 1;
	}
	
	fprintf(stderr, "Files contained in zip:\n");
	PartialZipListFiles(zip);
	
	PartialZipSetProgressCallback(zip, progress);
	
	fprintf(stderr, "\nEnter filename(s) to download.\n[>] ");
	
	while(scanf("%1023s", fname) != EOF) {
		CDFile* file = PartialZipFindFile(zip, fname);
		if(!file) {
			fprintf(stderr, "Error: file '%s' not found in zip.\n", fname);
			continue;
		}
		
		fprintf(stderr, "Downloading file...\n");
		unsigned char* data = PartialZipGetFile(zip, file);
		
		fprintf(stderr, "\nEnter filename to save to:\n[>] ");
		if(scanf("%1023s", fname) == EOF) {
			free(data);
			break;
		}
		
		FILE* out = fopen(fname, "wb");
		if(!out) {
			fprintf(stderr, "Error opening output file '%s'!\n", fname);
			continue;
		}
		
		fwrite(data, 1, file->size, out);
		fclose(out);
		free(data);
		
		fprintf(stderr, "Successfully saved '%s'.\n[>] ", fname);
	}
	
	fprintf(stderr, "\nAll done!\n");
	
	PartialZipRelease(zip);
	
	return 0;
}

