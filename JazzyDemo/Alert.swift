//
//  Alert.swift
//  JazzyDemo
//
//  Created by Yudiz Solutions Pvt. Ltd. on 30/01/17.
//  Copyright © 2017 Yudiz Solutions Pvt. Ltd. All rights reserved.
//

import UIKit
import Foundation

/// Generates user event driven alerts.
/// It used to displays an alert message to the user. It is extended from `UIAlertController`. This class replace the `UIAlertView` class for displaying alerts.
class Alert: UIAlertController {

    // MARK: Variables
    /// It will use to handle user tapping action. It will invoke when user tap on alert button.
    var userAction: ((_ action: String) -> ())? = nil
    
    
    // MARK: Methods
    /**
     Displays alert over passed view controller with title, message and buttons.

     - Parameters:
        - inController: InController over which the alert is presented. Should use self, or provide view controller name.
        - title: Title of the alert
        - message: Main message presented in the alert
        - userAction: UserAction optional parameter, it invoked when user tap on particular button in alert.

     ## Usage Example: ##
     ````
     Alert.showAlertView(inController: presentingViewController, title: "Title of the Alert", message: "Main message presented in the alert")
     
     ````
     **Note :** If you wants to handle user tap action then you must be use userAction parameter
    */
    class public func showAlertView(inController: UIViewController, title: String, message: String, userAction: ((String) -> ())? = nil) {
        let alert = Alert(title: title, message: message, preferredStyle: .alert)
        alert.addAction(UIAlertAction(title: "Yes", style: .default, handler: { (action) in
           userAction?("Yes")
        }))
        alert.addAction(UIAlertAction(title: "No", style: .destructive, handler: { (action) in
            userAction?("No")
        }))
        inController.present(alert, animated: true, completion: nil)
    }
    
    /**
     Displays alert over passed view controller with input textField, title, message and buttons.
     
     - Parameters:
        - inController: InController over which the alert is presented. Should use self, or provide view controller name.
        - title: Title of the alert
        - message: Main message presented in the alert
        - placeHolder: Textfield placeholder texts
        - inputtedString: InputtedString is block parameter, it invoked when user tap on button in alert and it returns user inputted string.
     
     ## Usage Example: ##
     ````
     Alert.showInputFieldAlertView(inController: presentingViewController, title: "Title of the Alert", message: "Main message presented in the alert", placeHolder: "Textfield placeholder texts") { (inputtedString) in
         print("User inputted texts : \(inputtedString)")
     }
     ````
    */
    class public func showInputFieldAlertView(inController: UIViewController, title: String, message: String, placeHolder: String, inputtedString: @escaping ((String?) -> ())) {
        let alertEmailAddress = Alert(title: title, message: message, preferredStyle: .alert)
        alertEmailAddress.addTextField { (txtEmailAddress) in
            txtEmailAddress.placeholder = placeHolder
            txtEmailAddress.keyboardType = .emailAddress
        }
        alertEmailAddress.addAction(UIAlertAction(title: "Ok", style: .default, handler: { (action) in
            inputtedString(alertEmailAddress.textFields?[0].text)
        }))
        inController.present(alertEmailAddress, animated: true, completion: nil)
    }
}
