//
//  UIAlertView+Blocks.h
//  Shibui
//
//  Created by Jiva DeVoe on 12/28/10.
//  Copyright 2010 Random Ideas, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^AlertViewAction)();

@interface RIAlertViewButtonItem : NSObject
{
    NSString *label;
    AlertViewAction action;
}
@property (retain, nonatomic)  NSString *label;
@property (copy, nonatomic) AlertViewAction action;
+(id)item;
+(id)itemWithLabel:(NSString *)inLabel;
@end


@interface UIAlertView (Blocks)

-(id)initWithTitle:(NSString *)inTitle message:(NSString *)inMessage cancelButtonItem:(RIAlertViewButtonItem *)inCancelButtonItem otherButtonItems:(RIAlertViewButtonItem *)inOtherButtonItems, ... NS_REQUIRES_NIL_TERMINATION;

@end
