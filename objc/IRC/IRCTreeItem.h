// Created by Satoshi Nakagawa.
// You can redistribute it and/or modify it under the Ruby's license or the GPL2.

#import <Cocoa/Cocoa.h>


@class IRCClient;
@class LogController;


@interface IRCTreeItem : NSObject
{
	LogController* log;
	BOOL isKeyword;
	BOOL isUnread;
	BOOL isNewTalk;
}

@property (nonatomic, assign) BOOL isKeyword;
@property (nonatomic, assign) BOOL isUnread;
@property (nonatomic, assign) BOOL isNewTalk;
@property (nonatomic, readonly) BOOL isActive;
@property (nonatomic, readonly) BOOL isClient;
@property (nonatomic, readonly) IRCClient* client;
@property (nonatomic, retain) LogController* log;
@property (nonatomic, readonly) NSString* label;

- (void)resetState;
- (int)numberOfChildren;
- (IRCTreeItem*)childAtIndex:(int)index;

@end
