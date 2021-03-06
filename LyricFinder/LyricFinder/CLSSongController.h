//
//  CLSSongController.h
//  LyricFinder
//
//  Created by Carolyn Lea on 10/5/18.
//  Copyright © 2018 Carolyn Lea. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Song.h"

static NSString * const lyricsGET = @"https://musixmatchcom-musixmatch.p.mashape.com/wsr/1.1/matcher.lyrics.get";
static NSString * const apiKey = @"iVSODYZpztmsh9efX06d2pLpHSQpp16cO7VjsndJ4L4RK7TlVr";

NS_ASSUME_NONNULL_BEGIN

@interface CLSSongController : NSObject

@property (nonatomic, copy, readonly) NSArray *songs;

-(void)searchForSongWithArtist:(NSString *)artist trackName:(NSString *)trackName completion:(void (^)(NSString *lyrics, NSError *))completion;

-(void)createSongWithTitle:(NSString*)songTitle artist:(NSString*)artist lyrics:(NSString*)lyrics rating:(NSInteger)rating;

//- (void)updateSong:(Song *)song title:(NSString *)title artist:(NSString *)artist;

- (void)saveSongs;
- (NSArray *)loadSongs;

@end

NS_ASSUME_NONNULL_END
