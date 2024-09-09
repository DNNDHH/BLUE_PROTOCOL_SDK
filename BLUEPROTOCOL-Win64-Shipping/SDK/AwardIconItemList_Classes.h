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
	 * WidgetBlueprintGeneratedClass AwardIconItemList.AwardIconItemList_C
	 * Size -> 0x0088 (FullSize[0x0300] - InheritedSize[0x0278])
	 */
	class UAwardIconItemList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAwardIconItem_C*                                    AwardIconItem;                                           // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UAwardIconItem_C*                                    AwardIconItem_2;                                         // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UAwardIconItem_C*                                    AwardIconItem_3;                                         // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_264;                                              // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_52;                                          // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ClickedBtnAwardItemIcon;                                 // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickEvent;                                            // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    Count;                                                   // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IGFG[0x4];                                   // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            tmpAwardIdList;                                          // 0x02D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnHover;                                                 // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnUnhover;                                               // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void BndEvt__AwardIconItemList_AwardIconItem_K2Node_ComponentBoundEvent_0_ClickedBtnAwardList__DelegateSignature(int32_t outAwardId);
		void BndEvt__AwardIconItemList_AwardIconItem_1_K2Node_ComponentBoundEvent_1_ClickedBtnAwardList__DelegateSignature(int32_t outAwardId);
		void BndEvt__AwardIconItemList_AwardIconItem_2_K2Node_ComponentBoundEvent_2_ClickedBtnAwardList__DelegateSignature(int32_t outAwardId);
		void SetData(TArray<int32_t> InAwardIdList);
		void SetBtnEnable(bool IsEnable);
		void BndEvt__AwardIconItemList_Button_263_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__AwardIconItemList_Button_263_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__AwardIconItemList_Button_263_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__AwardIconItemList_Button_263_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
		void ExecuteUbergraph_AwardIconItemList(int32_t EntryPoint);
		void OnUnhover__DelegateSignature();
		void OnHover__DelegateSignature();
		void OnClickEvent__DelegateSignature();
		void ClickedBtnAwardItemIcon__DelegateSignature(int32_t AwardId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
