//
//  ViewController.swift
//  Demo
//
//  Created by Joel Teply on 2/27/20.
//  Copyright © 2020 Joel Teply. All rights reserved.
//

import UIKit
import CambrianAR
import AVKit

class ViewController: UIViewController, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, CBARRemodelingViewDelegate {
    
    @IBOutlet weak var arView: CBARRemodelingView!
    let demoPaint = CBARRemodelingPaint()
    var colors:[UIColor] = []
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        self.arView.isAREnabled = true
        self.arView.toolMode = .paintbrush
        self.arView.scene.appendAsset(self.demoPaint);
        
        for _ in (0...100) {
            let randomColor = UIColor(red: CGFloat.random(in: 0...255)/255.0,
                                      green: CGFloat.random(in: 0...255)/255.0,
                                      blue: CGFloat.random(in: 0...255)/255.0, alpha: 1.0)
            colors.append(randomColor)
        }
        
        self.arView.delegate = self;
    }

    override func viewWillAppear(_ animated: Bool) {
        if AVCaptureDevice.authorizationStatus(for: AVMediaType.video) == .authorized {
            self.arView.startRunning()
        } else {
            AVCaptureDevice.requestAccess(for: AVMediaType.video) { response in
                if response {
                    DispatchQueue.main.async {
                        self.arView.startRunning()
                    }
                }
            }
        }
    }
    
    override func viewDidAppear(_ animated: Bool) {
        if let color = colors.randomElement() {
            self.demoPaint.color = color
        }
        
    }
    
    func collectionView(_ collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int {
        return colors.count
    }
    
    func collectionView(_ collectionView: UICollectionView, cellForItemAt indexPath: IndexPath) -> UICollectionViewCell {
        let cell = collectionView.dequeueReusableCell(withReuseIdentifier: "ColorCell", for: indexPath)
        
        cell.contentView.backgroundColor = colors[indexPath.row]
        
        return cell
    }
    
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, sizeForItemAt indexPath: IndexPath) -> CGSize {
        
        let itemsPer:CGFloat = 4
        let size = (collectionView.frame.size.height / itemsPer) - 10
        return CGSize(width: size, height: size)
    }
    
    func collectionView(_ collectionView: UICollectionView, didSelectItemAt indexPath: IndexPath) {
        self.demoPaint.color = colors[(indexPath as NSIndexPath).row]
    }
    
    @IBAction func cameraClicked(_ sender: Any) {
        if (self.arView.isLive) {
            self.arView.captureCurrentState()
        } else {
            self.arView.startRunning()
        }
    }
}

