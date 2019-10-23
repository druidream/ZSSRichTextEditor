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
    "    .predefined-placeholder {    "
    "        width: auto;     "
    "        display: inline-block !important;     "
    "        display: inline;    "
    "        padding: 1px 4px;    "
    "        border-radius: 3px;    "
    "        background-color: #c9daf8;    "
    "        color: transparent;    "
    "          text-shadow: 0 0 0 black;    "
    "        outline: 0px solid transparent;    "
    "    }    "
    "        "
    "    .predefined-placeholder:focus {    "
    "        width: auto;     "
    "        display: inline-block !important;     "
    "        display: inline;    "
    "        background-color: #336dd4;    "
    "        color: transparent;    "
    "          text-shadow: 0 0 0 white;    "
    "        outline: 0px solid transparent;    "
    "    }    "
    "        "
    "    .custom-placeholder {    "
    "        width: auto;     "
    "        display: inline-block !important;     "
    "        display: inline;    "
    "        padding: 1px 4px;    "
    "        border-radius: 3px;    "
    "        background-color: #ffdcb8;    "
    "        color: black;    "
    "        caret-color: blue;    "
    "        outline: 0px solid transparent;    "
    "    }    "
    "        "
    "    .custom-placeholder:focus {    "
    "        width: auto;     "
    "        display: inline-block !important;     "
    "        display: inline;    "
    "        background-color: white;    "
    "        color: black;    "
    "        caret-color: blue;    "
    "        box-shadow: 0 0 0 1pt #ffdcb8;    "
    "        outline: 0px solid transparent;    "
    "    }    ";
    [self setCSS:customCSS];

    self.alwaysShowToolbar = YES;
    self.receiveEditorDidChangeEvents = NO;

    // HTML Content to set in the editor
    NSString *html = @"<div class='test'></div><!-- This is an HTML comment -->"
    "<p>This is a test of the <strong>ZSSRichTextEditor</strong> by <a title=\"Zed Said\" href=\"http://www.zedsaid.com\">Zed Said Studio</a></p>"
    "<div tabindex=\"-1\" class=\"custom-placeholder\">Placeholder1</div>";

    // Set the base URL if you would like to use relative links, such as to images.
    self.baseURL = [NSURL URLWithString:@"http://www.zedsaid.com"];
    self.shouldShowKeyboard = NO;
    // Set the HTML contents of the editor
    [self setPlaceholder:@"This is a placeholder that will show when there is no content(html)"];

    [self setHTML:html];

}


@end
