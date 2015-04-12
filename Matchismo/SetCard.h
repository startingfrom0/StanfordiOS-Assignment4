//
//  SetCard.h
//  Matchismo
//
//  Created by Alex Smith on 6/04/2015.
//  Copyright (c) 2015 Game House. All rights reserved.
//

#import "Card.h"

@interface SetCard : Card

@property (strong, nonatomic) NSNumber *number;
@property (strong, nonatomic) NSNumber *symbol;
@property (strong, nonatomic) NSNumber *shading;
@property (strong, nonatomic) NSNumber *colour;

@end
