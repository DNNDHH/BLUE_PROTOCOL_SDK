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
	 * WidgetBlueprintGeneratedClass InhelitPerkSelector.InhelitPerkSelector_C
	 * Size -> 0x0104 (FullSize[0x037C] - InheritedSize[0x0278])
	 */
	class UInhelitPerkSelector_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBButton_C*                                         Btn_Cansel;                                              // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         Btn_Decide;                                              // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               BtnClose;                                                // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_BtnCansel;                                           // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_BtnDecide;                                           // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VB_SlotView;                                             // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSBStackBPerk                                       Target;                                                  // 0x02B0(0x0030) Edit, BlueprintVisible, ExposeOnSpawn
		TArray<struct FSBStackBPerk>                               Materials;                                               // 0x02E0(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		TMap<class UPlugSetMenuPartSlotButton_C*, struct FSBStackBPerk> TargetList;                                              // 0x02F0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UPlugSetMenuPartSlotButton_C*                        SelectBtn;                                               // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSelectChange;                                          // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClose;                                                 // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<struct FSBStackBPerk>                               SetMaterials;                                            // 0x0368(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		int32_t                                                    Capacity;                                                // 0x0378(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void IsPerkSelected(const struct FSBStackBPerk& Perk, bool* bSelected);
		void IsPerkContains(bool* isContains);
		void AllSelectNone();
		void GenerateList();
		void Construct();
		void OnSelectListItem(class UPlugSetMenuPartSlotButton_C* SelectedButton);
		void BndEvt__InhelotPerkSelector_Btn_Decide_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__InhelotPerkSelector_Btn_Cansel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__InhelitPerkSelector_Btn_Cansel_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__InhelitPerkSelector_Btn_Cansel_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__InhelitPerkSelector_Btn_Decide_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__InhelitPerkSelector_Btn_Decide_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__InhelitPerkSelector_BtnClose_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_InhelitPerkSelector(int32_t EntryPoint);
		void OnClose__DelegateSignature();
		void OnSelectChange__DelegateSignature(const struct FSBStackBPerk& Before, const struct FSBStackBPerk& Select);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
