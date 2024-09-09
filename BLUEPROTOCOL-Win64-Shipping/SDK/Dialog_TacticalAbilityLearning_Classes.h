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
	 * WidgetBlueprintGeneratedClass Dialog_TacticalAbilityLearning.Dialog_TacticalAbilityLearning_C
	 * Size -> 0x0081 (FullSize[0x0331] - InheritedSize[0x02B0])
	 */
	class UDialog_TacticalAbilityLearning_C : public USBUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimOut;                                                 // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimIn;                                                  // 0x02C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class USBButton_C*                                         Btn_Decide;                                              // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               Btn_FullScreen;                                          // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnClose01_C*                                       CmnClose01;                                              // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                          GridPanel_SkillIconList;                                 // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 TextDecide;                                              // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 TextDetail;                                              // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 TextTitle;                                               // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             EndAnimIn;                                               // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             EndAnimOut;                                              // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<struct FSBSkillParam>                               ReserveSkillIDList;                                      // 0x0320(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsOpen;                                                  // 0x0330(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetEnableButtonClose(bool bInIsEnabled);
		void SetEnableButtonFullScreen(bool bInIsEnabled);
		void SetEnableButtonDecide(bool bInIsEnabled);
		void SetEnableButton(bool bInIsEnabled);
		void SetDecideTextTable(class USBTextTableAsset* InTextTable, int32_t InTextId);
		void SetDecideText(const class FText& InText);
		void SetDetailTextTable(class USBTextTableAsset* InTextTable, int32_t InTextId);
		void SetDetailText(const class FText& InText);
		void SetTitleTextTable(class USBTextTableAsset* InTextTable, int32_t InTextId);
		void SetTitleText(const class FText& InText);
		void PlayAnimationOut();
		void PlayAnimationIn();
		void Closed();
		void Close();
		void Opened();
		void Open();
		void CreateSkillIcon(int32_t InSkillId, int32_t InSkillLV, int32_t InRow, int32_t InColumn);
		void Setup(TArray<struct FSBSkillParam>* InSkillParam);
		void BindEscapeKey();
		void UnbindEscapeKey();
		void CustomEvent();
		void BndEvt__TacticalAbilityLearningDialog_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature();
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void BndEvt__TacticalAbilityLearningDialog_Btn_Decide_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__TacticalAbilityLearningDialog_Btn_FullScreen_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void Construct();
		void OnPressEsc();
		void BndEvt__Dialog_TacticalAbilityLearning_Btn_Decide_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Dialog_TacticalAbilityLearning_Btn_Decide_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
		void Destruct();
		void ExecuteUbergraph_Dialog_TacticalAbilityLearning(int32_t EntryPoint);
		void EndAnimOut__DelegateSignature();
		void EndAnimIn__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
