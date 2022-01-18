//
//  ViewController.swift
//  Dicee
//
//  Created by Remziye Perkin on 7/16/20.
//  Copyright © 2020 Erol Ozdemir. All rights reserved.
//

import UIKit

class ViewController: UIViewController {
    var randomDiceIndex1 : Int = 0
    var randomDiceIndex2 : Int = 0
    
   
    
    let diceArray = ["dice1", "dice2", "dice3","dice4","dice5","dice6","boom"]
    @IBOutlet weak var diceImageView1: UIImageView!
    @IBOutlet weak var diceImageView2: UIImageView!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        diceImageChanger()
        // Do any additional setup after loading the view, typically from a nib.
    }
    func diceImageChanger(){
        randomDiceIndex1 = Int(arc4random_uniform(6))
        randomDiceIndex2 = Int(arc4random_uniform(6))
        diceImageView1.image=UIImage(named: diceArray[randomDiceIndex1])
        diceImageView2.image=UIImage(named: diceArray[randomDiceIndex2])
    }
    @IBAction func rollButtonPressed(_ sender: UIButton) {
        
        //generated if statement here to make boom
    diceImageChanger()
        if randomDiceIndex1  == randomDiceIndex2 {
            diceImageView1.image=UIImage(named: diceArray[6])
            diceImageView2.image=UIImage(named: diceArray[6])
        }
    }
}

