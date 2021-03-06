//
//  Poison_Gas_Trap.m
//  RoboRogue
//
//  Created by 山本政徳 on 2014/04/09.
//  Copyright (c) 2014年 山本政徳. All rights reserved.
//

#import "Poison_Gas_Trap.h"
#import "RRGCharacter.h"

#import "RRGLevel.h"
#import "RRGLevel+Particle.h"
#import "RRGLevel+TurnSequence.h"
#import "RRGLevel+AddObject.h"

@implementation Poison_Gas_Trap
-(void)trapActionToCharacter:(RRGCharacter*)character
{
    if ([self.level inView:self.tileCoord]) {
        [self.level addParticleWithName:kParticlePoisonGas
                            atTileCoord:self.tileCoord
                                  sound:YES];
        [self.level addAction:[CCActionDelay actionWithDuration:.5f]];
    }
    
    [character setStatePoison:1];
}
@end
