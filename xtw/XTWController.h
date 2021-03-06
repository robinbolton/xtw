//
//  XTWController.h
//  xtw
//
//  Created by Tom MacWright on 11/22/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XTWController : NSObject
{
    NSStatusItem *statusItem;
    NSMenu *menu;
    NSTimer *automaticUpdateTimer;
    NSString *pendingPath;
    NSString *taskContents;
    NSMenuItem *quitMI;
    NSMenuItem *aboutMI;
    BOOL darkModeOn;
    NSColor *textColor;
}
@end
