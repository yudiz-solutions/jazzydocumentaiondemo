// Generated by Apple Swift version 3.0.2 (swiftlang-800.0.63 clang-800.0.42.1)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIViewController;
@class NSBundle;
@class NSCoder;

/**
  Generates user event driven alerts.
  It used to displays an alert message to the user. It is extended from \code
  UIAlertController
  \endcode. This class replace the \code
  UIAlertView
  \endcode class for displaying alerts.
*/
SWIFT_CLASS("_TtC9JazzyDemo5Alert")
@interface Alert : UIAlertController
/**
  It will use to handle user tapping action. It will invoke when user tap on alert button.
*/
@property (nonatomic, copy) void (^ _Nullable userAction)(NSString * _Nonnull);
/**
  Displays alert over passed view controller with title, message and buttons.
  <h2>Usage Example:</h2>
  \code
  Alert.showAlertView(inController: presentingViewController, title: "Title of the Alert", message: "Main message presented in the alert")


  \endcode<em>Note :</em> If you wants to handle user tap action then you must be use userAction parameter
  \param inController InController over which the alert is presented. Should use self, or provide view controller name.

  \param title Title of the alert

  \param message Main message presented in the alert

  \param userAction UserAction optional parameter, it invoked when user tap on particular button in alert.

*/
+ (void)showAlertViewInController:(UIViewController * _Nonnull)inController title:(NSString * _Nonnull)title message:(NSString * _Nonnull)message userAction:(void (^ _Nullable)(NSString * _Nonnull))userAction;
/**
  Displays alert over passed view controller with input textField, title, message and buttons.
  <h2>Usage Example:</h2>
  \code
  Alert.showInputFieldAlertView(inController: presentingViewController, title: "Title of the Alert", message: "Main message presented in the alert", placeHolder: "Textfield placeholder texts") { (inputtedString) in
      print("User inputted texts : \(inputtedString)")
  }

  \endcode\param inController InController over which the alert is presented. Should use self, or provide view controller name.

  \param title Title of the alert

  \param message Main message presented in the alert

  \param placeHolder Textfield placeholder texts

  \param inputtedString InputtedString is block parameter, it invoked when user tap on button in alert and it returns user inputted string.

*/
+ (void)showInputFieldAlertViewInController:(UIViewController * _Nonnull)inController title:(NSString * _Nonnull)title message:(NSString * _Nonnull)message placeHolder:(NSString * _Nonnull)placeHolder inputtedString:(void (^ _Nonnull)(NSString * _Nullable))inputtedString;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIWindow;
@class UIApplication;

/**
  AppDelegate is a class that does something on behalf of another class, and the AppDelegate is a place to handle special UIApplication states. It has a bunch of functions called by iOS.
*/
SWIFT_CLASS("_TtC9JazzyDemo11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
/**
  The app delegate must implement the window property if it wants to use a main storyboard file.
*/
@property (nonatomic, strong) UIWindow * _Nullable window;
/**
  Override point for customization after application launch.
*/
- (BOOL)application:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary<UIApplicationLaunchOptionsKey, id> * _Nullable)launchOptions;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIButton;

/**
  ViewController is used to demonstrate the alert view example.
*/
SWIFT_CLASS("_TtC9JazzyDemo14ViewController")
@interface ViewController : UIViewController
/**
  It’s parent class \code
  UIViewController
  \endcode methods that will be override here.
*/
- (void)viewDidLoad;
/**
  Action perform when user tap on \code
  SimpleAlert
  \endcode button.
  It will display alert with action buttons.
*/
- (IBAction)onSimpleAlertTap:(UIButton * _Nonnull)sender;
/**
  Action perform when user tap on \code
  AlertWithTextField
  \endcode button.
  It will display alert with input textfield and action button.
*/
- (IBAction)onAlertWithTextFieldTap:(UIButton * _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop