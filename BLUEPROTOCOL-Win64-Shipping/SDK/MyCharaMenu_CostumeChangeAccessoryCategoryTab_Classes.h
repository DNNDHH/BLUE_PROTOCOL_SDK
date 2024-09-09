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
	 * WidgetBlueprintGeneratedClass MyCharaMenu_CostumeChangeAccessoryCategoryTab.MyCharaMenu_CostumeChangeAccessoryCategoryTab_C
	 * Size -> 0x0039 (FullSize[0x02B1] - InheritedSize[0x0278])
	 */
	class UMyCharaMenu_CostumeChangeAccessoryCategoryTab_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      HorizontalBoxForCostumeAccessoryCategoryIconBtns;        // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              IconListBg01;                                            // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnAccessoryCategoryIconBtnClicked;                       // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<E_MyCharaMenu_AccessoryCategory>                    AccessoryCategories;                                     // 0x02A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		E_MyCharaMenu_AccessoryCategory                            SelectedAccesoryCategory;                                // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetSelectedAccessoryCategoryIconBtn(E_MyCharaMenu_AccessoryCategory InAccessoryCategory);
		void UpdateSelectedAccessoryCategoryIconBtn(E_MyCharaMenu_AccessoryCategory InAccessoryCategory);
		void PreConstruct(bool IsDesignTime);
		void Destruct();
		void OnAccessoryCategoryBtnClickedEvent(E_MyCharaMenu_AccessoryCategory InAccessoryCategory);
		void ExecuteUbergraph_MyCharaMenu_CostumeChangeAccessoryCategoryTab(int32_t EntryPoint);
		void OnAccessoryCategoryIconBtnClicked__DelegateSignature(E_MyCharaMenu_AccessoryCategory InAccessoryCategory);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
