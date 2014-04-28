## Wheel of Fortune style word puzzle for iOS 

### Usage

Copy .h and .m files and also the cell graphic

```objective-c
puzzle = [[WordPuzzle alloc]initWithWord:@"Word" andRandomCharacterToInjectCount:4];
```
"Word" is the string to be made into a puzzle and 4 is the number of random characters to add to the string to make it a puzzle

```objective-c
puzzle.delegate = self;
```

Layout the question section
```objective-c
[puzzle addQuestionButtonsGridWithFrame:CGPointMake(20, 150) showOn:self.view];
```

Layout the answer section
```objective-c
[puzzle addAnswerGridWithFrame:CGPointMake(20, 300) showOn:self.view];
```

You can set the cells sizes and also replace the roundedSquareCell.png is desired

![alt tag](http://imgur.com/9gYvdnq)