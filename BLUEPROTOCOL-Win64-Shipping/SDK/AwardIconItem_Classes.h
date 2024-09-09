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
	 * WidgetBlueprintGeneratedClass AwardIconItem.AwardIconItem_C
	 * Size -> 0x0248 (FullSize[0x04C0] - InheritedSize[0x0278])
	 */
	class UAwardIconItem_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              AwardIconBgEffect;                                       // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             AwardIconBtn_Hide;                                       // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             AwardIconBtn_NoData;                                     // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             AwardIconBtn_SetData;                                    // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_82;                                       // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ClickedBtnAwardList;                                     // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsToolTips;                                              // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6DQ0[0x7];                                   // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWBP_CommonToolTipDetail_Fixed_C*                    ToolTip;                                                 // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AwardId;                                                 // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_C077[0x4];                                   // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          AwardIconTexture;                                        // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSlateBrush                                         BgEffectHovered;                                         // 0x02D8(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         BgEffectPressed;                                         // 0x0360(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         BgEffectNormal;                                          // 0x03E8(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		unsigned char                                              NowLoadTexture[0x28];                                    // 0x0470(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              WaitLoadTexture[0x28];                                   // 0x0498(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		class UWBP_CommonToolTipDetail_Fixed_C* Get_AwardIconBtn_SetData_ToolTipWidget_1();
		void OnLoaded_DF1405EB4B765EAB9E4E3880C6A49640(class UObject* Loaded);
		void SetIsBtnEnable(bool bInIsEnabled);
		void SetData(int32_t InId);
		void BndEvt__AwardIconItem_Button_148_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void Construct();
		void BndEvt__AwardIconItem_AwardIconBtn_SetData_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__AwardIconItem_AwardIconBtn_SetData_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__AwardIconItem_AwardIconBtn_Hide_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__AwardIconItem_AwardIconBtn_SetData_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__AwardIconItem_AwardIconBtn_SetData_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__AwardIconItem_AwardIconBtn_Hide_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
		void IconLoadRequest();
		void IconLoadStart();
		void IconLoadRequestCheckStart();
		void Destruct();
		void ExecuteUbergraph_AwardIconItem(int32_t EntryPoint);
		void ClickedBtnAwardList__DelegateSignature(int32_t outAwardId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
