//
//  MPGlobal.h
//  MoPub
//
//  Created by Andrew He on 5/5/11.
//  Copyright 2011 MoPub, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

CGRect MPScreenBounds();
CGFloat MPDeviceScaleFactor();
NSString *hashedMoPubUDID();

@interface NSString (MPAdditions)

/* 
 * Returns string with reserved/unsafe characters encoded.
 */
- (NSString *) URLEncodedString;

@end