//
//  MSSPageViewControllerPrivate.h
//  Paged Tabs Example
//
//  Created by Merrick Sapsford on 28/03/2016.
//  Copyright © 2016 Merrick Sapsford. All rights reserved.
//

@interface MSSPageViewController () <UIScrollViewDelegate>

/**
 The default page index of the page view controller.
 */
@property (nonatomic, assign, readonly) NSInteger defaultPageIndex;

/**
 The current active page index of the page view controller.
 */
@property (nonatomic, assign) NSInteger currentPage;

@property (nonatomic, assign) BOOL userInteractionEnabled;

@end