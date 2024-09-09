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
	 * WidgetBlueprintGeneratedClass MyCharaMenu_CostumeChangeCategoryTab.MyCharaMenu_CostumeChangeCategoryTab_C
	 * Size -> 0x0021 (FullSize[0x0299] - InheritedSize[0x0278])
	 */
	class UMyCharaMenu_CostumeChangeCategoryTab_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      HorizontalBoxForCostumeCategoryIconBtns;                 // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnCostumeCategoryIconBtnClicked;                         // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		E_MyCharaMenu_CostumeCategory                              SelectedCostumeCategory;                                 // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetSelectedCostumeCategoryIconBtn(E_MyCharaMenu_CostumeCategory InSelectedCostumeCategory);
		void UpdateSelectedCostumeCategoryIconBtn(E_MyCharaMenu_CostumeCategory InSelectedCostumeCategory);
		void PreConstruct(bool IsDesignTime);
		void OnCostumeCategoryIconBtnClickedEvent(E_MyCharaMenu_CostumeCategory InCostumeCategory);
		void Destruct();
		void ExecuteUbergraph_MyCharaMenu_CostumeChangeCategoryTab(int32_t EntryPoint);
		void OnCostumeCategoryIconBtnClicked__DelegateSignature(E_MyCharaMenu_CostumeCategory InCostumeCategory);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
