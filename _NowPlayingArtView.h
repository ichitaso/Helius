/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 2, 2014 at 5:08:39 PM Mountain Daylight Time
 * Operating System: Version 7.0.4 (Build 11B554a)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */
#import <UIKit/UIView.h>

@interface _NowPlayingArtView : UIView {
	UIView* _ArtworkView; 
	int _orientation; 
}
@property (nonatomic,retain) UIView* ArtworkView; 				//@synthesize artworkView=_artworkView - In the implementation block
@property (assign,nonatomic) int orientation; 				//@synthesize orientation=_orientation - In the implementation block
-(void)layoutSubviews;
-(void)setOrientation:(int)arg1;
//-(void).cxx_destruct;
-(void)cxx_destruct;
-(void)setArtworkView:(id)arg1;
-(CGSize)_artworkSize;
@end