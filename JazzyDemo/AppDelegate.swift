//
//  AppDelegate.swift
//  JazzyDemo
//
//  Created by Yudiz Solutions Pvt. Ltd. on 30/01/17.
//  Copyright © 2017 Yudiz Solutions Pvt. Ltd. All rights reserved.
//

import UIKit

/// AppDelegate is a class that does something on behalf of another class, and the AppDelegate is a place to handle special UIApplication states. It has a bunch of functions called by iOS.
@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {
    
    // MARK: Variables
    /// The app delegate must implement the window property if it wants to use a main storyboard file.
    var window: UIWindow?
    
    // MARK: Methods
    /// Override point for customization after application launch.
    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplicationLaunchOptionsKey: Any]?) -> Bool {
        return true
    }
}
