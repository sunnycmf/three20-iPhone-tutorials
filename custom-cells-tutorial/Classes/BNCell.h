#import "Three20/Three20.h"

///////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////
//////   BNSubtextTableFieldCell     ////
/////////////////////////////////////////

@interface BNSubtextTableFieldCell : TTSubtextTableFieldCell {

}

@end

///////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////
//////   BNSubtextWithRedTitleTableFieldCell     ////
/////////////////////////////////////////////////////

@interface BNSubtextWithRedTitleTableFieldCell : BNSubtextTableFieldCell {
	
}

@end


///////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////
//////   BNSubtextWithRedTitleAndURLTableFieldCell     ////
///////////////////////////////////////////////////////////

@interface BNSubtextWithRedTitleAndURLTableFieldCell : BNSubtextWithRedTitleTableFieldCell {
  UILabel* _featureURLLabel;
}

@end


///////////////////////////////////////////////////////////////////////////////////////////////////
