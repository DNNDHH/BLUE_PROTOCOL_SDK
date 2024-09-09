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
	 * WidgetBlueprintGeneratedClass LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C
	 * Size -> 0x00B0 (FullSize[0x0358] - InheritedSize[0x02A8])
	 */
	class ULibraryMenu_LoginBonus_C : public USBLibraryMenuItemList
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimLoginBonusInfoIn;                                    // 0x02B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_1;                                           // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULibraryMenu_LoginBonusInfo_C*                       LibraryMenu_LoginBonusInfo;                              // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULibraryMenu_LoginBonusList_C*                       List;                                                    // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_DetailsImagineBattleZoomIn_C*                   UMG_DetailsImagineBattleZoomIn;                          // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_ProductDetail_C*                                UMG_ProductDetail;                                       // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FSBLoginBonusWindowData>                     LoginBonusData;                                          // 0x02E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    ViewIndex;                                               // 0x02F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bInitialize;                                             // 0x02F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4TNN[0x3];                                   // 0x02F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnFinishDelegate;                                        // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class UTexture2DDynamic*>                           BannerImageList;                                         // 0x0308(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    BannerLoadCount;                                         // 0x0318(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ACLZ[0x4];                                   // 0x031C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            BannerImageIndex;                                        // 0x0320(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UBP_SBProductItemData_C*                             ProductData;                                             // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UTexture2D*>                                  TextureImageList;                                        // 0x0338(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    ViewDetailIndex;                                         // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KUSR[0x4];                                   // 0x034C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUMG_ProductDetailMenu_C*                            ProductDetailMenu;                                       // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetItemDetail(const struct FSBLoginBonusWindowDayData& ItemData);
		void DetailVisibility(int32_t Index);
		void DetailBannerChange();
		void ItemClickChange(int32_t Index);
		void SetInfomation(int32_t Index);
		void OnLoaded_ED6E864F49F04294CCC4DFAE0330EDC4(class UObject* Loaded);
		void ImageLoadWork();
		void Construct();
		void Initialize(int32_t DataCount);
		void LoginBonusListChange(int32_t Index);
		void Finish();
		void DetailClose();
		void BannerImageLoadCompleted();
		void BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_0_OnClickItemBoxDetail__DelegateSignature(class UBP_SBProductItemData_C* Data);
		void OnCloseDetailMenu(class UUMG_ProductDetailMenu_C* Sender);
		void BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type);
		void BndEvt__LibraryMenu_LoginBonus_UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_2_OnClickZoomOut__DelegateSignature();
		void ExecuteUbergraph_LibraryMenu_LoginBonus(int32_t EntryPoint);
		void OnFinishDelegate__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
