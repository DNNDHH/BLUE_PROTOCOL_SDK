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
	 * WidgetBlueprintGeneratedClass StepList_Gasha.StepList_Gasha_C
	 * Size -> 0x0098 (FullSize[0x0310] - InheritedSize[0x0278])
	 */
	class UStepList_Gasha_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      Box_Tab;                                                 // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         btn_page_next;                                           // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         btn_page_prev;                                           // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStepListItem_Gasha_C*                               StepListItem_Gasha_2;                                    // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStepListItem_Gasha_C*                               StepListItem_Gasha_3;                                    // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStepListItem_Gasha_C*                               StepListItem_Gasha_4;                                    // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStepListItem_Gasha_C*                               StepListItem_Gasha_5;                                    // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStepListItem_Gasha_C*                               StepListItem_Gasha_6;                                    // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UGashaMenu_CategoryItem_C*>                   BtnList;                                                 // 0x02C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FScriptMulticastDelegate                             OnChangeStep;                                            // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    BtnDispNumMax;                                           // 0x02E0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    BtnScrollNum;                                            // 0x02E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxStepNum;                                              // 0x02E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SelectedBtn;                                             // 0x02EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UCmnBtn16_C*>                                 Btn1;                                                    // 0x02F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UStepListItem_Gasha_C*>                       StepList;                                                // 0x0300(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void GetGashaInfo(int32_t BtnId, struct FSBGashaInfo* OutGashaInfo);
		void UpdateBtnPage();
		void GetSelectBtn(int32_t* OutSelectBtnId);
		void GetSelectStepNum(int32_t* OutSelectStepNum);
		void SetBtnSelected(int32_t SelectedBtnID);
		void SetBtnVisivility(ESlateVisibility IsVisibility);
		void CreateBtnList();
		void InitSetStepInfo(int32_t SelectStep, int32_t StepMax);
		void BndEvt__btn_page_next_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__btn_page_prev_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void CommonBtnClicked(int32_t BtnId);
		void BndEvt__StepList_Gasha_StepListItem_Gasha_1_K2Node_ComponentBoundEvent_9_OnBtnClicked__DelegateSignature(int32_t BtnId);
		void BndEvt__StepList_Gasha_StepListItem_Gasha_2_K2Node_ComponentBoundEvent_10_OnBtnClicked__DelegateSignature(int32_t BtnId);
		void BndEvt__StepList_Gasha_StepListItem_Gasha_3_K2Node_ComponentBoundEvent_11_OnBtnClicked__DelegateSignature(int32_t BtnId);
		void BndEvt__StepList_Gasha_StepListItem_Gasha_4_K2Node_ComponentBoundEvent_12_OnBtnClicked__DelegateSignature(int32_t BtnId);
		void BndEvt__StepList_Gasha_StepListItem_Gasha_5_K2Node_ComponentBoundEvent_13_OnBtnClicked__DelegateSignature(int32_t BtnId);
		void ExecuteUbergraph_StepList_Gasha(int32_t EntryPoint);
		void OnChangeStep__DelegateSignature(const struct FSBGashaInfo& GashaInfo);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
