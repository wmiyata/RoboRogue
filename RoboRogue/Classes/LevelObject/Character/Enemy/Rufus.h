//
//  Rufus.h
//  RoboRogue
//
//  Created by 山本政徳 on 2014/05/09.
//  Copyright (c) 2014年 山本政徳. All rights reserved.
//

#import "RRGEnemy.h"

@interface Rufus : RRGEnemy <NSCoding>
@end

@interface AngryRufus : Rufus <NSCoding>
@end

@interface MadRufus : Rufus <NSCoding>
@end