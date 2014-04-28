// Word Puzzle class to generate a word puzzle like words with friends etc

@protocol WordPuzzleDelegate;

@interface WordPuzzle : NSObject

@property (weak, nonatomic) id <WordPuzzleDelegate> delegate;

@property (nonatomic) CGSize questionGridCellSize;  //size of the buttons in the question part of the puzzle (40x40 Default)
@property (nonatomic) CGSize answerGridCellSize;    //size of the buttons in the answer part of the puzzle (40x40 Default)

- (id)initWithWord:(NSString *)str andRandomCharacterToInjectCount:(int)count;
- (void)addQuestionButtonsGridWithFrame:(CGPoint)origin showOn:(UIView *)viewToAdd;
- (void)addAnswerGridWithFrame:(CGPoint)origin showOn:(UIView *)viewToAdd;

@end

@protocol WordPuzzleDelegate <NSObject>
@required
- (void)didFinishSolvingPuzzle;

@optional
- (void)didSelectCorrectTile:(NSString *)letterSelected;
- (void)didSelectWrongTile:(NSString *)letterSelected;
@end
