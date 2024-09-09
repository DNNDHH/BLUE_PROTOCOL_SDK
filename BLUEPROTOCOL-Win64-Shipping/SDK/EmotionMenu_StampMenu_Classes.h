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
	 * WidgetBlueprintGeneratedClass EmotionMenu_StampMenu.EmotionMenu_StampMenu_C
	 * Size -> 0x0030 (FullSize[0x02A8] - InheritedSize[0x0278])
	 */
	class UEmotionMenu_StampMenu_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UChatSortItem_C*                                     ChatSortItem;                                            // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                          GridPanel;                                               // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStampCategoryMenu_C*                                StampCategoryMenu;                                       // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_ChatWindow_C*                                   ChatWindow;                                              // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SelectStampId;                                           // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SortType;                                                // 0x02A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetStampList(const struct FSBStampCategoryMasterData& InCategoryMasterData, struct FSBStampCategoryMasterData* OutCategoryMasterData);
		void SelectStamp(int32_t InStampId, class UChatStampButtonItem_C* InStampItem);
		void Hide();
		void Show();
		void SetDragable(bool InDragable);
		void UpdateIconSelect(class UChatStampButtonItem_C* InSelectIcon);
		void SetHistoryMode(bool bSet);
		void CreateStamp(const struct FSBStampCategoryMasterData& StampData);
		void Construct();
		void OnStampClicked_Event(int32_t StampId, class UChatStampButtonItem_C* InSelectItem);
		void BndEvt__StampCategoryMenu_K2Node_ComponentBoundEvent_21_OnUpdateStamp__DelegateSignature(const struct FSBStampCategoryMasterData& StampCategoryMasterData);
		void Destruct();
		void OnChangeCoolTimeEmotion(bool IsCoolTime);
		void BndEvt__EmotionMenu_StampMenu_ChatSortItem_K2Node_ComponentBoundEvent_0_OnSortChage__DelegateSignature(int32_t SortType);
		void UpdateSortType(int32_t SortType);
		void ExecuteUbergraph_EmotionMenu_StampMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
