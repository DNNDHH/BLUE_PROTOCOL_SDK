#pragma once

 

// Package: RankingMenu_CategoryButtonList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RankingMenu_CategoryButtonList.RankingMenu_CategoryButtonList_C
// 0x0050 (0x02C8 - 0x0278)
class URankingMenu_CategoryButtonList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HorizontalBox_0;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FName>                           TextIdList;                                        // 0x0288(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	class USBTextTableAsset*                      TextTable;                                         // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class URankingMenu_CategoryButton_C*>  Buttons;                                           // 0x02A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             OnClick;                                           // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         FocusButtonId;                                     // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClick__DelegateSignature(int32 ButtonId);
	void ExecuteUbergraph_RankingMenu_CategoryButtonList(int32 EntryPoint);
	void ChangeFocusButton(int32 ButtonId);
	void Construct();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RankingMenu_CategoryButtonList_C">();
	}
	static class URankingMenu_CategoryButtonList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URankingMenu_CategoryButtonList_C>();
	}
};
static_assert(alignof(URankingMenu_CategoryButtonList_C) == 0x000008, "Wrong alignment on URankingMenu_CategoryButtonList_C");
static_assert(sizeof(URankingMenu_CategoryButtonList_C) == 0x0002C8, "Wrong size on URankingMenu_CategoryButtonList_C");
static_assert(offsetof(URankingMenu_CategoryButtonList_C, UberGraphFrame) == 0x000278, "Member 'URankingMenu_CategoryButtonList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URankingMenu_CategoryButtonList_C, HorizontalBox_0) == 0x000280, "Member 'URankingMenu_CategoryButtonList_C::HorizontalBox_0' has a wrong offset!");
static_assert(offsetof(URankingMenu_CategoryButtonList_C, TextIdList) == 0x000288, "Member 'URankingMenu_CategoryButtonList_C::TextIdList' has a wrong offset!");
static_assert(offsetof(URankingMenu_CategoryButtonList_C, TextTable) == 0x000298, "Member 'URankingMenu_CategoryButtonList_C::TextTable' has a wrong offset!");
static_assert(offsetof(URankingMenu_CategoryButtonList_C, Buttons) == 0x0002A0, "Member 'URankingMenu_CategoryButtonList_C::Buttons' has a wrong offset!");
static_assert(offsetof(URankingMenu_CategoryButtonList_C, OnClick) == 0x0002B0, "Member 'URankingMenu_CategoryButtonList_C::OnClick' has a wrong offset!");
static_assert(offsetof(URankingMenu_CategoryButtonList_C, FocusButtonId) == 0x0002C0, "Member 'URankingMenu_CategoryButtonList_C::FocusButtonId' has a wrong offset!");

}

