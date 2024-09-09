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
	 * WidgetBlueprintGeneratedClass Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C
	 * Size -> 0x0088 (FullSize[0x0300] - InheritedSize[0x0278])
	 */
	class UFang_expedition_AreaListSelectWindow_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        AreaListBox;                                             // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              BG;                                                      // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnClose01_C*                                       CmnClose01;                                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_AreaListItem_C*                     Fang_expedition_AreaListItem;                            // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_AreaListItem_C*                     Fang_expedition_AreaListItem_71;                         // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_AreaListItem_C*                     Fang_expedition_AreaListItem_107;                        // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_MapIcon_C*                          Fang_expedition_MapIcon;                                 // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HLine_2;                                                 // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FSBFang_expeditionAreaData>                  ListData;                                                // 0x02C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UFang_expedition_AreaListItem_C*>             ListItems;                                               // 0x02D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FScriptMulticastDelegate                             OnListItemClick;                                         // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnCloseButtonClick;                                      // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void SetStatus(ESBFang_expeditionStatus Status, bool Time, bool New);
		void GetData(int32_t Index, struct FSBFang_expeditionAreaData* AreaData);
		void CB_OnClick(int32_t Index);
		void AddData(const struct FSBFang_expeditionAreaData& AreaData);
		void Clear();
		void BndEvt__Fang_expedition_AreaListSelectWindow_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature();
		void ExecuteUbergraph_Fang_expedition_AreaListSelectWindow(int32_t EntryPoint);
		void OnCloseButtonClick__DelegateSignature();
		void OnListItemClick__DelegateSignature(int32_t Index);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
