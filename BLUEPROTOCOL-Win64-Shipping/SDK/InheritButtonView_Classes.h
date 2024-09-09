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
	 * WidgetBlueprintGeneratedClass InheritButtonView.InheritButtonView_C
	 * Size -> 0x0498 (FullSize[0x0710] - InheritedSize[0x0278])
	 */
	class UInheritButtonView_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCmnBtn16_C*                                         BtnReselect;                                             // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnWeaponSpecialMainRare_C*                         CmnWeaponSpecialMainRare;                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Icon_SpecialMainNum_2;                                   // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Icon_SpecialMainNum_3;                                   // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_287;                                               // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 SBRuntimeTextBlock_3;                                    // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 SBRuntimeTextBlock_4;                                    // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInheritButtonViewPerkListItem_C*                    Slot1;                                                   // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInheritButtonViewPerkListItem_C*                    Slot2;                                                   // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInheritButtonViewPerkListItem_C*                    Slot3;                                                   // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInheritButtonViewPerkListItem_C*                    Slot4;                                                   // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_Ratio;                                               // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_SpecialPerkName;                                     // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_SubSpecialPerkName;                                  // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FOwnItemInfo                                        SpecialPerk;                                             // 0x02F0(0x0150) Edit, BlueprintVisible, ExposeOnSpawn
		TArray<struct FSBStackBPerk>                               SelectPerks;                                             // 0x0440(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		struct FOwnItemInfo                                        Target;                                                  // 0x0450(0x0150) Edit, BlueprintVisible, ExposeOnSpawn
		TArray<struct FOwnItemInfo>                                Materials;                                               // 0x05A0(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		class FScriptMulticastDelegate                             SelectReselect;                                          // 0x05B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FOwnItemInfo                                        SubAbilitiy;                                             // 0x05C0(0x0150) Edit, BlueprintVisible, ExposeOnSpawn

	public:
		void SetTextMaxColor(class UTextBlock* Text, bool IsMax);
		void SetData(const struct FOwnItemInfo& SpecialPerk, TArray<struct FSBStackBPerk>* SelectPerks, const struct FOwnItemInfo& Target, TArray<struct FOwnItemInfo>* Materials, const struct FOwnItemInfo& SubAbilitiy);
		void Initialize();
		void UpdateVitalPerkName();
		void UpdateSlot();
		void Construct();
		void BndEvt__InheritButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
		void ExecuteUbergraph_InheritButtonView(int32_t EntryPoint);
		void SelectReselect__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
