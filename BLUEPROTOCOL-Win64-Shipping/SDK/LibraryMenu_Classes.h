#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass LibraryMenu.LibraryMenu_C
	 * Size -> 0x0158 (FullSize[0x0400] - InheritedSize[0x02A8])
	 */
	class ULibraryMenu_C : public USBLibraryMenuItemList
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimPageIn;                                              // 0x02B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimOut2;                                                // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimOut;                                                 // 0x02C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCommandMenu_Line_C*                                 CommandMenu_Line;                                        // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenu_SubMenuLine_C*                          CommandMenu_SubMenuLine;                                 // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenuBg_C*                                    CommandMenuBg;                                           // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              LibraryMenuBg03_2;                                       // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              LibraryMenuBg03_3;                                       // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              LibraryMenuBg03_4;                                       // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenuCommonSubButtonList_C*                   MenuButtonList;                                          // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        MenuCanvas;                                              // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenuCommonSubButtonList_C*                   SubButtonList;                                           // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        SubMenu_Library;                                         // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		ELibraryMenuType                                           CurrMenueType;                                           // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VTFB[0x7];                                   // 0x0321(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUserWidget*                                         CurrSelectedMenuWidget;                                  // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    HelpId;                                                  // 0x0330(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_A009[0x4];                                   // 0x0334(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<bool>                                               IsReadCategoryList;                                      // 0x0338(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      BookmarkTypeList;                                        // 0x0348(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		ELibraryMenuType                                           SelectMenuType;                                          // 0x0358(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsLoadAchievement;                                       // 0x0359(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ELibraryMenuType                                           SetupMenuButtonId;                                       // 0x035A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_P5NE[0x5];                                   // 0x035B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        ViewedDemoIdList;                                        // 0x0360(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      Dummy_ViewedDemoList;                                    // 0x0370(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FString, ELibraryMenuType>                      BookmarkToLibraryMenuTypeMap;                            // 0x0380(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    SubMenuType;                                             // 0x03D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Y30B[0x4];                                   // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSBAchievementInfo>                          AchievementList;                                         // 0x03D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsLoginBonusBtnEnable;                                   // 0x03E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FZ97[0x7];                                   // 0x03E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        ReadDemoIdList;                                          // 0x03F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		ESubMenuTermRequestReply TermRequest(ESubMenuTermReason InReason);
		void CheckReadDemoIdList(TArray<class FName>* In);
		void SetupLibraryButtonExcrametion();
		void GetCharacterAchievementData(int32_t InputPin, struct FSBAchievementInfo* Output);
		void SetupSelectedSubMenu(int32_t Index);
		ELibraryMenuType BookmarkTypeToMenueType(const class FString& Key);
		void SetTitleAndHelpTextId(ELibraryMenuType InSelectedMenuType, int32_t InSubIndex);
		void RefleshNewIcon(int32_t Index);
		void SetupTheaterButtonExcrametion();
		void SetupAchievementButtonExcrametion();
		void SetupMenuButtonExcrametion(int32_t Selection);
		void SetupSelectedMenu(ELibraryMenuType InSelectedMenuType);
		void GetIdListCallback(bool WasSuccessful, int32_t RetCode, ESBLibraryPictureBookType Type);
		void OnParentTerm();
		void OnRMShopClosed();
		void OnSubMenuUpdate(int32_t MainPage, int32_t SubPage);
		void ResetMouseCursorTypeToDefaultRequest();
		void Construct();
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(int32_t ButtonId);
		void SelectTab(ELibraryMenuType InputPin);
		void BookmarkUpdateRequest();
		void UpdateBookmarkStatusButton();
		void OnLoadAchivementDelegate_event(bool Result, TArray<struct FSBAchievementInfo> AchievementList);
		void SetupAchievement_Event();
		void SetupTheater_Event();
		void OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType);
		void Library_SubMenu_Open();
		void BndEvt__LibraryMenu_SubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(int32_t ButtonId);
		void ButtonRefreshAchievement();
		void OnLoadAchievementDataDelegate_Event(bool Result, int32_t RetCode);
		void ExecuteUbergraph_LibraryMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
