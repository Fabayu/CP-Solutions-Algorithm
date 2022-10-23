import Foundation

public struct Stack<T> {
    
    // Stack Array of Elements
    fileprivate var stack: [T]
    private var maxSize: Int
    private var tos: Int
    
    public init(size: Int) {
        self.maxSize = size
        self.tos = 0
        self.stack = []
    }
    
    
    // push
    public mutating func push(_ item: T) {
        if (tos == maxSize) {
            print("Stack Overflow")
            return
        }
        stack.append(item)
        tos += 1
    }
    
    // pop
    public mutating func pop() -> T? {
        if isEmpty() {
            print("Stack Underflow")
            return nil
        }
        tos -= 1
        
        guard let item = stack.popLast() else {
            return nil
        }
        return item
    }
    
    // top
    public func top() -> T? {
        return stack.last
    }
    
    // isEmpty
    public func isEmpty() -> Bool {
        return stack.isEmpty
    }
}

extension Stack: CustomStringConvertible {
    public var description: String {
        let topDivider = "---Stack---\n"
        let bottomDivider = "\n-----------\n"
        let stackElements = stack.map { "\($0)" }.reversed().joined(separator: "\n")
        
        return topDivider + stackElements + bottomDivider
    }
}
