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
	 * WidgetBlueprintGeneratedClass InhelitPerkViewItem.InhelitPerkViewItem_C
	 * Size -> 0x0070 (FullSize[0x02E8] - InheritedSize[0x0278])
	 */
	class UInhelitPerkViewItem_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCmnBtn16_C*                                         BtnChange;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn16_C*                                         BtnPurge;                                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInheritCustomPerkSlotItem_C*                        InheritCustomPerkSlotItem;                               // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSBStackBPerk                                       PerkData;                                                // 0x0298(0x0030) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             SelectChange;                                            // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             SelectPurge;                                             // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void DisablePurge();
		void DisableChange();
		void SetEmpty();
		void SetPerkData(const struct FSBStackBPerk& SBCharacterWeaponPerkData);
		void BndEvt__InhelitPerkViewItem_BtnPurge_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
		void BndEvt__InhelitPerkViewItem_BtnChange_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature();
		void ExecuteUbergraph_InhelitPerkViewItem(int32_t EntryPoint);
		void SelectPurge__DelegateSignature(const struct FSBStackBPerk& SelectPerk);
		void SelectChange__DelegateSignature(const struct FSBStackBPerk& SelectData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
