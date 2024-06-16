#pragma once

 

// Package: UMG_LoginBonusList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_LoginBonusList.UMG_LoginBonusList_C
// 0x0098 (0x0310 - 0x0278)
class UUMG_LoginBonusList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_LoginBonusListLine_C*              Line1;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LoginBonusListLine_C*              Line2;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LoginBonusListLine_C*              Line3;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LoginBonusListLine_C*              Line4;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LoginBonusListLine_C*              Line5;                                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LoginBonusListLine_C*              Line6;                                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ListBG;                                            // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBListBox*                             ListBox;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsInitialize;                                      // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D83[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UUMG_LoginBonusListLine_C*>      LineWidget;                                        // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             StumpAnimationFinish;                              // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnListInitComplete;                                // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             ListItemClick;                                     // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UUMG_LoginBonusListLineItem_C*          LastSelectedItem;                                  // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void StumpAnimationFinish__DelegateSignature();
	void OnListInitComplete__DelegateSignature();
	void ListItemClick__DelegateSignature(int32 Param_Index);
	void ExecuteUbergraph_UMG_LoginBonusList(int32 EntryPoint);
	void OnListItemClick(int32 Param_Index, class UUMG_LoginBonusListLineItem_C* SelectedItem);
	void OnImageLoadComplete(bool Enable);
	void Finish();
	void OnStumpAnimationFinish();
	void Initialize();
	void Construct();
	void SetData(const struct FSBLoginBonusWindowData& DataList, bool MouseClick);
	void PlayStampAnimation(int32 Param_Index, bool* Play);
	void SetupMouseClickEvent();
	void OnCloseAnimationFinished();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_LoginBonusList_C">();
	}
	static class UUMG_LoginBonusList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_LoginBonusList_C>();
	}
};
static_assert(alignof(UUMG_LoginBonusList_C) == 0x000008, "Wrong alignment on UUMG_LoginBonusList_C");
static_assert(sizeof(UUMG_LoginBonusList_C) == 0x000310, "Wrong size on UUMG_LoginBonusList_C");
static_assert(offsetof(UUMG_LoginBonusList_C, UberGraphFrame) == 0x000278, "Member 'UUMG_LoginBonusList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusList_C, Line1) == 0x000280, "Member 'UUMG_LoginBonusList_C::Line1' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusList_C, Line2) == 0x000288, "Member 'UUMG_LoginBonusList_C::Line2' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusList_C, Line3) == 0x000290, "Member 'UUMG_LoginBonusList_C::Line3' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusList_C, Line4) == 0x000298, "Member 'UUMG_LoginBonusList_C::Line4' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusList_C, Line5) == 0x0002A0, "Member 'UUMG_LoginBonusList_C::Line5' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusList_C, Line6) == 0x0002A8, "Member 'UUMG_LoginBonusList_C::Line6' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusList_C, ListBG) == 0x0002B0, "Member 'UUMG_LoginBonusList_C::ListBG' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusList_C, ListBox) == 0x0002B8, "Member 'UUMG_LoginBonusList_C::ListBox' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusList_C, IsInitialize) == 0x0002C0, "Member 'UUMG_LoginBonusList_C::IsInitialize' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusList_C, LineWidget) == 0x0002C8, "Member 'UUMG_LoginBonusList_C::LineWidget' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusList_C, StumpAnimationFinish) == 0x0002D8, "Member 'UUMG_LoginBonusList_C::StumpAnimationFinish' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusList_C, OnListInitComplete) == 0x0002E8, "Member 'UUMG_LoginBonusList_C::OnListInitComplete' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusList_C, ListItemClick) == 0x0002F8, "Member 'UUMG_LoginBonusList_C::ListItemClick' has a wrong offset!");
static_assert(offsetof(UUMG_LoginBonusList_C, LastSelectedItem) == 0x000308, "Member 'UUMG_LoginBonusList_C::LastSelectedItem' has a wrong offset!");

}

