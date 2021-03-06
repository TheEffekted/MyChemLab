//
//  TheSimulation.h
//  Biodiesel Simulation
//
//  Created by Kyle Zawacki on 10/23/14.
//  Copyright (c) 2014 UW Parkside. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TheSimulation : NSObject

- (NSDictionary*)getTheResult;
- (void)initDataWith:(float)initOil methanol:(float)initMethanol catalyst:(float)initCatalyst temperature:(float)initTemperature mixingLength:(float)timetoreact andSettlingTime:(float)timetosettle;
- (void)setup;
- (bool)loop;

@property(nonatomic) float TGout;
@property(nonatomic) float DGout;
@property(nonatomic) float MGout;
@property(nonatomic) float Mout;
@property(nonatomic) float Eout;
@property(nonatomic) float Convout;
@property(nonatomic) float Costs;

@end
