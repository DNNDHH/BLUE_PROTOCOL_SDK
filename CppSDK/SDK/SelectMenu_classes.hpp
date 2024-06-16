#pragma once

 

// Package: SelectMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SelectMenu.SelectMenu_C
// 0x0038 (0x02E8 - 0x02B0)
class USelectMenu_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           VerticalBox_0;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSelectItem;                                      // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UUserWidget*>                    ItemList;                                          // 0x02D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         CurrentItem;                                       // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAutoClose;                                        // 0x02E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void OnSelectItem__DelegateSignature(int32 SelectItem);
	void ExecuteUbergraph_SelectMenu(int32 EntryPoint);
	void AddItem(const class FText& Item);
	void AddItemFromStringArray(const TArray<class FString>& ItemArray);
	void Close();
	void Destruct();
	void ProcSelectItem(int32 SelectItemIndex);
	void Show();
	void SetCurrentItem(int32 Param_CurrentItem);
	void ChangeCurrentItem(int32 Param_CurrentItem);
	void OnSelectMenuItem(class USelectMenuItem_C* SelectItem);
	void AddItemFromArray(const TArray<class FText>& ItemArray);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SelectMenu_C">();
	}
	static class USelectMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USelectMenu_C>();
	}
};
static_assert(alignof(USelectMenu_C) == 0x000008, "Wrong alignment on USelectMenu_C");
static_assert(sizeof(USelectMenu_C) == 0x0002E8, "Wrong size on USelectMenu_C");
static_assert(offsetof(USelectMenu_C, UberGraphFrame) == 0x0002B0, "Member 'USelectMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USelectMenu_C, VerticalBox_0) == 0x0002B8, "Member 'USelectMenu_C::VerticalBox_0' has a wrong offset!");
static_assert(offsetof(USelectMenu_C, OnSelectItem) == 0x0002C0, "Member 'USelectMenu_C::OnSelectItem' has a wrong offset!");
static_assert(offsetof(USelectMenu_C, ItemList) == 0x0002D0, "Member 'USelectMenu_C::ItemList' has a wrong offset!");
static_assert(offsetof(USelectMenu_C, CurrentItem) == 0x0002E0, "Member 'USelectMenu_C::CurrentItem' has a wrong offset!");
static_assert(offsetof(USelectMenu_C, bAutoClose) == 0x0002E4, "Member 'USelectMenu_C::bAutoClose' has a wrong offset!");

}

