//
//  RRGSword.h
//  RoboRogue
//
//  Created by 山本政徳 on 2014/03/24.
//  Copyright (c) 2014年 山本政徳. All rights reserved.
//

#import "RRGItem.h"

@interface RRGSword : RRGSwordOrShield <NSCoding>
-(void)didAttackToCharacter:(RRGCharacter*)target;
@end
@interface Wooden_Sword : RRGSword <NSCoding>
@end
@interface Sword_of_Glass : RRGSword <NSCoding>
@end
@interface Katana : RRGSword <NSCoding>
@end
