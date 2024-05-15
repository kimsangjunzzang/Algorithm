//
//  main.swift
//  Algorithm
//
//  Created by 김상준 on 5/15/24.
//

import Foundation

let input = readLine()!
    .split(separator: " ")
    .map{Int($0)!}

print(
    abs(
        input[0] - input[1]
    
    )
)
