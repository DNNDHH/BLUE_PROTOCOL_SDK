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
	 * WidgetBlueprintGeneratedClass DhcBattleTopClassTypeList.DhcBattleTopClassTypeList_C
	 * Size -> 0x0040 (FullSize[0x02B8] - InheritedSize[0x0278])
	 */
	class UDhcBattleTopClassTypeList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UScrollBox*                                          ListScroll;                                              // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<ESBClassType>                                       PlayerClassTypeList;                                     // 0x0288(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		ESBClassType                                               PlayerCurrClassType;                                     // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NI74[0x7];                                   // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDhcBattleTopClassTypeListItem_C*                    CurrSelectedListItem;                                    // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClassTypeListItemSelected;                             // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void GetListItemByClassType(ESBClassType InClassType, class UDhcBattleTopClassTypeListItem_C** OutListItem);
		void GetCurrSelectedListItem(class UDhcBattleTopClassTypeListItem_C** OutListItem);
		void SetSelectedListItemTop();
		void UpdateListSelectedItem(class UDhcBattleTopClassTypeListItem_C* InListItem);
		void SetupList(TArray<struct FSBDhcBattleHighScoreInfo>* InScoreInfos);
		void SetPlayerCurrClassType(ESBClassType InClassType);
		void CreateList();
		void PreConstruct(bool IsDesignTime);
		void OnListItemClicked(class UDhcBattleTopClassTypeListItem_C* InSelf);
		void Destruct();
		void ExecuteUbergraph_DhcBattleTopClassTypeList(int32_t EntryPoint);
		void OnClassTypeListItemSelected__DelegateSignature(ESBClassType InClassType, const struct FSBDhcBattleHighScoreInfo& InScoreInfo, bool InIsScoreInfoEmpty);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
