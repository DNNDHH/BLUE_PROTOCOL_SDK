#pragma once

 

// Package: VOptionSubButtonList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass VOptionSubButtonList.VOptionSubButtonList_C
// 0x0048 (0x02C0 - 0x0278)
class UVOptionSubButtonList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           VBox;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<int32>                                 TextIdList;                                        // 0x0288(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	class USBTextTableAsset*                      TextTable;                                         // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UOptionSubButton_C*>             OptionButtons;                                     // 0x02B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void PreConstruct(bool IsDesignTime);
	void ClearChilds();
	void GenerateChildren();
	void OnClicledChildButton(int32 ButtonId);
	void ChangeFocusButton(int32 ButtonId);
	void ExecuteUbergraph_VOptionSubButtonList(int32 EntryPoint);
	void OnClicked__DelegateSignature(int32 ButtonId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VOptionSubButtonList_C">();
	}
	static class UVOptionSubButtonList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVOptionSubButtonList_C>();
	}
};
static_assert(alignof(UVOptionSubButtonList_C) == 0x000008, "Wrong alignment on UVOptionSubButtonList_C");
static_assert(sizeof(UVOptionSubButtonList_C) == 0x0002C0, "Wrong size on UVOptionSubButtonList_C");
static_assert(offsetof(UVOptionSubButtonList_C, UberGraphFrame) == 0x000278, "Member 'UVOptionSubButtonList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UVOptionSubButtonList_C, VBox) == 0x000280, "Member 'UVOptionSubButtonList_C::VBox' has a wrong offset!");
static_assert(offsetof(UVOptionSubButtonList_C, TextIdList) == 0x000288, "Member 'UVOptionSubButtonList_C::TextIdList' has a wrong offset!");
static_assert(offsetof(UVOptionSubButtonList_C, TextTable) == 0x000298, "Member 'UVOptionSubButtonList_C::TextTable' has a wrong offset!");
static_assert(offsetof(UVOptionSubButtonList_C, OnClicked) == 0x0002A0, "Member 'UVOptionSubButtonList_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UVOptionSubButtonList_C, OptionButtons) == 0x0002B0, "Member 'UVOptionSubButtonList_C::OptionButtons' has a wrong offset!");

}

