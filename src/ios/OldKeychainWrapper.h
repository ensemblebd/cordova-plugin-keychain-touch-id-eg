//
//  KeychainWrapper.h
//  Apple's Keychain Services Programming Guide
//
//  Created by Tim Mitra on 11/17/14.
//  Copyright (c) 2014 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Security/Security.h>

@interface OldKeychainWrapper : NSObject

- (void)mySetObject:(id)inObject forKey:(id)key;
- (id)myObjectForKey:(id)key;
- (void)writeToKeychain;
- (void)resetKeychainItem;

@end
