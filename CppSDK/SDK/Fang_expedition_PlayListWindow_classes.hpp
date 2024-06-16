#pragma once

 

// Package: Fang_expedition_PlayListWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C
// 0x0070 (0x02E8 - 0x0278)
class UFang_expedition_PlayListWindow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BG;                                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_PlayListItem_C*        Fang_expedition_PlayListItem;                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_PlayListItem_C*        Fang_expedition_PlayListItem_65;                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_PlayListItem_C*        Fang_expedition_PlayListItem_147;                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_PlayListItem_C*        Fang_expedition_PlayListItem_218;                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_PlayListItem_C*        Fang_expedition_PlayListItem_273;                  // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_67;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSelectPlayListSlot;                              // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnPressDetailButton;                               // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnPressFinishButton;                               // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnSelectPlayListSlot__DelegateSignature(int32 Param_Index);
	void OnPressDetailButton__DelegateSignature(int32 Param_Index);
	void OnPressFinishButton__DelegateSignature(int32 Param_Index);
	void ExecuteUbergraph_Fang_expedition_PlayListWindow(int32 EntryPoint);
	void Destruct();
	void CB_OnPressFinishButton(int32 Param_Index);
	void CB_OnPressDetailButton(int32 Param_Index);
	void Construct();
	void SetData(struct FSBFang_expeditionData& ExpeditionData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_PlayListWindow_C">();
	}
	static class UFang_expedition_PlayListWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_PlayListWindow_C>();
	}
};
static_assert(alignof(UFang_expedition_PlayListWindow_C) == 0x000008, "Wrong alignment on UFang_expedition_PlayListWindow_C");
static_assert(sizeof(UFang_expedition_PlayListWindow_C) == 0x0002E8, "Wrong size on UFang_expedition_PlayListWindow_C");
static_assert(offsetof(UFang_expedition_PlayListWindow_C, UberGraphFrame) == 0x000278, "Member 'UFang_expedition_PlayListWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_PlayListWindow_C, BG) == 0x000280, "Member 'UFang_expedition_PlayListWindow_C::BG' has a wrong offset!");
static_assert(offsetof(UFang_expedition_PlayListWindow_C, Fang_expedition_PlayListItem) == 0x000288, "Member 'UFang_expedition_PlayListWindow_C::Fang_expedition_PlayListItem' has a wrong offset!");
static_assert(offsetof(UFang_expedition_PlayListWindow_C, Fang_expedition_PlayListItem_65) == 0x000290, "Member 'UFang_expedition_PlayListWindow_C::Fang_expedition_PlayListItem_65' has a wrong offset!");
static_assert(offsetof(UFang_expedition_PlayListWindow_C, Fang_expedition_PlayListItem_147) == 0x000298, "Member 'UFang_expedition_PlayListWindow_C::Fang_expedition_PlayListItem_147' has a wrong offset!");
static_assert(offsetof(UFang_expedition_PlayListWindow_C, Fang_expedition_PlayListItem_218) == 0x0002A0, "Member 'UFang_expedition_PlayListWindow_C::Fang_expedition_PlayListItem_218' has a wrong offset!");
static_assert(offsetof(UFang_expedition_PlayListWindow_C, Fang_expedition_PlayListItem_273) == 0x0002A8, "Member 'UFang_expedition_PlayListWindow_C::Fang_expedition_PlayListItem_273' has a wrong offset!");
static_assert(offsetof(UFang_expedition_PlayListWindow_C, VerticalBox_67) == 0x0002B0, "Member 'UFang_expedition_PlayListWindow_C::VerticalBox_67' has a wrong offset!");
static_assert(offsetof(UFang_expedition_PlayListWindow_C, OnSelectPlayListSlot) == 0x0002B8, "Member 'UFang_expedition_PlayListWindow_C::OnSelectPlayListSlot' has a wrong offset!");
static_assert(offsetof(UFang_expedition_PlayListWindow_C, OnPressDetailButton) == 0x0002C8, "Member 'UFang_expedition_PlayListWindow_C::OnPressDetailButton' has a wrong offset!");
static_assert(offsetof(UFang_expedition_PlayListWindow_C, OnPressFinishButton) == 0x0002D8, "Member 'UFang_expedition_PlayListWindow_C::OnPressFinishButton' has a wrong offset!");

}

