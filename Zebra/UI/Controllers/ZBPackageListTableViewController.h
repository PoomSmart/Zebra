//
//  ZBPackageListTableViewController.h
//  Zebra
//
//  Created by Wilson Styres on 11/30/18.
//  Copyright © 2018 Wilson Styres. All rights reserved.
//

@import UIKit;
#import <Extensions/ZBRefreshableTableViewController.h>
#import "ZBPackageViewController.h"

@class ZBSource;
@class ZBDatabaseManager;

NS_ASSUME_NONNULL_BEGIN

@interface ZBPackageListTableViewController : ZBRefreshableTableViewController
@property (nonatomic, strong) ZBSource *source;
@property (nonatomic, strong) NSString *section;
@property (nonatomic, assign) BOOL batchLoad;
@property (nonatomic, assign) BOOL isPerformingBatchLoad;
@property (nonatomic, assign) BOOL continueBatchLoad;
@property (nonatomic, assign) int batchLoadCount;
@property (readwrite, copy, nonatomic) NSArray <NSArray *> *tableData;
- (void)refreshTable;
- (NSArray *)contextMenuActionItemsForIndexPath:(NSIndexPath *)indexPath;
@end

NS_ASSUME_NONNULL_END
