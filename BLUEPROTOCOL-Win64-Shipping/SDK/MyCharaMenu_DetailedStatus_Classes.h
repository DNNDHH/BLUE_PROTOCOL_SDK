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
	 * WidgetBlueprintGeneratedClass MyCharaMenu_DetailedStatus.MyCharaMenu_DetailedStatus_C
	 * Size -> 0x0048 (FullSize[0x02C0] - InheritedSize[0x0278])
	 */
	class UMyCharaMenu_DetailedStatus_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimInOut;                                               // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCmnClose02_C*                                       CmnClose02;                                              // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        DurabilityVBox;                                          // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bVisible;                                                // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L0EE[0x7];                                   // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ESBAttribute>                                       AttributeOrderList;                                      // 0x02A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             CloseEvent;                                              // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void PlayInAnimForDhcBattleTopMenu(TArray<struct FSBDhcBattleAttributeResistanceInfo>* InDhcBattleScoreAttrResistInfos);
		void PlayInAnimPresetEquip(TArray<struct FSBPlayerPresetEquipItem>* InPresetEquipItemList);
		void PlayInAnimBase(bool InDoStatusUpdate);
		void SetupStatusParam(TArray<int32_t>* inValueList);
		void SetupStatusPresetEquip(TArray<struct FSBPlayerPresetEquipItem>* InPresetEquipItemList);
		void GetAttributeDurabilityListItemObj(ESBAttribute InAttribute, class UMyCharaMenu_AttributeDurabilityListItem_C** OutObj);
		void CreateAttributeDurabilityList();
		void ImmediateClose();
		void SetupStatus();
		void PlayOutAnim();
		void PlayInAnim();
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1();
		void BndEvt__MyCharaMenu_DetailedStatus_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature();
		void ExecuteUbergraph_MyCharaMenu_DetailedStatus(int32_t EntryPoint);
		void CloseEvent__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
