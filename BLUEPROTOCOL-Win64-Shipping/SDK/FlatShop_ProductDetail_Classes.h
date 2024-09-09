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
	 * WidgetBlueprintGeneratedClass FlatShop_ProductDetail.FlatShop_ProductDetail_C
	 * Size -> 0x0084 (FullSize[0x02FC] - InheritedSize[0x0278])
	 */
	class UFlatShop_ProductDetail_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimBlink;                                               // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_Bonus;                                       // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommonIcon_C*                                       CommonIcon;                                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Icon_Limited;                                            // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Icon_Product;                                            // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Label_Quantity;                                          // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClose;                                                 // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FSBFlatShopItemSetMasterData                        BonusData;                                               // 0x02C0(0x003C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void SetupBonusIcon(int32_t BounsId);
		void GetThumbnailTexture(int32_t ID);
		void OnLoaded_40E58A5D468CF66B4BD22F87CCA1810D(class UObject* Loaded);
		void OnFail_48D4A76A494FBE239EF1AD90CEDE58B4(class UTexture2DDynamic* Texture);
		void OnSuccess_48D4A76A494FBE239EF1AD90CEDE58B4(class UTexture2DDynamic* Texture);
		void SetProductData_RoPS(const struct FSBRoseOrbShopItemMasterData& ProductData);
		void SetFlags_ROS(int32_t Ribbon);
		void LoadImageName_Event(const class FName& Name);
		void LoadImageSoftRef_Event();
		void DownLoadImage_Event(const class FString& URL);
		void BndEvt__FlatShop_ProductDetail_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(class UCommonIcon_C* Sender);
		void Destruct();
		void OnClose_Event(class UUMG_ProductDetailMenu_C* Sender);
		void Construct();
		void ExecuteUbergraph_FlatShop_ProductDetail(int32_t EntryPoint);
		void OnClose__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
