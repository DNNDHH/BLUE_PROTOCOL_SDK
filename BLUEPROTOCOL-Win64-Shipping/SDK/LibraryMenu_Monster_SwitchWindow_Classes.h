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
	 * WidgetBlueprintGeneratedClass LibraryMenu_Monster_SwitchWindow.LibraryMenu_Monster_SwitchWindow_C
	 * Size -> 0x0588 (FullSize[0x0800] - InheritedSize[0x0278])
	 */
	class ULibraryMenu_Monster_SwitchWindow_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBButton_C*                                         DetailTabButton;                                         // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRichTextBlock*                                    DetailTabText;                                           // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         ExplainTabButton;                                        // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRichTextBlock*                                    ExplainTabText;                                          // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          IDView;                                                  // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULibraryMenu_Monster_DetailTabMenu_C*                LibraryMenu_Monster_DetailTabMenu;                       // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULibraryMenu_Monster_ExplainTabMenu_C*               LibraryMenu_Monster_ExplainTabMenu;                      // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_67;                                       // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnAreaListVisibleChange;                                 // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FName                                                CountCheckEnemyId;                                       // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSBLibraryEnemyData                                 ViewEnemyData;                                           // 0x02D8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FButtonStyle                                        NormalBtn;                                               // 0x0300(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		struct FButtonStyle                                        SelectedBtn;                                             // 0x0578(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnAreaListSelect;                                        // 0x07F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void UpdateReadMarkCount();
		void CloseAreaList();
		void ChangeEnemyType(int32_t Type);
		void SetEnemyData(const struct FSBLibraryEnemyData& EnemyData);
		void SetActiveTab(int32_t Index);
		void Construct();
		void BndEvt__LibraryMenu_Monster_SwitchWindow_DetailTabButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__LibraryMenu_Monster_SwitchWindow_ExplainTabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
		void AreaListVisibleChange(bool Visible);
		void Destruct();
		void AreaListSelect(int32_t Index, const class FName& EnemyId);
		void ExecuteUbergraph_LibraryMenu_Monster_SwitchWindow(int32_t EntryPoint);
		void OnAreaListSelect__DelegateSignature(int32_t Index, const class FName& EnemyId);
		void OnAreaListVisibleChange__DelegateSignature(bool Visible);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
