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
	 * WidgetBlueprintGeneratedClass MyCharaMenu_CostumeCategoryIconBtn.MyCharaMenu_CostumeCategoryIconBtn_C
	 * Size -> 0x0031 (FullSize[0x02A9] - InheritedSize[0x0278])
	 */
	class UMyCharaMenu_CostumeCategoryIconBtn_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBButton_C*                                         Btn01;                                                   // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ImgIcon;                                                 // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ImgSelectedBg;                                           // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnButtonClicked;                                         // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		E_MyCharaMenu_CostumeCategory                              CostumeCategory;                                         // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void SetSelected(bool InIsSelected);
		void GetCostumeCategory(E_MyCharaMenu_CostumeCategory* OutCostumeCategory);
		void SetCostumeCategory(E_MyCharaMenu_CostumeCategory InCostumeCategory);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_MyCharaMenu_CostumeCategoryIconBtn(int32_t EntryPoint);
		void OnButtonClicked__DelegateSignature(E_MyCharaMenu_CostumeCategory InCostumeCategory);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
