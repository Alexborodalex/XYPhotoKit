//
//  XYPhotoKitHelper.h
//  XYPhotoKitDemo-iOS
//
//  Created by XcodeYang on 30/08/2017.
//  Copyright © 2017 XcodeYang. All rights reserved.
//

@import UIKit;


CG_INLINE CGSize
CGSizeScale(CGSize size, CGFloat scale) {
	return CGSizeMake(size.width * scale, size.height * scale);
}

@interface XYPhotoKitHelper : NSObject

//通知名字
FOUNDATION_EXPORT const struct XYPhotoMultiImagePickerNotifications {
    // asset 添加或删除.
    __unsafe_unretained NSString *assetsChanged;
	// 成功删除
	__unsafe_unretained NSString *assetsDeleted;
	// 成功添加
	__unsafe_unretained NSString *assetsAdded;

} XYPhotoMultiImagePickerNotifications;


FOUNDATION_EXPORT const struct XYPhotoImagePickerName {
	__unsafe_unretained NSString *selectAnAlbum;
	__unsafe_unretained NSString *cameraRoll;
} XYPhotoImagePickerName;


+ (BOOL)isAvailableAccessPhoto;

+ (BOOL)isAuthorizedAccessPhoto;

+ (BOOL)isAvailableAccessCamera;

+ (BOOL)isAuthorizedAccessCamera;


@end


