//
//  ProvisioningProfileNavigator.swift
//  XcodeWay
//
//  Created by Khoa Pham on 15/05/16.
//  Copyright © 2016 Fantageek. All rights reserved.
//

import Foundation

class ProvisioningProfileFolderNavigator: NSObject, Navigator {

  var title: String {
    return "Go To Provisioning Profiles Folder"
  }

  func navigate() {
    let path = FTGEnvironmentManager.sharedManager().libraryDirectoryPath()
    let url = NSURL(fileURLWithPath: path).URLByAppendingPathComponent("MobileDevice/Provisioning Profiles")

    NSWorkspace.sharedWorkspace().openURL(url)
  }
}
