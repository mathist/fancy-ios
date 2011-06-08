//    Copyright 2011 Felipe Cypriano
// 
//    Licensed under the Apache License, Version 2.0 (the "License");
//    you may not use this file except in compliance with the License.
//    You may obtain a copy of the License at
// 
//        http://www.apache.org/licenses/LICENSE-2.0
// 
//    Unless required by applicable law or agreed to in writing, software
//    distributed under the License is distributed on an "AS IS" BASIS,
//    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//    See the License for the specific language governing permissions and
//    limitations under the License.

#import <Foundation/Foundation.h>


@interface FCRangeSlider : UIControl {
@private
    UIImageView *outRangeTrackView;
    UIImageView *inRangeTrackView;
    UIImageView *minimumThumbView;
    UIImageView *maximumThumbView;
    UIView *thumbBeingDragged;
}

@property (nonatomic, assign) CGFloat minimumValue;
@property (nonatomic, assign) CGFloat maximumValue;

- (void)setOutRangeTrackImage:(UIImage *)image forState:(UIControlState)state;
- (void)setInRangeTrackImage:(UIImage *)image forState:(UIControlState)state;
- (void)setThumbImage:(UIImage *)image forState:(UIControlState)state;


@end