//
// Created by Jun Gu on 2019-10-23.
// Copyright (c) 2019 Zed Said Studio. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZSSRichTextEditor.h"

@interface ZSSVariablesViewController : ZSSRichTextEditor
@end

@implementation ZSSVariablesViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    self.title = @"Variables";

    //Set Custom CSS
    NSString *customCSS = @"    * {    "
    "        outline: 0px solid transparent;    "
    "    }    "
    "        "
    "    #zss_editor_content {padding:5px}    "
    "        "
    "    .customplaceholder {    "
    "        width: auto;     "
    "        display: inline-block !important;     "
    "        display: inline;    "
    "        padding: 2px 4px 1px 4px;    "
    "        border-radius: 3px;    "
    "        background-color: #4093F5;    "
    "        color: white;    "
    "        outline: 0px solid transparent;    "
    "    }    "
    "        "
    "    .customplaceholder_focus {    "
    "        background-color: white;    "
    "        color: #4093F5;    "
    "        box-shadow: 0 0 0 1pt #4093F5;    "
    "    }    ";
    [self setCSS:customCSS];

    self.alwaysShowToolbar = YES;
    self.receiveEditorDidChangeEvents = NO;

    // HTML Content to set in the editor
    NSString *html = @"<div class='test'></div><!-- This is an HTML comment -->"
    "<p>This is a test of the <strong>ZSSRichTextEditor</strong> by <a title=\"Zed Said\" href=\"http://www.zedsaid.com\">Zed Said Studio</a></p>"
    "<span class=\"customplaceholder\">Samantha</span>";

    // Set the base URL if you would like to use relative links, such as to images.
    self.baseURL = [NSURL URLWithString:@"http://www.zedsaid.com"];
    self.shouldShowKeyboard = NO;
    // Set the HTML contents of the editor
    [self setPlaceholder:@"This is a placeholder that will show when there is no content(html)"];

    [self setHTML:html];

}


@end

