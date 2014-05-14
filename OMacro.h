
#pragma mark 其他

#define SCREEN_WIDTH ([UIScreen mainScreen].bounds.size.width)

#define SCREEN_HEIGHT ([UIScreen mainScreen].bounds.size.height

#define CURRENT_LANGUAGE ([[NSLocale preferredLanguages] objectAtIndex:0]) 

#define IS_RETINA ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)

#define IS_IPHONE5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)

#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)

#pragma mark 版本宏
#define IOS_VERSION [[UIDevice currentDevice] systemVersion]

#define IOS_VERSION_EQUAL_TO(v) ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)

#define IOS_VERSION_GREATER_THAN(v) ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)

#define IOS_VERSION_GREATER_THAN_OR_EQUAL_TO(v) ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)

#define IOS_VERSION_LESS_THAN(v) ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)

#define IOS_VERSION_LESS_THAN_OR_EQUAL_TO(v) ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)

#pragma mark 单例宏
#define DEFINE_SINGLETON_FOR_HEADER(className) \
\
+ (className *)shared##className;

#define DEFINE_SINGLETON_FOR_CLASS(className) \
\
+ (className *)shared##className { \
static className *shared##className = nil; \
static dispatch_once_t onceToken; \
dispatch_once(&onceToken, ^{ \
shared##className = [[self alloc] init]; \
}); \
return shared##className; \
}

#pragma mark 颜色宏
#define BGIMAGE(imageName) [UIColor colorWithPatternImage:[UIImage imageNamed:(imageName)]];

// 获取RGB颜色
#define RGBA(r,g,b,a) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:(a)]
#define RGB(r,g,b) RGBA(r,g,b,1.0f)
#define RGB_FROM_HX(rgbValue) [UIColor colorWithRed:((float)(((rgbValue) & 0xFF0000) >> 16))/255.0 green:((float)(((rgbValue) & 0xFF00) >> 8))/255.0 blue:((float)((rgbValue) & 0xFF))/255.0 alpha:1.0]

#pragma mark LOG相关

#ifdef DDLogError
#define DLogError(frmt, ...) DDLogError((@"\n[文件名:%s]\n" "[函数名:%s]\n" "[行号:%d] \n" frmt), __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
#define DLogError(frmt, ...) NSLog((@"\n[文件名:%s]\n" "[函数名:%s]\n" "[行号:%d] \n" frmt), __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__)
#endif

#ifdef DDLogWarn
#define DLogWarn(frmt, ...) DDLogWarn((@"\n[文件名:%s]\n" "[函数名:%s]\n" "[行号:%d] \n" frmt), __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
#define DLogWarn(frmt, ...) NSLog((@"\n[文件名:%s]\n" "[函数名:%s]\n" "[行号:%d] \n" frmt), __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__)
#endif

#ifdef DDLogInfo
#define DLogInfo(frmt, ...) DDLogInfo((@"\n[文件名:%s]\n" "[函数名:%s]\n" "[行号:%d] \n" frmt), __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
#define DLogInfo(frmt, ...) NSLog((@"\n[文件名:%s]\n" "[函数名:%s]\n" "[行号:%d] \n" frmt), __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__)
#endif

#ifdef DDLogDebug
#define DLogDebug(frmt, ...) DDLogDebug((@"\n[文件名:%s]\n" "[函数名:%s]\n" "[行号:%d] \n" frmt), __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
#define DLogDebug(frmt, ...) NSLog((@"\n[文件名:%s]\n" "[函数名:%s]\n" "[行号:%d] \n" frmt), __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__)
#endif

#ifdef DDLogVerbose
#define DLogVerbose(frmt, ...) DDLogVerbose((@"\n[文件名:%s]\n" "[函数名:%s]\n" "[行号:%d] \n" frmt), __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
#define DLogVerbose(frmt, ...) NSLog((@"\n[文件名:%s]\n" "[函数名:%s]\n" "[行号:%d] \n" frmt), __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__)
#endif
























