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
	 * WidgetBlueprintGeneratedClass WBP_ContentAction.WBP_ContentAction_C
	 * Size -> 0x0039 (FullSize[0x02F9] - InheritedSize[0x02C0])
	 */
	class UWBP_ContentAction_C : public USBContentActionWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        CanvasPanel_432;                                         // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ContentAction_AbsoluteDefense_C*                WBP_ContentAction_AbsoluteDefense;                       // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ContentAction_Break_C*                          WBP_ContentAction_Break;                                 // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_61;                                       // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class USBContentActionSkillWidget*>                 ContentWidgets_1;                                        // 0x02E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       IsInitialized;                                           // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void CheckInit();
		void OnVisibleChange();
		void CheckVisibleChange(ESBUIType UiType, bool Visibility, bool* DoChange);
		void SetWidgets();
		void CheckActiveMap(bool* IsActive);
		void LoadSavePosition();
		void SetEditMode(bool InEdit);
		void OnUIVisibleChange(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
		void Construct();
		void OnLayoutUpodate();
		void PreConstruct(bool IsDesignTime);
		void Destruct();
		void ExecuteUbergraph_WBP_ContentAction(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
