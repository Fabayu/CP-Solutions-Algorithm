import Cocoa

var tree: BinarySearchTree<Int> = .empty
tree.insert(newValue: 7)
tree.insert(newValue: 10)
tree.insert(newValue: 2)
tree.insert(newValue: 1)
tree.insert(newValue: 5)
tree.insert(newValue: 9)

print("====Full Binary Tree====\n\(tree)")

print("\n\n====In Order====")
tree.traverseInOrder { value in
    print(value)
}

print("\n\n====Pre Order====")

tree.traversePreOrder { value in
    print(value)
}

print("\n\n====Post Order====")
tree.traversePostOrder { value in
    print(value)
}

print("\n\n====Searching====")
print(tree.search(forValue: 5) ?? "Value not found")
print(tree.search(forValue: 11) ?? "Value not found")



