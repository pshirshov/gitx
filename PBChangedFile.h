//
//  PBChangedFile.h
//  GitX
//
//  Created by Pieter de Bie on 22-09-08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "PBGitRepository.h"

typedef enum {
	NEW,
	MODIFIED,
	DELETED
} PBChangedFileStatus;
	
@interface PBChangedFile : NSObject {
	NSString *path;
	PBGitRepository *repository;
	PBChangedFileStatus status;
}


@property (readonly) NSString *path;
@property (assign) PBChangedFileStatus status;

- (NSImage *)icon;
- (NSString *)changes;


- (id) initWithPath:(NSString *)p andRepository:(PBGitRepository *)r;
@end