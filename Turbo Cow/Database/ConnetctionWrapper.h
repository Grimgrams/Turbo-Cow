//
//  ConnetctionWrapper.h
//  Turbo Cow
//
//  Created by Julian Pitterson on 2022-12-24.
//

#ifndef ConnetctionWrapper_h
#define ConnetctionWrapper_h

#import <Foundation/Foundation.h>


@interface DBConnectionLink : NSObject
-(int) PostData:(NSString*)dateTime :(NSString*)name :(NSString*)data;
-(int) GetData:(NSString*)dateTime :(NSString*)name :(NSString*)data;
-(int) UpdateData:(NSString*)dateTime :(NSString*)name :(NSString*)data;
-(int) DeleteData:(NSString*)dateTime :(NSString*)name :(NSString*)data;
@end

#endif /* ConnetctionWrapper_h */
