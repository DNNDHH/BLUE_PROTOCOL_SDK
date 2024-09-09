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
	 * WidgetBlueprintGeneratedClass UMG_ProductDetail.UMG_ProductDetail_C
	 * Size -> 0x00E0 (FullSize[0x0358] - InheritedSize[0x0278])
	 */
	class UUMG_ProductDetail_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ZoomPlayerCapture;                                       // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCmnCostume_C*                                       CmnCostume;                                              // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UShopMenuDetailsSwitcher_C*                          ShopMenuDetailsSwitcher;                                 // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		unsigned char                                              Data[0x10];                                              // 0x0298(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		class UBP_SBProductItemData_C*                             SelectedItemData;                                        // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bZoomIn;                                                 // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCheckLayout;                                            // 0x02B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R9O1[0x2];                                   // 0x02B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                LayoutType;                                              // 0x02B4(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JM8V[0x4];                                   // 0x02BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int32_t, class UBP_SBProductItemData_C*>              TryingCostumeItemDataMap;                                // 0x02C0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class UBP_SBProductItemData_C*                             WorkingCostumeItemData;                                  // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnShowDetails;                                           // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickZoomIn;                                           // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class UBP_SBProductItemData_C*>                     TempCostumeItemDataList;                                 // 0x0338(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnClickItemBoxDetail;                                    // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void SetButtonPosition_Posing(EShopType IsExchangeShop);
		void SetSelectedSimpleItemData(EItemType ItemType, int32_t ItemIndex, int32_t Amount, bool bToggleTrying, bool bForceTrying);
		void UnsetSelectedItemData(class UBP_SBProductItemData_C* ItemData);
		void UnsetTryingCostumeItemData(class UBP_SBProductItemData_C* Data);
		void SetSelectedItemData(class UBP_SBProductItemData_C* ItemData, bool bToggleTrying, bool bForceTrying);
		void SetTryingAllIfCostumeSet();
		void SetTryingCostumeItemData(class UBP_SBProductItemData_C* Data, bool bTrying, bool bUpdateCapture);
		void BndEvt__CmnCostume_K2Node_ComponentBoundEvent_0_OnTrying__DelegateSignature(int32_t ItemIndex, bool bTrying);
		void BndEvt__CmnCostume_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature();
		void BndEvt__CmnCostume_K2Node_ComponentBoundEvent_2_OnClickZoomOut__DelegateSignature();
		void BndEvt__ExchangeShop_2_K2Node_ComponentBoundEvent_3_OnShow__DelegateSignature(bool bShow);
		void BndEvt__UMG_ProductDetail_ShopMenuDetailsSwitcher_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature();
		void BndEvt__UMG_ProductDetail_ShopMenuDetailsSwitcher_K2Node_ComponentBoundEvent_0_OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type);
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__CmnCostume_K2Node_ComponentBoundEvent_1_OnCreatePlayerCapture__DelegateSignature(class ABP_PlayerSceneCapture2D_Studio_C* PlayerCapture);
		void SetZoomFlag(bool bZoomIn, bool bOnlyDisplay, bool bAnimation);
		void SetData();
		void CloseItemDetail(bool bAnimation);
		void Destruct();
		void ExecuteUbergraph_UMG_ProductDetail(int32_t EntryPoint);
		void OnClickItemBoxDetail__DelegateSignature(class UBP_SBProductItemData_C* Data);
		void OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type);
		void OnShowDetails__DelegateSignature(bool bShow);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
