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
	 * WidgetBlueprintGeneratedClass UMG_MatchingMenu_SupplyList.UMG_MatchingMenu_SupplyList_C
	 * Size -> 0x0050 (FullSize[0x02C8] - InheritedSize[0x0278])
	 */
	class UUMG_MatchingMenu_SupplyList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCommonIcon_C*                                       CommonIcon0;                                             // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommonIcon_C*                                       CommonIcon1;                                             // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommonIcon_C*                                       CommonIcon2;                                             // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommonIcon_C*                                       CommonIcon3;                                             // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     Switcher;                                                // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClickIcon;                                             // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<struct FSBDungeonSupply>                            DungeonSupply;                                           // 0x02B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void Setup2();
		void OnClickCommonIcon(int32_t Index);
		void Clear();
		void Setup(const class FName& GameContentId);
		void BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon0_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(class UCommonIcon_C* Sender);
		void BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon1_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(class UCommonIcon_C* Sender);
		void BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature(class UCommonIcon_C* Sender);
		void BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature(class UCommonIcon_C* Sender);
		void ExecuteUbergraph_UMG_MatchingMenu_SupplyList(int32_t EntryPoint);
		void OnClickIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
