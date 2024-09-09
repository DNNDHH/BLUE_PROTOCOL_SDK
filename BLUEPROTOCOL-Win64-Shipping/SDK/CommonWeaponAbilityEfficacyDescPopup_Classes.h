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
	 * WidgetBlueprintGeneratedClass CommonWeaponAbilityEfficacyDescPopup.CommonWeaponAbilityEfficacyDescPopup_C
	 * Size -> 0x0051 (FullSize[0x02C9] - InheritedSize[0x0278])
	 */
	class UCommonWeaponAbilityEfficacyDescPopup_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCmnClose01_C*                                       CloseBtn;                                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn23_C*                                         CmnBtn23_A;                                              // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn23_C*                                         CmnBtn23_T;                                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               SBButtonFullScreen;                                      // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 TitleTxt;                                                // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_CommonWeaponSpecialDetailed_C*                  WBP_CommonWeaponSpecialMainSubDetailed;                  // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommonWeaponAbilityInfoSlotListDetailed_C*          WeaponAbilityInfoSlotListBody;                           // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClose;                                                 // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bIsClosing;                                              // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void CheckAbility(const struct FOwnItemInfo& OwnItem, bool* FalseIsNone);
		void CheckSlot(const struct FOwnItemInfo& OwnItem, bool* FalseIsNone);
		void SetupByUniqueId(const class FString& UniqueId);
		void Setup(const struct FOwnItemInfo& OwnItemInfo);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void BndEvt__NewWidgetBlueprint222_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature();
		void Destruct();
		void BndEvt__CommonWeaponAbilityEfficacyDescPopup_SBButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void OnPressCancelKey();
		void ChangeMode(bool AbilityMode);
		void BndEvt__CommonWeaponAbilityEfficacyDescPopup_CmnBtn23_T_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature();
		void BndEvt__CommonWeaponAbilityEfficacyDescPopup_CmnBtn23_A_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature();
		void ExecuteUbergraph_CommonWeaponAbilityEfficacyDescPopup(int32_t EntryPoint);
		void OnClose__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
