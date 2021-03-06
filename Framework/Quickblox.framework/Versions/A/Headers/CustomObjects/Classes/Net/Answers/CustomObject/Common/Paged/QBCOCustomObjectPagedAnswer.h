//
//  QBCOCustomObjectPagedAnswer.h
//  Quickblox
//
//  Created by IgorKh on 8/18/12.
//  Copyright (c) 2012 QuickBlox. All rights reserved.
//

@interface QBCOCustomObjectPagedAnswer : XmlAnswer{
@private
    QBCOCustomObjectAnswer *customObjectAnswer;
	NSMutableArray *_objects;
    NSUInteger _count;
    NSUInteger _skip;
    NSUInteger _limit;
    
    BOOL countAnswer;
}
@property (nonatomic, readonly) NSMutableArray *objects;
@property (nonatomic, readonly) NSUInteger count;
@property (nonatomic, readonly) NSUInteger skip;
@property (nonatomic, readonly) NSUInteger limit;

@end
