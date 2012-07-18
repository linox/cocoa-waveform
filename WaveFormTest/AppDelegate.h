//
//  AppDelegate.h
//  WaveFormTest
//
//  Created by Gyetván András on 6/28/12.
//  Copyright (c) 2012 DroidZONE. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "WaveFormViewOSX.h"

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;
@property (assign) IBOutlet WaveFormViewOSX *wfv;
- (IBAction)loadAudioFile:(id)sender;

@end
