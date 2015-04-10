//
//  ViewController.h
//  RecordPlayAudio
//
//  Created by shael verma on 27/04/14.
//  Copyright (c) 2014 shael verma. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController<AVAudioRecorderDelegate,AVAudioPlayerDelegate>
{
   IBOutlet UIButton *recordPauseButton;
   IBOutlet UIButton *stopButton;
   IBOutlet UIButton *playButton;
}
- (IBAction)recordPauseTapped:(id)sender;
- (IBAction)stopTapped:(id)sender;
- (IBAction)playTapped:(id)sender;
@end
