//
//  ViewController.m
//  单例
//
//  Created by htkg on 2017/8/21.
//  Copyright © 2017年 MF. All rights reserved.
//

#import "ViewController.h"
#import "MFShareTool.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    NSLog(@"%@----%@",[MFShareTool defaultShareTool],[[MFShareTool alloc]init]);
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
