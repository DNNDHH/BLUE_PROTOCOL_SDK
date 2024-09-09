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
	 * WidgetBlueprintGeneratedClass LibraryMenu_Theater.LibraryMenu_Theater_C
	 * Size -> 0x0160 (FullSize[0x0408] - InheritedSize[0x02A8])
	 */
	class ULibraryMenu_Theater_C : public USBLibraryMenuItemList
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ULibraryMenuBtn3_C*                                  BtnPlay;                                                 // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCategoryList_Type1_C*                               CategoryList_Type1;                                      // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULibraryMenu_List_C*                                 LibraryMenu_List;                                        // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULibraryMenu_Search_C*                               LibraryMenu_Search;                                      // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULibraryMenu_TheaterDetails_C*                       LibraryMenu_TheaterDetails;                              // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        MoveAnim;                                                // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TheateGraffiti;                                          // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TheateLogo;                                              // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    CategoryListMax;                                         // 0x02F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SelectedItemListIndex;                                   // 0x02F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SelectCategoryId;                                        // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SelectCategoryListId;                                    // 0x02FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DemoChapter;                                             // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBDemoType                                                DemoType;                                                // 0x0304(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsCty;                                                   // 0x0305(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseCurrentMap;                                           // 0x0306(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BTEE[0x1];                                   // 0x0307(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurrentMapName;                                          // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class FName>                                        ViewedDemoList;                                          // 0x0318(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FSBTheaterData>                              DemoList;                                                // 0x0328(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        DemoAllList;                                             // 0x0338(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class USBCommandMenu*                                      CommandMenu;                                             // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class USBTheaterComponent*                                 TheaterComponent;                                        // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASBPlayerController*                                 PlayerController;                                        // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsCreatedAllList;                                        // 0x0360(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E9YA[0x7];                                   // 0x0361(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        Dummy_nllptr;                                            // 0x0368(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      Dummy_ViewedDemoList;                                    // 0x0378(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<int32_t, int32_t>                                     CategoryListMap;                                         // 0x0388(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<int32_t>                                            CategoryList;                                            // 0x03D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             UpdateNewIcon;                                           // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsNotViewdDemoList;                                      // 0x03F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VJPL[0x7];                                   // 0x03F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUIBlocker_C*                                        AllBlocker;                                              // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		ESubMenuTermRequestReply TermRequest(ESubMenuTermReason InReason);
		void CheckReadDemoIdList(TArray<class FName>* In);
		void InitExclamationIcon();
		void ExtractCategory(const class FName& Category, int32_t ID, bool* Ret);
		void IsReadAllCategory();
		void IsReadCategory(int32_t CategoryId);
		void AddDemoAllList(const class FName& DemoName);
		void CheckViewedDemoId(const class FName& DemoId, bool* IsOk);
		void LoadLibSaveData(class USBLibrarySaveManager** LibSaveData);
		void SaveLibSaveData();
		void CreteGameContentId(const class FName& LevelName, class FName* GameContentId);
		void CreateItemDetail(int32_t Index);
		void CreateItemList();
		void CheckLevelName(const class FName& Name, bool IsScript, bool* IsDemo);
		void GetDemoTypeName(ESBDemoType Type);
		void CreateCategoryList();
		void OnLoaded_56ABDCA943F8CB39C0C21897E8372530(class UObject* Loaded);
		void ResetMouseCursorTypeToDefaultRequest();
		void Construct();
		void BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature(const class FText& NewParam);
		void OnClickEvent(int32_t listIndex);
		void OnSubMenuUpdate(int32_t MainPage, int32_t SubPage);
		void OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType);
		void OnRMShopClosed();
		void OnParentTerm();
		void Destruct();
		void OnEndDialog(EYesNoDialogResult Result);
		void Initialize();
		void LoadThumbnail();
		void Request_SaveDemo(const class FName& DemoId);
		void SaveTheaterSelectedInfo(int32_t CategoryId, int32_t ListId, float CategoryOffset, float ListOffset);
		void BndEvt__LibraryMenu_Theater_BtnPlay_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
		void BndEvt__LibraryMenu_Theater_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature(int32_t ItemIndex);
		void ReleaseUIBlocker();
		void ExecuteUbergraph_LibraryMenu_Theater(int32_t EntryPoint);
		void UpdateNewIcon__DelegateSignature(int32_t Index);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
