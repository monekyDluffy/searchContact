//
//  ViewController.h
//  SearchCoreTest
//
//  Created by Apple on 28/01/13.
//  Copyright (c) 2013 kewenya. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZXPersonListModel : NSObject
@property (nonatomic,copy)NSString *personId;//用户id
@property (nonatomic,copy)NSString *name;//用户名称
@property (nonatomic,copy)NSString *username;//用户名;
@property (nonatomic,copy)NSString *fixedPhone;//
@property (nonatomic,copy)NSString *headurl;//头像
@property (nonatomic,copy)NSString *pinyin ;
@property (nonatomic,copy)NSString *path;
@property (nonatomic,copy)NSString *mobile;
@property (nonatomic,copy)NSString *sortId;
@property (nonatomic,assign)NSInteger sortidSort;
//- (NSComparisonResult)compareByName:(ZXOrganizationalPersonListModel *)stu;
@end

@interface ViewController : UIViewController<UISearchBarDelegate,UITableViewDelegate,UITableViewDataSource> {
}
@property (nonatomic,retain) UITableView *tableView;
@property (nonatomic,retain) UISearchBar *searchBar;

@property (nonatomic,retain) NSMutableDictionary *contactDic;
@property (nonatomic,retain) NSMutableArray *searchByName;
@property (nonatomic,retain) NSMutableArray *searchByPhone;
@end
