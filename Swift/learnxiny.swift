// import a module
import Foundation

// Single-line comments are prefixed with //
// Multi-line comments start with /* and end with */
/* Nested multiline comments
 /* ARE */
 allowed
 */

// Xcode supports landmarks to annotate your code and lists them in the jump bar
// MARK: Section mark
// MARK: - Section mark with a separator line
// TODO: Do something soon
// FIXME: Fix this code

//MARK: Hello, World
// From Swift 3 on, to print, just use the `print` method.
// It automatically appends a new line.
print("Hello, world")

//
// MARK: - Variables
//


//Use `let` to declare a constant and `var` to declare a variable.
let theAnswer = 42
var theQuestion = "What is the Answer?"
theQuestion = "How many roads must a man walk down?"
theQuestion = "What is six by nine?"
// Atttempting to reassign a constant throws a compile-time error
//theAnswer = 54

// Both variables and constants can be declared before they are given a value,
//   but must be given a value before they are used
let someConstant: Int
var someVariable: String
// These lines will throw errors:
//print(someConstant)
//print(someVariable)
someConstant = 0
someVariable = "0"
// These lines are now valid:
print(someConstant)
print(someVariable)

// As you can see above, variable types are automatically inferred.
//   To explicitly declare the type, write it after the variable name,
//   separated by a colon.
let aString: String = "A string"
let aDouble: Double = 0

// Values are never implicitly converted to another type.
// Explicitly make instances of the desired type.
let stringWithDouble = aString + String(aDouble)
let intFromDouble = Int(aDouble)

// For strings, use string interpolation
let descriptionString = "The value of aDouble is \(aDouble)"
// You can put any expression inside string interpolation.
let equation = "Six by nine is \(6 * 9), not 42!"
// To avoid escaping double quotes and backslashes, change the string delimiter
let explanationString = #"The string I used was "The value of aDouble is \(aDouble)" and the result was \#(descriptionString)"#
// You can put as many number signs as you want before the opening quote,
//   just match them at the ending quote. They also change the escape character
//   to a backslash followed by the same number of number signs.

let multiLineString = """
    This is a multi-line string.
    It's called that because it takes up multiple lines (wow!)
        Any indentation beyond the closing quotation marks is kept, the rest is discarded.
    You can include " or "" in multi-line strings because the delimiter is three "s.
    """

// Arrays
let shoppingList = ["catfish", "water", "tulips",] //commas are allowed after the last element
let secondElement = shoppingList[1] // Arrays are 0-indexed

// Arrays declared with let are immutable; the following line throws a compile-time error
//shoppingList[2] = "mango"

// Arrays are structs (more on that later), so this creates a copy instead of referencing the same object
var mutableShoppingList = shoppingList
mutableShoppingList[2] = "mango"

// == is equality
shoppingList == mutableShoppingList // false

// Dictionaries declared with let are also immutable
var occupations = [
    "Malcolm": "Captain",
    "Kaylee": "Mechanic"
]
occupations["Jayne"] = "Public Relations"
// Dictionaries are also structs, so this also creates a copy
let immutableOccupations = occupations

immutableOccupations == occupations // true

// Arrays and dictionaries both automatically grow as you add elements
mutableShoppingList.append("blue paint")
occupations["Tim"] = "CEO"

// They can both be set to empty
mutableShoppingList = []
occupations = [:]

let emptyArray = [String]()
let emptyArray2 = Array<String>() // same as above
// [T] is shorthand for Array<T>
let emptyArray3: [String] = [] // Declaring the type explicitly allows you to set it to an empty array
let emptyArray4: Array<String> = [] // same as above

// [Key: Value] is shorthand for Dictionary<Key, Value>
let emptyDictionary = [String: Double]()
let emptyDictionary2 = Dictionary<String, Double>() // same as above
var emptyMutableDictionary: [String: Double] = [:]
var explicitEmptyMutableDictionary: Dictionary<String, Double> = [:] // same as above

// MARK: Other variables
let øπΩ = "value" // unicode variable names
let 🤯 = "wow" // emoji variable names

// Keywords can be used as variable names
// These are contextual keywords that wouldn't be used now, so are allowed
let convenience = "keyword"
let weak = "another keyword"
let override = "another keyword"

// Using backticks allows keywords to be used as variable names even if they wouldn't be allowed normally
let `class` = "keyword"

// MARK: - Optionals

/*
 Optionals are a Swift language feature that either contains a value,
 or contains nil (no value) to indicate that a value is missing.
 Nil is roughly equivalent to `null` in other languages.
 A question mark (?) after the type marks the value as optional of that type.

 If a type is not optional, it is guaranteed to have a value.

 Because Swift requires every property to have a type, even nil must be
 explicitly stored as an Optional value.

 Optional<T> is an enum, with the cases .none (nil) and .some(T) (the value)
 */

