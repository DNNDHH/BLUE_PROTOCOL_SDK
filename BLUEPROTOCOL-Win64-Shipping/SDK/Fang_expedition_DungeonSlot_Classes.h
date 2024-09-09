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
	 * WidgetBlueprintGeneratedClass Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C
	 * Size -> 0x0220 (FullSize[0x0498] - InheritedSize[0x0278])
	 */
	class UFang_expedition_DungeonSlot_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBButton_C*                                         DungeonListOpenButtonEx;                                 // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              NoItemImage;                                             // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Text_Standby;                                            // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_AreaListItem_C*                     View_Execute;                                            // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     ViewTypeSwitcher;                                        // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSBFang_expeditionAreaData                          AreaData;                                                // 0x02A8(0x00A8) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnSelect_Expedition;                                     // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSelect_Standby;                                        // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    Index;                                                   // 0x0370(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EY5V[0x4];                                   // 0x0374(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSBFang_expeditionPlayData                          PlayData;                                                // 0x0378(0x0120) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetBtn_Selected(bool BtnSelected);
		void SetPlayData(const struct FSBFang_expeditionPlayData& PlayData_, int32_t SlotIndex);
		void SetSlotType(int32_t Type);
		void Finish();
		void Initialize();
		void SetAreaData(const struct FSBFang_expeditionAreaData& AreaData_, int32_t SlotIndex);
		void Construct();
		void CB_ExpeditionSlotSelect(int32_t SlotIndex);
		void Destruct();
		void BndEvt__Fang_expedition_DungeonSlot_DungeonListOpenButtonEx_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Fang_expedition_DungeonSlot_DungeonListOpenButtonEx_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
		void ExecuteUbergraph_Fang_expedition_DungeonSlot(int32_t EntryPoint);
		void OnSelect_Standby__DelegateSignature(int32_t Index);
		void OnSelect_Expedition__DelegateSignature(int32_t Index, const struct FSBFang_expeditionPlayData& PlayData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
