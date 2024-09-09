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
	 * WidgetBlueprintGeneratedClass LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C
	 * Size -> 0x00E0 (FullSize[0x03D8] - InheritedSize[0x02F8])
	 */
	class ULibraryMenu_LoginBonusList_C : public USBLoginBonusWindow
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimLoginBonusListIn;                                    // 0x0300(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UScrollBox*                                          BannerBox;                                               // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         LeftArrow;                                               // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     LeftArrowSwitcher;                                       // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULibraryMenu_LoginBonus_BannerImage_C*               LibraryMenu_LoginBonus_BannerImage;                      // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULibraryMenu_LoginBonus_BannerImage_C*               LibraryMenu_LoginBonus_BannerImage_2;                    // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULibraryMenu_LoginBonus_BannerImage_C*               LibraryMenu_LoginBonus_BannerImage_3;                    // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Line;                                                    // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Line_3;                                                  // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         RightArrow;                                              // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     RightArrowSwitcher;                                      // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpacer*                                             SpacerLeft;                                              // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpacer*                                             SpacerRight;                                             // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_LoginBonusList_C*                               UMG_LoginBonusList;                                      // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       IsInitialize;                                            // 0x0370(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3LPQ[0x7];                                   // 0x0371(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnListInitComplete;                                      // 0x0378(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ListItemClick;                                           // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class ULibraryMenu_LoginBonusListLine_C*>           LineWidget;                                              // 0x0398(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class ULibraryMenu_LoginBonus_BannerImage_C*>       BannerDataList;                                          // 0x03A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		int32_t                                                    BannerViewIndex;                                         // 0x03B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DCWX[0x4];                                   // 0x03BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             BannerClick;                                             // 0x03C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class ULibraryMenu_LoginBonus_BannerImage_C*               LastSelectedBunner;                                      // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PlayAnimLoginBonusListIn();
		void UpdateBannerViewIndex();
		void SetBannerTexture(int32_t Index, class UTexture2D* Texture);
		void SetBannerViewIndex(int32_t ViewIndex);
		void SetBannerData(TArray<struct FSBLoginBonusWindowData>* DataList);
		void SetBannerImage(int32_t Index, class UTexture2DDynamic* TextureData);
		void SetupMouseClickEvent();
		void SetData(const struct FSBLoginBonusWindowData& DataList, bool MouseClick);
		void Initialize();
		void Finish();
		void OnImageLoadComplete(bool enable);
		void Construct();
		void OnListItemClick(int32_t Index);
		void BndEvt__LibraryMenu_LoginBonusList_LeftArrow_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__LibraryMenu_LoginBonusList_RightArrow_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void OnBannerClicked(int32_t ID, class ULibraryMenu_LoginBonus_BannerImage_C* SelectedBtn);
		void ExecuteUbergraph_LibraryMenu_LoginBonusList(int32_t EntryPoint);
		void BannerClick__DelegateSignature(int32_t ID);
		void ListItemClick__DelegateSignature(int32_t Index);
		void OnListInitComplete__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
