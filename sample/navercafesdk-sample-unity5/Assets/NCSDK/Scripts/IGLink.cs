// ------------------------------------------------------------------------------
//  <autogenerated>
//      This code was generated by a tool.
//      Mono Runtime Version: 4.0.30319.1
// 
//      Changes to this file may cause incorrect behavior and will be lost if 
//      the code is regenerated.
//  </autogenerated>
// ------------------------------------------------------------------------------
using System;
using System.Runtime.InteropServices;

public interface IGLink
{
	void executeHome ();

	void executeArticle (int articleId);

	void executeMenu (int menuId);
	
	void executeArticlePost ();
	
	void executeArticlePostWithImage (string filePath);
	
	void executeArticlePostWithVideo (string filePath);
	
	void syncGameUserId (string gameUserId);
	
	void startWidget ();
	
	void stopWidget ();
	
	void setUseWidgetVideoRecord (bool useVideoRecord);

	void setUseWidgetScreenShot (bool useScreenShot);
		 
	void setShowWidgetWhenUnloadSDK (bool useWidget);

	void executeMore ();
	
	string getCurrentChannelCode ();
	
	void setChannelCode (string channelCode);

	void setThemeColor(string themeColorCSSString);

	void setThemeColor(string themeColorCSSString, string backgroundCSSString);

	void setWidgetStartPosition(bool isLeft, int heightPercentage);

    void init(int cafeId, string clientId, string clientSecret);

    void initGlobal(string consumerKey, string secretKey, int communityNo, int loungeNo);
}
