//
//  ViewController.h
//  File_read_delete_write
//
//  Created by spliang on 2014/4/1.
//  Copyright (c) 2014年 spliang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <sqlite3.h>

@interface ViewController : UIViewController
{
    sqlite3 *db;
}
@property (strong, nonatomic) NSString *databasePath;
@property (nonatomic) sqlite3 *contactDB;
@property (nonatomic, retain) IBOutlet UITextField *name;
@property (nonatomic, retain) IBOutlet UITextField *address;
@property (nonatomic, retain) IBOutlet UITextField *phone;
- (IBAction)saveData:(id)sender;
- (IBAction)findContact:(id)sender;
@property (nonatomic, retain) IBOutlet UILabel *status;

@end
