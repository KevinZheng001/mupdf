#import <UIKit/UIKit.h>
#import "MuTapResult.h"
//#import "MuSignView.h"
//#import "MuHanddrawView.h"

@protocol MuPageView
-(int) number;
-(void) willRotate;
-(void) showLinks;
-(void) hideLinks;
-(void) showSearchResults: (int)count;
-(void) clearSearchResults;
-(void) resetZoomAnimated: (BOOL)animated;
-(void) setScale:(float)scale;
-(MuTapResult *) handleTap:(CGPoint)pt;
-(void) textSelectModeOn;
-(void) textSelectModeOff;
-(void) deselectAnnotation;
-(void) deleteSelectedAnnotation;
-(void) inkModeOn;
-(void) inkModeOff;

// add by zl[2016/11/16 17:30]
// for add signature
-(void) signModeOn;
-(void) signModeOff;
-(void) handsignModeOn;
-(void) handsignModeOff;
-(void) beginAddSignature;
//-(MuSignView*) signview;
//-(MuHanddrawView*) handSignview;

-(void) saveSelectionAsMarkup:(int)type;
-(void) saveInk;
-(void) saveContentStream;
-(void) update;
@end
