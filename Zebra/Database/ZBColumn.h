//
//  ZBColumn.h
//  Zebra
//
//  Created by Thatchapon Unprasert on 1/6/2019
//  Copyright © 2019 Wilson Styres. All rights reserved.
//

#ifndef ZBColumn_h
#define ZBColumn_h

typedef NS_ENUM(NSUInteger, ZBPackageColumn) {
    // Base Package Columns
    ZBPackageColumnAuthorName,
    ZBPackageColumnDescription,
    ZBPackageColumnIdentifier,
    ZBPackageColumnLastSeen,
    ZBPackageColumnName,
    ZBPackageColumnVersion,
    ZBPackageColumnSection,
    
    // Package Columns
    ZBPackageColumnAuthorEmail,
    ZBPackageColumnConflicts,
    ZBPackageColumnDepends,
    ZBPackageColumnDepictionURL,
    ZBPackageColumnDownloadSize,
    ZBPackageColumnEssential,
    ZBPackageColumnFilename,
    ZBPackageColumnHomepageURL,
    ZBPackageColumnIconURL,
    ZBPackageColumnInstalledSize,
    ZBPackageColumnMaintainerEmail,
    ZBPackageColumnMaintainerName,
    ZBPackageColumnPriority,
    ZBPackageColumnProvides,
    ZBPackageColumnReplaces,
    ZBPackageColumnRole,
    ZBPackageColumnSHA256,
    ZBPackageColumnTag,
    ZBPackageColumnUUID,
    ZBPackageColumnSource,
};

typedef NS_ENUM(NSUInteger, ZBSourceColumn) {
    ZBSourceColumnArchitectures,
    ZBSourceColumnArchiveType,
    ZBSourceColumnCodename,
    ZBSourceColumnComponents,
    ZBSourceColumnDistribution,
    ZBSourceColumnLabel,
    ZBSourceColumnOrigin,
    ZBSourceColumnRemote,
    ZBSourceColumnDescription,
    ZBSourceColumnSuite,
    ZBSourceColumnURL,
    ZBSourceColumnUUID,
    ZBSourceColumnVersion,
};

#endif /* ZBColumn_h */
