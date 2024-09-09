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
	 * WidgetBlueprintGeneratedClass CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C
	 * Size -> 0x0068 (FullSize[0x02E0] - InheritedSize[0x0278])
	 */
	class UCommunicateSettingMenu_ClassData_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAwardIconItemList_C*                                AwardIconItemList;                                       // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_396;                                              // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TxtClassLevel;                                           // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TxtClassName;                                            // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ClickedBtnAwardIconItemList;                             // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickEvent;                                            // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnHover;                                                 // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnUnhver;                                                // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void SetData(ESBClassType InClassType, int32_t InClassLevel, TArray<int32_t> InAwardIdList);
		void SetClassIconAndName(ESBClassType InClassType, TArray<int32_t> InAwardIdList);
		void ErrorDataSet();
		void BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_0_ClickedBtnAwardItemIcon__DelegateSignature(int32_t AwardId);
		void SetAwardId(TArray<int32_t> InAwardId);
		void SetBtnEnable(bool IsEnable);
		void BndEvt__CommunicateSettingMenu_ClassData_Button_395_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__CommunicateSettingMenu_ClassData_Button_395_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_3_OnClickEvent__DelegateSignature();
		void BndEvt__CommunicateSettingMenu_ClassData_Button_395_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_5_OnUnhover__DelegateSignature();
		void BndEvt__CommunicateSettingMenu_ClassData_Button_395_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_8_OnHover__DelegateSignature();
		void ExecuteUbergraph_CommunicateSettingMenu_ClassData(int32_t EntryPoint);
		void OnUnhver__DelegateSignature();
		void OnHover__DelegateSignature();
		void OnClickEvent__DelegateSignature();
		void ClickedBtnAwardIconItemList__DelegateSignature(int32_t AwardId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
