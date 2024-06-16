#pragma once

 

// Package: OptionMenu_ConfigMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"
#include "EKeyGuideType_structs.hpp"
#include "Configurations_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C
// 0x0070 (0x02E8 - 0x0278)
class UOptionMenu_ConfigMenu_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommandMenuCommonSubButtonList_C*      CommandMenuCommonSubButtonList;                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UConfigSwicher_C*                       ConfigSwicher;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           KeyConfigGrp;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker_KeyConfigGrp;                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESBOperateMode                                CurrOperateMode;                                   // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D6B[0x3];                                     // 0x02A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CurrItemId;                                        // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DefaultItemId;                                     // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NextId;                                            // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnChanged;                                         // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         HUDLayoutButton;                                   // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D6C[0x4];                                     // 0x02C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             RequestParentFocus;                                // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnHasChenged;                                      // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void SetCloseState(bool Close);
	void IsClosable(bool* IsClose);
	void IsChangeable(bool* IsChanged);
	void SetSelectedItem(int32 InItemID);
	void Construct();
	void Init();
	void OnSaveCharaConfigDelegate_____(bool Result);
	void OnSaveCharaConfig(bool InResult);
	void ChangeCheck(int32 Param_NextId);
	void SuccessChanged______0();
	void CheckChanged();
	void SuccessChanged______1();
	void SelectSubMenu(int32 ButtonId);
	void FailChanged();
	void PurgeHudLayoutButton();
	void BndEvt__ConfigSwicher_K2Node_ComponentBoundEvent_2_RequestParentFocus__DelegateSignature();
	void OnHasChenged______0();
	void SetTitleMode(bool bTitleMode);
	void Destruct();
	void UnbindDelegates();
	void ExecuteUbergraph_OptionMenu_ConfigMenu(int32 EntryPoint);
	void OnHasChenged__DelegateSignature();
	void RequestParentFocus__DelegateSignature();
	void OnChanged__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OptionMenu_ConfigMenu_C">();
	}
	static class UOptionMenu_ConfigMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOptionMenu_ConfigMenu_C>();
	}
};
static_assert(alignof(UOptionMenu_ConfigMenu_C) == 0x000008, "Wrong alignment on UOptionMenu_ConfigMenu_C");
static_assert(sizeof(UOptionMenu_ConfigMenu_C) == 0x0002E8, "Wrong size on UOptionMenu_ConfigMenu_C");
static_assert(offsetof(UOptionMenu_ConfigMenu_C, UberGraphFrame) == 0x000278, "Member 'UOptionMenu_ConfigMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOptionMenu_ConfigMenu_C, CommandMenuCommonSubButtonList) == 0x000280, "Member 'UOptionMenu_ConfigMenu_C::CommandMenuCommonSubButtonList' has a wrong offset!");
static_assert(offsetof(UOptionMenu_ConfigMenu_C, ConfigSwicher) == 0x000288, "Member 'UOptionMenu_ConfigMenu_C::ConfigSwicher' has a wrong offset!");
static_assert(offsetof(UOptionMenu_ConfigMenu_C, KeyConfigGrp) == 0x000290, "Member 'UOptionMenu_ConfigMenu_C::KeyConfigGrp' has a wrong offset!");
static_assert(offsetof(UOptionMenu_ConfigMenu_C, UIBlocker_KeyConfigGrp) == 0x000298, "Member 'UOptionMenu_ConfigMenu_C::UIBlocker_KeyConfigGrp' has a wrong offset!");
static_assert(offsetof(UOptionMenu_ConfigMenu_C, CurrOperateMode) == 0x0002A0, "Member 'UOptionMenu_ConfigMenu_C::CurrOperateMode' has a wrong offset!");
static_assert(offsetof(UOptionMenu_ConfigMenu_C, CurrItemId) == 0x0002A4, "Member 'UOptionMenu_ConfigMenu_C::CurrItemId' has a wrong offset!");
static_assert(offsetof(UOptionMenu_ConfigMenu_C, DefaultItemId) == 0x0002A8, "Member 'UOptionMenu_ConfigMenu_C::DefaultItemId' has a wrong offset!");
static_assert(offsetof(UOptionMenu_ConfigMenu_C, NextId) == 0x0002AC, "Member 'UOptionMenu_ConfigMenu_C::NextId' has a wrong offset!");
static_assert(offsetof(UOptionMenu_ConfigMenu_C, OnChanged) == 0x0002B0, "Member 'UOptionMenu_ConfigMenu_C::OnChanged' has a wrong offset!");
static_assert(offsetof(UOptionMenu_ConfigMenu_C, HUDLayoutButton) == 0x0002C0, "Member 'UOptionMenu_ConfigMenu_C::HUDLayoutButton' has a wrong offset!");
static_assert(offsetof(UOptionMenu_ConfigMenu_C, RequestParentFocus) == 0x0002C8, "Member 'UOptionMenu_ConfigMenu_C::RequestParentFocus' has a wrong offset!");
static_assert(offsetof(UOptionMenu_ConfigMenu_C, OnHasChenged) == 0x0002D8, "Member 'UOptionMenu_ConfigMenu_C::OnHasChenged' has a wrong offset!");

}

