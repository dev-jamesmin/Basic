//
//  ViewController.swift
//  DynamicDispatch
//
//  Created by Jaemin Lee on 2021/05/17.
//

import UIKit

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        
        let object: Parent = Child()
        object.someMethod() // Parent의 someMethod를 호출할 것인가, Child의 someMethod를 호출할 것인가?
    }


}