var someOptionalString: String? = "optional" // Can be nil
// T? is shorthand for Optional<T> — ? is a postfix operator (syntax candy)
let someOptionalString2: Optional<String> = nil
let someOptionalString3 = String?.some("optional") // same as the first one
let someOptionalString4 = String?.none //nil

/*
 To access the value of an optional that has a value, use the postfix
 operator !, which force-unwraps it. Force-unwrapping is like saying, "I
 know that this optional definitely has a value, please give it to me."

 Trying to use ! to access a non-existent optional value triggers a
 runtime error. Always make sure that an optional contains a non-nil
 value before using ! to force-unwrap its value.
 */

if someOptionalString != nil {
    // I am not nil
    if someOptionalString!.hasPrefix("opt") {
        print("has the prefix")
    }
}

// Swift supports "optional chaining," which means that you can call functions
//   or get properties of optional values and they are optionals of the appropriate type.
// You can even do this multiple times, hence the name "chaining."

let empty = someOptionalString?.isEmpty // Bool?

// if-let structure -
// if-let is a special structure in Swift that allows you to check
//   if an Optional rhs holds a value, and if it does unwrap
//   and assign it to the lhs.
if let someNonOptionalStringConstant = someOptionalString {
    // has `Some` value, non-nil
    // someOptionalStringConstant is of type String, not type String?
    if !someNonOptionalStringConstant.hasPrefix("ok") {
        // does not have the prefix
    }
}

//if-var is allowed too!
if var someNonOptionalString = someOptionalString {
    someNonOptionalString = "Non optional AND mutable"
    print(someNonOptionalString)
}

// You can bind multiple optional values in one if-let statement.
//   If any of the bound values are nil, the if statement does not execute.
if let first = someOptionalString, let second = someOptionalString2,
    let third = someOptionalString3, let fourth = someOptionalString4 {
    print("\(first), \(second), \(third), and \(fourth) are all not nil")
}

//if-let supports "," (comma) clauses, which can be used to
//   enforce conditions on newly-bound optional values.
// Both the assignment and the "," clause must pass.
let someNumber: Int? = 7
if let num = someNumber, num > 3 {
    print("num is not nil and is greater than 3")
}

// Implicitly unwrapped optional — An optional value that doesn't need to be unwrapped
let unwrappedString: String! = "Value is expected."

// Here's the difference:
let forcedString = someOptionalString! // requires an exclamation mark
let implicitString = unwrappedString // doesn't require an exclamation mark

/*
 You can think of an implicitly unwrapped optional as giving permission
 for the optional to be unwrapped automatically whenever it's used.
 Rather than placing an exclamation mark after the optional's name each time you use it,
 you place an exclamation mark after the optional's type when you declare it.
 */

// Otherwise, you can treat an implicitly unwrapped optional the same way the you treat a normal optional
//   (i.e., if-let, != nil, etc.)

// Pre-Swift 5, T! was shorthand for ImplicitlyUnwrappedOptional<T>
// Swift 5 and later, using ImplicitlyUnwrappedOptional throws a compile-time error.
//var unwrappedString2: ImplicitlyUnwrappedOptional<String> = "Value is expected." //error

// The nil-coalescing operator ?? unwraps an optional if it contains a non-nil value, or returns a default value.
someOptionalString = nil
let someString = someOptionalString ?? "abc"
print(someString) // abc
// a ?? b is shorthand for a != nil ? a! : b

// MARK: - Control Flow

let condition = true
if condition { print("condition is true") } // can't omit the braces

if theAnswer > 50 {
    print("theAnswer > 50")
} else if condition {
    print("condition is true")
} else {
    print("Neither are true")
}

// The condition in an `if` statement must be a `Bool`, so the following code is an error, not an implicit comparison to zero
//if 5 {
//    print("5 is not zero")
//}

// Switch
// Must be exhaustive
// Does not implicitly fall through, use the fallthrough keyword
// Very powerful, think `if` statements with syntax candy
// They support String, object instances, and primitives (Int, Double, etc)
let vegetable = "red pepper"
let vegetableComment: String
switch vegetable {
case "celery":
    vegetableComment = "Add some raisins and make ants on a log."
case "cucumber", "watercress": // match multiple values
    vegetableComment = "That would make a good tea sandwich."
case let localScopeValue where localScopeValue.hasSuffix("pepper"):
    vegetableComment = "Is it a spicy \(localScopeValue)?"
default: // required (in order to cover all possible input)
    vegetableComment = "Everything tastes good in soup."
}
print(vegetableComment)

// You use the `for-in` loop to iterate over a sequence, such as an array, dictionary, range