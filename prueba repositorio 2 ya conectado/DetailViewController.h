//
//  DetailViewController.h
//  prueba repositorio 2 ya conectado
//
//  Created by felix sanhueza on 8/29/12.
//  Copyright (c) 2012 felix sanhueza. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
