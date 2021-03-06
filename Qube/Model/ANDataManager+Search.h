//
//  ANDataManager+Search.h
//  Qube
//
//  Created by Alex Nichol on 8/18/13.
//  Copyright (c) 2013 Alex Nichol. All rights reserved.
//

#import "ANDataManager.h"

@interface ANDataManager (Search)

+ (BOOL)puzzleName:(NSString *)name isEqual:(NSString *)otherName;

- (id)findManagedObject:(NSString *)name withIdentifier:(NSData *)identifier;

- (OCAccountChange *)findAccountChangeForAttribute:(NSString *)attribute;

- (ANPuzzle *)findPuzzleForId:(NSData *)identifier;
- (ANPuzzle *)findPuzzleForName:(NSString *)name;
- (OCPuzzleDeletion *)findPuzzleDeletionForId:(NSData *)identifier;
- (OCPuzzleSetting *)findSettingAttribute:(NSString *)attr forPuzzle:(ANPuzzle *)puzzle;

- (ANSession *)findSessionForId:(NSData *)identifier;
- (OCSessionDeletion *)findSessionDeletionForId:(NSData *)identifier;

- (NSArray *)findPuzzlesWithImageHash:(NSData *)hash;

@end
