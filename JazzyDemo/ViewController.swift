//
//  ViewController.swift
//  JazzyDemo
//
//  Created by Yudiz Solutions Pvt. Ltd. on 31/01/17.
//  Copyright © 2017 Yudiz Solutions Pvt. Ltd. All rights reserved.
//

import UIKit

/// ViewController is used to demonstrate the alert view example.
class ViewController: UIViewController {

    // MARK: Methods
    /// It's parent class `UIViewController` methods that will be override here.
    override func viewDidLoad() {
        super.viewDidLoad()
    }
    
    // MARK: IBActions
    /// Action perform when user tap on `SimpleAlert` button.
    /// It will display alert with action buttons.
    @IBAction func onSimpleAlertTap(_ sender: UIButton) {
        Alert.showAlertView(inController: self, title: "SimpleAlert", message: "Displaying simple alert for user to perform action") { (tapAction) in
            // User tapping action got in `tapAction`
            print("User tapped on : \(tapAction)")
        }
    }
    
    /// Action perform when user tap on `AlertWithTextField` button.
    /// It will display alert with input textfield and action button.
    @IBAction func onAlertWithTextFieldTap(_ sender: UIButton) {
        Alert.showInputFieldAlertView(inController: self, title: "AlertWithTextFiled", message: "Displaying alert with textField to handle user input", placeHolder: "Enter some texts") { (inputtedString) in
            // User inputted string got in `inputtedString`
            print("User inputted string is : \(inputtedString)")
        }
    }
}
